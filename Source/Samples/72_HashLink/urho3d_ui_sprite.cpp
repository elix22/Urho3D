#define HL_NAME(n) Urho3D_##n
extern "C"
{
#include <hl.h>
}

#include <Urho3D/Urho3DAll.h>
#include "global_types.h"

void finalize_urho3d_sprite(void *v)
{
   // printf("finalize_urho3d_sprite \n");
    hl_urho3d_sprite *hl_ptr = (hl_urho3d_sprite *)v;
    if (hl_ptr)
    {
        Urho3D::Sprite *urho3d_ptr = (Urho3D::Sprite *)hl_ptr->ptr;
        if (urho3d_ptr)
        {
          //  printf("finalize_urho3d_sprite  refs:%d\n", hl_ptr->ptr->Refs());
            /* hl_ptr->ptr is a SharedPtr , setting to NULL , decreases the reference count*/
            hl_ptr->ptr = NULL;
        }
        hl_ptr->finalizer = NULL;
    }
}

hl_urho3d_sprite *hl_alloc_urho3d_sprite(urho3d_context *context)
{

    hl_urho3d_sprite *p = (hl_urho3d_sprite *)hl_gc_alloc_finalizer(sizeof(hl_urho3d_sprite));
    memset(p,0,sizeof(hl_urho3d_sprite));
    p->finalizer = (void *)finalize_urho3d_sprite;
    p->ptr = new Sprite(context);
    return p;
}

HL_PRIM hl_urho3d_sprite *HL_NAME(_create_sprite)(urho3d_context *context)
{
    hl_urho3d_sprite *v = hl_alloc_urho3d_sprite(context);
    return v;
}

HL_PRIM hl_urho3d_texture2d *HL_NAME(_sprite_set_texture)(urho3d_context *context, hl_urho3d_sprite *sprite, hl_urho3d_texture2d *texture)
{

    SharedPtr<Urho3D::Sprite> urho3d_sprite(sprite->ptr);
    SharedPtr<Urho3D::Texture2D> urho3d_texture(texture->ptr);
    if (urho3d_sprite && urho3d_texture)
    {
        
        urho3d_sprite->SetTexture(urho3d_texture);
    }
    else
    {
        printf("_sprite_set_texture  NULL\n");
    }
    

    return texture;
}

HL_PRIM hl_urho3d_texture2d *HL_NAME(_sprite_get_texture)(urho3d_context *context, hl_urho3d_sprite *sprite)
{

    Urho3D::Sprite *urho3d_sprite = sprite->ptr;
    hl_urho3d_texture2d *hl_texture = NULL;
    if (urho3d_sprite)
    {
        Urho3D::Texture2D * urho3d_texture2d = dynamic_cast<Texture2D*>(urho3d_sprite->GetTexture());
        SharedPtr<Urho3D::Texture2D> urho3d_texture(urho3d_texture2d);
        hl_texture = hl_alloc_urho3d_texture2d(urho3d_texture);
    }

    return hl_texture;
}


HL_PRIM hl_urho3d_vector2 *HL_NAME(_sprite_set_position)(urho3d_context *context, hl_urho3d_sprite *sprite, hl_urho3d_vector2 *position)
{

    SharedPtr<Urho3D::Sprite> urho3d_sprite(sprite->ptr);
    if (urho3d_sprite && position->ptr)
    {
        
        urho3d_sprite->SetPosition(*(position->ptr));
    }
    else
    {
        printf("_sprite_set_position NULL\n");
    }
    

    return position;
}



HL_PRIM hl_urho3d_vector2 *HL_NAME(_sprite_get_position)(urho3d_context *context, hl_urho3d_sprite *sprite)
{

    Urho3D::Sprite *urho3d_sprite = sprite->ptr;
    hl_urho3d_vector2 *hl_vector2 = NULL;
    if (urho3d_sprite)
    {
        hl_vector2 = hl_alloc_urho3d_vector2();
        if(hl_vector2)
        {
            *(hl_vector2->ptr) = urho3d_sprite->GetPosition();
        }
    }

    return hl_vector2;
}



HL_PRIM hl_urho3d_intvector2 *HL_NAME(_sprite_set_size)(urho3d_context *context, hl_urho3d_sprite *sprite, hl_urho3d_intvector2 *size)
{

    SharedPtr<Urho3D::Sprite> urho3d_sprite(sprite->ptr);
    if (urho3d_sprite && size->ptr)
    {
        
        urho3d_sprite->SetSize(*(size->ptr));
    }
    else
    {
        printf("_sprite_set_position NULL\n");
    }
    

    return size;
}


HL_PRIM hl_urho3d_intvector2 *HL_NAME(_sprite_get_size)(urho3d_context *context, hl_urho3d_sprite *sprite)
{

    Urho3D::Sprite *urho3d_sprite = sprite->ptr;
    hl_urho3d_intvector2 *hl_vector2 = NULL;
    if (urho3d_sprite)
    {
        hl_vector2 = hl_alloc_urho3d_intvector2();
        if(hl_vector2)
        {
            *(hl_vector2->ptr) = urho3d_sprite->GetSize();
        }
    }

    return hl_vector2;
}



HL_PRIM hl_urho3d_intvector2 *HL_NAME(_sprite_set_hotspot)(urho3d_context *context, hl_urho3d_sprite *sprite, hl_urho3d_intvector2 *size)
{

    SharedPtr<Urho3D::Sprite> urho3d_sprite(sprite->ptr);
    if (urho3d_sprite && size->ptr)
    {
        
        urho3d_sprite->SetHotSpot(*(size->ptr));
    }
    else
    {
        printf("_sprite_set_hotspot NULL\n");
    }
    

    return size;
}


HL_PRIM hl_urho3d_intvector2 *HL_NAME(_sprite_get_hotspot)(urho3d_context *context, hl_urho3d_sprite *sprite)
{

    Urho3D::Sprite *urho3d_sprite = sprite->ptr;
    hl_urho3d_intvector2 *hl_vector2 = NULL;
    if (urho3d_sprite)
    {
        hl_vector2 = hl_alloc_urho3d_intvector2();
        if(hl_vector2)
        {
            *(hl_vector2->ptr) = urho3d_sprite->GetHotSpot();
        }
    }

    return hl_vector2;
}

HL_PRIM float  HL_NAME(_sprite_set_rotation)(urho3d_context *context, hl_urho3d_sprite *sprite, float angle)
{

    SharedPtr<Urho3D::Sprite> urho3d_sprite(sprite->ptr);
    if (urho3d_sprite )
    {
      //  printf("_sprite_set_rotation %f \n",angle);
        urho3d_sprite->SetRotation(angle);
    }
    else
    {
        printf("_sprite_set_rotation NULL\n");
    }
    

    return angle;
}

HL_PRIM float  HL_NAME(_sprite_get_rotation)(urho3d_context *context, hl_urho3d_sprite *sprite)
{

    SharedPtr<Urho3D::Sprite> urho3d_sprite(sprite->ptr);
    if (urho3d_sprite )
    {
      //  printf("_sprite_get_rotation %f \n",urho3d_sprite->GetRotation());
        return urho3d_sprite->GetRotation();
    }
    else
    {
        printf("_sprite_get_rotation NULL\n");
    }
    

    return 0.0f;
}




HL_PRIM hl_urho3d_vector2 *HL_NAME(_sprite_set_scale)(urho3d_context *context, hl_urho3d_sprite *sprite, hl_urho3d_vector2 *scale)
{

    SharedPtr<Urho3D::Sprite> urho3d_sprite(sprite->ptr);
    if (urho3d_sprite && scale->ptr)
    {
        
        urho3d_sprite->SetScale(*(scale->ptr));
    }
    else
    {
        printf("_sprite_set_position NULL\n");
    }
    

    return scale;
}



HL_PRIM hl_urho3d_vector2 *HL_NAME(_sprite_get_scale)(urho3d_context *context, hl_urho3d_sprite *sprite)
{

    Urho3D::Sprite *urho3d_sprite = sprite->ptr;
    hl_urho3d_vector2 *hl_vector2 = NULL;
    if (urho3d_sprite)
    {
        hl_vector2 = hl_alloc_urho3d_vector2();
        if(hl_vector2)
        {
            *(hl_vector2->ptr) = urho3d_sprite->GetScale();
        }
    }

    return hl_vector2;
}




HL_PRIM hl_urho3d_color *HL_NAME(_sprite_set_color)(urho3d_context *context, hl_urho3d_sprite *sprite, hl_urho3d_color *color)
{

    SharedPtr<Urho3D::Sprite> urho3d_sprite(sprite->ptr);
    if (urho3d_sprite && color->ptr)
    {
        
        urho3d_sprite->SetColor(*(color->ptr));
    }
    else
    {
        printf("_sprite_set_color NULL\n");
    }
    

    return color;
}



HL_PRIM hl_urho3d_color *HL_NAME(_sprite_get_color)(urho3d_context *context, hl_urho3d_sprite *sprite)
{

    Urho3D::Sprite *urho3d_sprite = sprite->ptr;
    hl_urho3d_color *hl_color = NULL;
    if (urho3d_sprite)
    {
        Color c = urho3d_sprite->GetColor(Corner::C_TOPLEFT);
        hl_color = hl_alloc_urho3d_color(c.r_,c.g_,c.g_,c.a_);
    }

    return hl_color;
}


HL_PRIM int  HL_NAME(_sprite_set_blend_mode)(urho3d_context *context, hl_urho3d_sprite *sprite, int blendMode)
{

    SharedPtr<Urho3D::Sprite> urho3d_sprite(sprite->ptr);
    if (urho3d_sprite )
    {
      //  printf("_sprite_set_rotation %f \n",angle);
        urho3d_sprite->SetBlendMode((BlendMode)blendMode);
    }
    else
    {
        printf("_sprite_set_blend_mode NULL\n");
    }
    

    return blendMode;
}

HL_PRIM int  HL_NAME(_sprite_get_blend_mode)(urho3d_context *context, hl_urho3d_sprite *sprite)
{

    SharedPtr<Urho3D::Sprite> urho3d_sprite(sprite->ptr);
    if (urho3d_sprite )
    {
      //  printf("_sprite_get_rotation %f \n",urho3d_sprite->GetRotation());
        return urho3d_sprite->GetBlendMode();
    }
    else
    {
        printf("_sprite_get_blend_mode NULL\n");
    }
    

    return 0;
}



HL_PRIM hl_urho3d_variantmap  *HL_NAME(_sprite_get_vars)(urho3d_context *context, hl_urho3d_sprite *sprite)
{

    Urho3D::Sprite *urho3d_sprite = sprite->ptr;
    hl_urho3d_variantmap * hl_variantmap = NULL;
    if (urho3d_sprite)
    {
        hl_variantmap = hl_alloc_urho3d_variantmap_no_finlizer();
        if(hl_variantmap)
        {
            (hl_variantmap->ptr) = ( VariantMap*)(&(urho3d_sprite->GetVars()));
        }
    }
    return hl_variantmap;
}

HL_PRIM  hl_urho3d_uielement  * HL_NAME(_cast_sprite_to_uielement)(urho3d_context *context,hl_urho3d_sprite *sprite)
{
   Urho3D::Sprite * urho3d_sprite =  sprite->ptr;
   if(urho3d_sprite)
   {
        hl_urho3d_uielement * v =  hl_alloc_urho3d_uielement(context, dynamic_cast<Urho3D::UIElement *>(urho3d_sprite));
        return v;
   }
   else
   {
       return NULL;
   }
}



DEFINE_PRIM(HL_URHO3D_SPRITE, _create_sprite, URHO3D_CONTEXT);

DEFINE_PRIM(HL_URHO3D_TEXTURE2D, _sprite_set_texture, URHO3D_CONTEXT HL_URHO3D_SPRITE HL_URHO3D_TEXTURE2D);
DEFINE_PRIM(HL_URHO3D_TEXTURE2D, _sprite_get_texture, URHO3D_CONTEXT HL_URHO3D_SPRITE);

DEFINE_PRIM(HL_URHO3D_VECTOR2, _sprite_set_position, URHO3D_CONTEXT HL_URHO3D_SPRITE HL_URHO3D_VECTOR2);
DEFINE_PRIM(HL_URHO3D_VECTOR2, _sprite_get_position, URHO3D_CONTEXT HL_URHO3D_SPRITE );

DEFINE_PRIM(HL_URHO3D_INTVECTOR2, _sprite_set_size, URHO3D_CONTEXT HL_URHO3D_SPRITE HL_URHO3D_INTVECTOR2);
DEFINE_PRIM(HL_URHO3D_INTVECTOR2, _sprite_get_size, URHO3D_CONTEXT HL_URHO3D_SPRITE );

DEFINE_PRIM(HL_URHO3D_INTVECTOR2, _sprite_set_hotspot, URHO3D_CONTEXT HL_URHO3D_SPRITE HL_URHO3D_INTVECTOR2);
DEFINE_PRIM(HL_URHO3D_INTVECTOR2, _sprite_get_hotspot, URHO3D_CONTEXT HL_URHO3D_SPRITE );

DEFINE_PRIM(_F32, _sprite_set_rotation, URHO3D_CONTEXT HL_URHO3D_SPRITE _F32);
DEFINE_PRIM(_F32, _sprite_get_rotation, URHO3D_CONTEXT HL_URHO3D_SPRITE );

DEFINE_PRIM(HL_URHO3D_VECTOR2, _sprite_set_scale, URHO3D_CONTEXT HL_URHO3D_SPRITE HL_URHO3D_VECTOR2);
DEFINE_PRIM(HL_URHO3D_VECTOR2, _sprite_get_scale, URHO3D_CONTEXT HL_URHO3D_SPRITE );

DEFINE_PRIM(HL_URHO3D_COLOR, _sprite_set_color, URHO3D_CONTEXT HL_URHO3D_SPRITE HL_URHO3D_COLOR);
DEFINE_PRIM(HL_URHO3D_COLOR, _sprite_get_color, URHO3D_CONTEXT HL_URHO3D_SPRITE );

DEFINE_PRIM(_I32, _sprite_set_blend_mode, URHO3D_CONTEXT HL_URHO3D_SPRITE _I32);
DEFINE_PRIM(_I32, _sprite_get_blend_mode, URHO3D_CONTEXT HL_URHO3D_SPRITE );

DEFINE_PRIM(HL_URHO3D_VARIANTMAP, _sprite_get_vars, URHO3D_CONTEXT HL_URHO3D_SPRITE );

DEFINE_PRIM(HL_URHO3D_UIELEMENT, _cast_sprite_to_uielement, URHO3D_CONTEXT HL_URHO3D_SPRITE );
