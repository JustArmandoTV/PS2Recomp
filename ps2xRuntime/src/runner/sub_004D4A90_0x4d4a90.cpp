#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D4A90
// Address: 0x4d4a90 - 0x4d4dc0
void sub_004D4A90_0x4d4a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4A90_0x4d4a90");
#endif

    switch (ctx->pc) {
        case 0x4d4a90u: goto label_4d4a90;
        case 0x4d4a94u: goto label_4d4a94;
        case 0x4d4a98u: goto label_4d4a98;
        case 0x4d4a9cu: goto label_4d4a9c;
        case 0x4d4aa0u: goto label_4d4aa0;
        case 0x4d4aa4u: goto label_4d4aa4;
        case 0x4d4aa8u: goto label_4d4aa8;
        case 0x4d4aacu: goto label_4d4aac;
        case 0x4d4ab0u: goto label_4d4ab0;
        case 0x4d4ab4u: goto label_4d4ab4;
        case 0x4d4ab8u: goto label_4d4ab8;
        case 0x4d4abcu: goto label_4d4abc;
        case 0x4d4ac0u: goto label_4d4ac0;
        case 0x4d4ac4u: goto label_4d4ac4;
        case 0x4d4ac8u: goto label_4d4ac8;
        case 0x4d4accu: goto label_4d4acc;
        case 0x4d4ad0u: goto label_4d4ad0;
        case 0x4d4ad4u: goto label_4d4ad4;
        case 0x4d4ad8u: goto label_4d4ad8;
        case 0x4d4adcu: goto label_4d4adc;
        case 0x4d4ae0u: goto label_4d4ae0;
        case 0x4d4ae4u: goto label_4d4ae4;
        case 0x4d4ae8u: goto label_4d4ae8;
        case 0x4d4aecu: goto label_4d4aec;
        case 0x4d4af0u: goto label_4d4af0;
        case 0x4d4af4u: goto label_4d4af4;
        case 0x4d4af8u: goto label_4d4af8;
        case 0x4d4afcu: goto label_4d4afc;
        case 0x4d4b00u: goto label_4d4b00;
        case 0x4d4b04u: goto label_4d4b04;
        case 0x4d4b08u: goto label_4d4b08;
        case 0x4d4b0cu: goto label_4d4b0c;
        case 0x4d4b10u: goto label_4d4b10;
        case 0x4d4b14u: goto label_4d4b14;
        case 0x4d4b18u: goto label_4d4b18;
        case 0x4d4b1cu: goto label_4d4b1c;
        case 0x4d4b20u: goto label_4d4b20;
        case 0x4d4b24u: goto label_4d4b24;
        case 0x4d4b28u: goto label_4d4b28;
        case 0x4d4b2cu: goto label_4d4b2c;
        case 0x4d4b30u: goto label_4d4b30;
        case 0x4d4b34u: goto label_4d4b34;
        case 0x4d4b38u: goto label_4d4b38;
        case 0x4d4b3cu: goto label_4d4b3c;
        case 0x4d4b40u: goto label_4d4b40;
        case 0x4d4b44u: goto label_4d4b44;
        case 0x4d4b48u: goto label_4d4b48;
        case 0x4d4b4cu: goto label_4d4b4c;
        case 0x4d4b50u: goto label_4d4b50;
        case 0x4d4b54u: goto label_4d4b54;
        case 0x4d4b58u: goto label_4d4b58;
        case 0x4d4b5cu: goto label_4d4b5c;
        case 0x4d4b60u: goto label_4d4b60;
        case 0x4d4b64u: goto label_4d4b64;
        case 0x4d4b68u: goto label_4d4b68;
        case 0x4d4b6cu: goto label_4d4b6c;
        case 0x4d4b70u: goto label_4d4b70;
        case 0x4d4b74u: goto label_4d4b74;
        case 0x4d4b78u: goto label_4d4b78;
        case 0x4d4b7cu: goto label_4d4b7c;
        case 0x4d4b80u: goto label_4d4b80;
        case 0x4d4b84u: goto label_4d4b84;
        case 0x4d4b88u: goto label_4d4b88;
        case 0x4d4b8cu: goto label_4d4b8c;
        case 0x4d4b90u: goto label_4d4b90;
        case 0x4d4b94u: goto label_4d4b94;
        case 0x4d4b98u: goto label_4d4b98;
        case 0x4d4b9cu: goto label_4d4b9c;
        case 0x4d4ba0u: goto label_4d4ba0;
        case 0x4d4ba4u: goto label_4d4ba4;
        case 0x4d4ba8u: goto label_4d4ba8;
        case 0x4d4bacu: goto label_4d4bac;
        case 0x4d4bb0u: goto label_4d4bb0;
        case 0x4d4bb4u: goto label_4d4bb4;
        case 0x4d4bb8u: goto label_4d4bb8;
        case 0x4d4bbcu: goto label_4d4bbc;
        case 0x4d4bc0u: goto label_4d4bc0;
        case 0x4d4bc4u: goto label_4d4bc4;
        case 0x4d4bc8u: goto label_4d4bc8;
        case 0x4d4bccu: goto label_4d4bcc;
        case 0x4d4bd0u: goto label_4d4bd0;
        case 0x4d4bd4u: goto label_4d4bd4;
        case 0x4d4bd8u: goto label_4d4bd8;
        case 0x4d4bdcu: goto label_4d4bdc;
        case 0x4d4be0u: goto label_4d4be0;
        case 0x4d4be4u: goto label_4d4be4;
        case 0x4d4be8u: goto label_4d4be8;
        case 0x4d4becu: goto label_4d4bec;
        case 0x4d4bf0u: goto label_4d4bf0;
        case 0x4d4bf4u: goto label_4d4bf4;
        case 0x4d4bf8u: goto label_4d4bf8;
        case 0x4d4bfcu: goto label_4d4bfc;
        case 0x4d4c00u: goto label_4d4c00;
        case 0x4d4c04u: goto label_4d4c04;
        case 0x4d4c08u: goto label_4d4c08;
        case 0x4d4c0cu: goto label_4d4c0c;
        case 0x4d4c10u: goto label_4d4c10;
        case 0x4d4c14u: goto label_4d4c14;
        case 0x4d4c18u: goto label_4d4c18;
        case 0x4d4c1cu: goto label_4d4c1c;
        case 0x4d4c20u: goto label_4d4c20;
        case 0x4d4c24u: goto label_4d4c24;
        case 0x4d4c28u: goto label_4d4c28;
        case 0x4d4c2cu: goto label_4d4c2c;
        case 0x4d4c30u: goto label_4d4c30;
        case 0x4d4c34u: goto label_4d4c34;
        case 0x4d4c38u: goto label_4d4c38;
        case 0x4d4c3cu: goto label_4d4c3c;
        case 0x4d4c40u: goto label_4d4c40;
        case 0x4d4c44u: goto label_4d4c44;
        case 0x4d4c48u: goto label_4d4c48;
        case 0x4d4c4cu: goto label_4d4c4c;
        case 0x4d4c50u: goto label_4d4c50;
        case 0x4d4c54u: goto label_4d4c54;
        case 0x4d4c58u: goto label_4d4c58;
        case 0x4d4c5cu: goto label_4d4c5c;
        case 0x4d4c60u: goto label_4d4c60;
        case 0x4d4c64u: goto label_4d4c64;
        case 0x4d4c68u: goto label_4d4c68;
        case 0x4d4c6cu: goto label_4d4c6c;
        case 0x4d4c70u: goto label_4d4c70;
        case 0x4d4c74u: goto label_4d4c74;
        case 0x4d4c78u: goto label_4d4c78;
        case 0x4d4c7cu: goto label_4d4c7c;
        case 0x4d4c80u: goto label_4d4c80;
        case 0x4d4c84u: goto label_4d4c84;
        case 0x4d4c88u: goto label_4d4c88;
        case 0x4d4c8cu: goto label_4d4c8c;
        case 0x4d4c90u: goto label_4d4c90;
        case 0x4d4c94u: goto label_4d4c94;
        case 0x4d4c98u: goto label_4d4c98;
        case 0x4d4c9cu: goto label_4d4c9c;
        case 0x4d4ca0u: goto label_4d4ca0;
        case 0x4d4ca4u: goto label_4d4ca4;
        case 0x4d4ca8u: goto label_4d4ca8;
        case 0x4d4cacu: goto label_4d4cac;
        case 0x4d4cb0u: goto label_4d4cb0;
        case 0x4d4cb4u: goto label_4d4cb4;
        case 0x4d4cb8u: goto label_4d4cb8;
        case 0x4d4cbcu: goto label_4d4cbc;
        case 0x4d4cc0u: goto label_4d4cc0;
        case 0x4d4cc4u: goto label_4d4cc4;
        case 0x4d4cc8u: goto label_4d4cc8;
        case 0x4d4cccu: goto label_4d4ccc;
        case 0x4d4cd0u: goto label_4d4cd0;
        case 0x4d4cd4u: goto label_4d4cd4;
        case 0x4d4cd8u: goto label_4d4cd8;
        case 0x4d4cdcu: goto label_4d4cdc;
        case 0x4d4ce0u: goto label_4d4ce0;
        case 0x4d4ce4u: goto label_4d4ce4;
        case 0x4d4ce8u: goto label_4d4ce8;
        case 0x4d4cecu: goto label_4d4cec;
        case 0x4d4cf0u: goto label_4d4cf0;
        case 0x4d4cf4u: goto label_4d4cf4;
        case 0x4d4cf8u: goto label_4d4cf8;
        case 0x4d4cfcu: goto label_4d4cfc;
        case 0x4d4d00u: goto label_4d4d00;
        case 0x4d4d04u: goto label_4d4d04;
        case 0x4d4d08u: goto label_4d4d08;
        case 0x4d4d0cu: goto label_4d4d0c;
        case 0x4d4d10u: goto label_4d4d10;
        case 0x4d4d14u: goto label_4d4d14;
        case 0x4d4d18u: goto label_4d4d18;
        case 0x4d4d1cu: goto label_4d4d1c;
        case 0x4d4d20u: goto label_4d4d20;
        case 0x4d4d24u: goto label_4d4d24;
        case 0x4d4d28u: goto label_4d4d28;
        case 0x4d4d2cu: goto label_4d4d2c;
        case 0x4d4d30u: goto label_4d4d30;
        case 0x4d4d34u: goto label_4d4d34;
        case 0x4d4d38u: goto label_4d4d38;
        case 0x4d4d3cu: goto label_4d4d3c;
        case 0x4d4d40u: goto label_4d4d40;
        case 0x4d4d44u: goto label_4d4d44;
        case 0x4d4d48u: goto label_4d4d48;
        case 0x4d4d4cu: goto label_4d4d4c;
        case 0x4d4d50u: goto label_4d4d50;
        case 0x4d4d54u: goto label_4d4d54;
        case 0x4d4d58u: goto label_4d4d58;
        case 0x4d4d5cu: goto label_4d4d5c;
        case 0x4d4d60u: goto label_4d4d60;
        case 0x4d4d64u: goto label_4d4d64;
        case 0x4d4d68u: goto label_4d4d68;
        case 0x4d4d6cu: goto label_4d4d6c;
        case 0x4d4d70u: goto label_4d4d70;
        case 0x4d4d74u: goto label_4d4d74;
        case 0x4d4d78u: goto label_4d4d78;
        case 0x4d4d7cu: goto label_4d4d7c;
        case 0x4d4d80u: goto label_4d4d80;
        case 0x4d4d84u: goto label_4d4d84;
        case 0x4d4d88u: goto label_4d4d88;
        case 0x4d4d8cu: goto label_4d4d8c;
        case 0x4d4d90u: goto label_4d4d90;
        case 0x4d4d94u: goto label_4d4d94;
        case 0x4d4d98u: goto label_4d4d98;
        case 0x4d4d9cu: goto label_4d4d9c;
        case 0x4d4da0u: goto label_4d4da0;
        case 0x4d4da4u: goto label_4d4da4;
        case 0x4d4da8u: goto label_4d4da8;
        case 0x4d4dacu: goto label_4d4dac;
        case 0x4d4db0u: goto label_4d4db0;
        case 0x4d4db4u: goto label_4d4db4;
        case 0x4d4db8u: goto label_4d4db8;
        case 0x4d4dbcu: goto label_4d4dbc;
        default: break;
    }

    ctx->pc = 0x4d4a90u;

label_4d4a90:
    // 0x4d4a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d4a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d4a94:
    // 0x4d4a94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d4a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d4a98:
    // 0x4d4a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d4a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d4a9c:
    // 0x4d4a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d4a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d4aa0:
    // 0x4d4aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d4aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4aa4:
    // 0x4d4aa4: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x4d4aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_4d4aa8:
    // 0x4d4aa8: 0x54830030  bnel        $a0, $v1, . + 4 + (0x30 << 2)
label_4d4aac:
    if (ctx->pc == 0x4D4AACu) {
        ctx->pc = 0x4D4AACu;
            // 0x4d4aac: 0xc602016c  lwc1        $f2, 0x16C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4D4AB0u;
        goto label_4d4ab0;
    }
    ctx->pc = 0x4D4AA8u;
    {
        const bool branch_taken_0x4d4aa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4d4aa8) {
            ctx->pc = 0x4D4AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4AA8u;
            // 0x4d4aac: 0xc602016c  lwc1        $f2, 0x16C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4B6Cu;
            goto label_4d4b6c;
        }
    }
    ctx->pc = 0x4D4AB0u;
label_4d4ab0:
    // 0x4d4ab0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4d4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4d4ab4:
    // 0x4d4ab4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4d4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4d4ab8:
    // 0x4d4ab8: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x4d4ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d4abc:
    // 0x4d4abc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4d4abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d4ac0:
    // 0x4d4ac0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4d4ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d4ac4:
    // 0x4d4ac4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4d4ac4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4d4ac8:
    // 0x4d4ac8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4d4ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d4acc:
    // 0x4d4acc: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_4d4ad0:
    if (ctx->pc == 0x4D4AD0u) {
        ctx->pc = 0x4D4AD0u;
            // 0x4d4ad0: 0xe6010130  swc1        $f1, 0x130($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->pc = 0x4D4AD4u;
        goto label_4d4ad4;
    }
    ctx->pc = 0x4D4ACCu;
    {
        const bool branch_taken_0x4d4acc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4D4AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4ACCu;
            // 0x4d4ad0: 0xe6010130  swc1        $f1, 0x130($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4acc) {
            ctx->pc = 0x4D4B68u;
            goto label_4d4b68;
        }
    }
    ctx->pc = 0x4D4AD4u;
label_4d4ad4:
    // 0x4d4ad4: 0x8e050160  lw          $a1, 0x160($s0)
    ctx->pc = 0x4d4ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_4d4ad8:
    // 0x4d4ad8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_4d4adc:
    if (ctx->pc == 0x4D4ADCu) {
        ctx->pc = 0x4D4ADCu;
            // 0x4d4adc: 0x8e040168  lw          $a0, 0x168($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
        ctx->pc = 0x4D4AE0u;
        goto label_4d4ae0;
    }
    ctx->pc = 0x4D4AD8u;
    {
        const bool branch_taken_0x4d4ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4ad8) {
            ctx->pc = 0x4D4ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4AD8u;
            // 0x4d4adc: 0x8e040168  lw          $a0, 0x168($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4AF8u;
            goto label_4d4af8;
        }
    }
    ctx->pc = 0x4D4AE0u;
label_4d4ae0:
    // 0x4d4ae0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d4ae4:
    // 0x4d4ae4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4d4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4d4ae8:
    // 0x4d4ae8: 0xc057b7c  jal         func_15EDF0
label_4d4aec:
    if (ctx->pc == 0x4D4AECu) {
        ctx->pc = 0x4D4AECu;
            // 0x4d4aec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4D4AF0u;
        goto label_4d4af0;
    }
    ctx->pc = 0x4D4AE8u;
    SET_GPR_U32(ctx, 31, 0x4D4AF0u);
    ctx->pc = 0x4D4AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4AE8u;
            // 0x4d4aec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4AF0u; }
        if (ctx->pc != 0x4D4AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4AF0u; }
        if (ctx->pc != 0x4D4AF0u) { return; }
    }
    ctx->pc = 0x4D4AF0u;
label_4d4af0:
    // 0x4d4af0: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x4d4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_4d4af4:
    // 0x4d4af4: 0x8e040168  lw          $a0, 0x168($s0)
    ctx->pc = 0x4d4af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_4d4af8:
    // 0x4d4af8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4d4afc:
    if (ctx->pc == 0x4D4AFCu) {
        ctx->pc = 0x4D4AFCu;
            // 0x4d4afc: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x4D4B00u;
        goto label_4d4b00;
    }
    ctx->pc = 0x4D4AF8u;
    {
        const bool branch_taken_0x4d4af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4af8) {
            ctx->pc = 0x4D4AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4AF8u;
            // 0x4d4afc: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4B18u;
            goto label_4d4b18;
        }
    }
    ctx->pc = 0x4D4B00u;
label_4d4b00:
    // 0x4d4b00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d4b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d4b04:
    // 0x4d4b04: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4d4b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4d4b08:
    // 0x4d4b08: 0x320f809  jalr        $t9
label_4d4b0c:
    if (ctx->pc == 0x4D4B0Cu) {
        ctx->pc = 0x4D4B0Cu;
            // 0x4d4b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4B10u;
        goto label_4d4b10;
    }
    ctx->pc = 0x4D4B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D4B10u);
        ctx->pc = 0x4D4B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4B08u;
            // 0x4d4b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D4B10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D4B10u; }
            if (ctx->pc != 0x4D4B10u) { return; }
        }
        }
    }
    ctx->pc = 0x4D4B10u;
label_4d4b10:
    // 0x4d4b10: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x4d4b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_4d4b14:
    // 0x4d4b14: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x4d4b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_4d4b18:
    // 0x4d4b18: 0xc040180  jal         func_100600
label_4d4b1c:
    if (ctx->pc == 0x4D4B1Cu) {
        ctx->pc = 0x4D4B20u;
        goto label_4d4b20;
    }
    ctx->pc = 0x4D4B18u;
    SET_GPR_U32(ctx, 31, 0x4D4B20u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4B20u; }
        if (ctx->pc != 0x4D4B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4B20u; }
        if (ctx->pc != 0x4D4B20u) { return; }
    }
    ctx->pc = 0x4D4B20u;
label_4d4b20:
    // 0x4d4b20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d4b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d4b24:
    // 0x4d4b24: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_4d4b28:
    if (ctx->pc == 0x4D4B28u) {
        ctx->pc = 0x4D4B28u;
            // 0x4d4b28: 0x3c034628  lui         $v1, 0x4628 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17960 << 16));
        ctx->pc = 0x4D4B2Cu;
        goto label_4d4b2c;
    }
    ctx->pc = 0x4D4B24u;
    {
        const bool branch_taken_0x4d4b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4b24) {
            ctx->pc = 0x4D4B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4B24u;
            // 0x4d4b28: 0x3c034628  lui         $v1, 0x4628 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17960 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4B60u;
            goto label_4d4b60;
        }
    }
    ctx->pc = 0x4D4B2Cu;
label_4d4b2c:
    // 0x4d4b2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d4b30:
    // 0x4d4b30: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x4d4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_4d4b34:
    // 0x4d4b34: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4d4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4d4b38:
    // 0x4d4b38: 0x3465abd8  ori         $a1, $v1, 0xABD8
    ctx->pc = 0x4d4b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43992);
label_4d4b3c:
    // 0x4d4b3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d4b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d4b40:
    // 0x4d4b40: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d4b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4d4b44:
    // 0x4d4b44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d4b44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4b48:
    // 0x4d4b48: 0x26090140  addiu       $t1, $s0, 0x140
    ctx->pc = 0x4d4b48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_4d4b4c:
    // 0x4d4b4c: 0x24470658  addiu       $a3, $v0, 0x658
    ctx->pc = 0x4d4b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1624));
label_4d4b50:
    // 0x4d4b50: 0x260a00f0  addiu       $t2, $s0, 0xF0
    ctx->pc = 0x4d4b50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_4d4b54:
    // 0x4d4b54: 0xc13d944  jal         func_4F6510
label_4d4b58:
    if (ctx->pc == 0x4D4B58u) {
        ctx->pc = 0x4D4B58u;
            // 0x4d4b58: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4D4B5Cu;
        goto label_4d4b5c;
    }
    ctx->pc = 0x4D4B54u;
    SET_GPR_U32(ctx, 31, 0x4D4B5Cu);
    ctx->pc = 0x4D4B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4B54u;
            // 0x4d4b58: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4B5Cu; }
        if (ctx->pc != 0x4D4B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4B5Cu; }
        if (ctx->pc != 0x4D4B5Cu) { return; }
    }
    ctx->pc = 0x4D4B5Cu;
label_4d4b5c:
    // 0x4d4b5c: 0x3c034628  lui         $v1, 0x4628
    ctx->pc = 0x4d4b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17960 << 16));
label_4d4b60:
    // 0x4d4b60: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x4d4b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_4d4b64:
    // 0x4d4b64: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x4d4b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
label_4d4b68:
    // 0x4d4b68: 0xc602016c  lwc1        $f2, 0x16C($s0)
    ctx->pc = 0x4d4b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d4b6c:
    // 0x4d4b6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4d4b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4d4b70:
    // 0x4d4b70: 0x0  nop
    ctx->pc = 0x4d4b70u;
    // NOP
label_4d4b74:
    // 0x4d4b74: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4d4b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d4b78:
    // 0x4d4b78: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_4d4b7c:
    if (ctx->pc == 0x4D4B7Cu) {
        ctx->pc = 0x4D4B7Cu;
            // 0x4d4b7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4D4B80u;
        goto label_4d4b80;
    }
    ctx->pc = 0x4D4B78u;
    {
        const bool branch_taken_0x4d4b78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d4b78) {
            ctx->pc = 0x4D4B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4B78u;
            // 0x4d4b7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4BA4u;
            goto label_4d4ba4;
        }
    }
    ctx->pc = 0x4D4B80u;
label_4d4b80:
    // 0x4d4b80: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4d4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4d4b84:
    // 0x4d4b84: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4d4b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4d4b88:
    // 0x4d4b88: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4d4b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d4b8c:
    // 0x4d4b8c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4d4b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4d4b90:
    // 0x4d4b90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d4b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d4b94:
    // 0x4d4b94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4d4b98:
    if (ctx->pc == 0x4D4B98u) {
        ctx->pc = 0x4D4B98u;
            // 0x4d4b98: 0xe600016c  swc1        $f0, 0x16C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
        ctx->pc = 0x4D4B9Cu;
        goto label_4d4b9c;
    }
    ctx->pc = 0x4D4B94u;
    {
        const bool branch_taken_0x4d4b94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4D4B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4B94u;
            // 0x4d4b98: 0xe600016c  swc1        $f0, 0x16C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4b94) {
            ctx->pc = 0x4D4BA0u;
            goto label_4d4ba0;
        }
    }
    ctx->pc = 0x4D4B9Cu;
label_4d4b9c:
    // 0x4d4b9c: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x4d4b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
label_4d4ba0:
    // 0x4d4ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4ba4:
    // 0x4d4ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d4ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4ba8:
    // 0x4d4ba8: 0x3e00008  jr          $ra
label_4d4bac:
    if (ctx->pc == 0x4D4BACu) {
        ctx->pc = 0x4D4BACu;
            // 0x4d4bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D4BB0u;
        goto label_4d4bb0;
    }
    ctx->pc = 0x4D4BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4BA8u;
            // 0x4d4bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4BB0u;
label_4d4bb0:
    // 0x4d4bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d4bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d4bb4:
    // 0x4d4bb4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x4d4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_4d4bb8:
    // 0x4d4bb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d4bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d4bbc:
    // 0x4d4bbc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d4bc0:
    // 0x4d4bc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d4bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d4bc4:
    // 0x4d4bc4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4d4bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d4bc8:
    // 0x4d4bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d4bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d4bcc:
    // 0x4d4bcc: 0x8c42aa40  lw          $v0, -0x55C0($v0)
    ctx->pc = 0x4d4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945344)));
label_4d4bd0:
    // 0x4d4bd0: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4d4bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4d4bd4:
    // 0x4d4bd4: 0xc12e608  jal         func_4B9820
label_4d4bd8:
    if (ctx->pc == 0x4D4BD8u) {
        ctx->pc = 0x4D4BD8u;
            // 0x4d4bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4BDCu;
        goto label_4d4bdc;
    }
    ctx->pc = 0x4D4BD4u;
    SET_GPR_U32(ctx, 31, 0x4D4BDCu);
    ctx->pc = 0x4D4BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4BD4u;
            // 0x4d4bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4BDCu; }
        if (ctx->pc != 0x4D4BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4BDCu; }
        if (ctx->pc != 0x4D4BDCu) { return; }
    }
    ctx->pc = 0x4D4BDCu;
label_4d4bdc:
    // 0x4d4bdc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4d4bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d4be0:
    // 0x4d4be0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4d4be4:
    // 0x4d4be4: 0x34430101  ori         $v1, $v0, 0x101
    ctx->pc = 0x4d4be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_4d4be8:
    // 0x4d4be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d4be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4bec:
    // 0x4d4bec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d4becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d4bf0:
    // 0x4d4bf0: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4d4bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4d4bf4:
    // 0x4d4bf4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4d4bf8:
    // 0x4d4bf8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4d4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4d4bfc:
    // 0x4d4bfc: 0xc08bff0  jal         func_22FFC0
label_4d4c00:
    if (ctx->pc == 0x4D4C00u) {
        ctx->pc = 0x4D4C00u;
            // 0x4d4c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4C04u;
        goto label_4d4c04;
    }
    ctx->pc = 0x4D4BFCu;
    SET_GPR_U32(ctx, 31, 0x4D4C04u);
    ctx->pc = 0x4D4C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4BFCu;
            // 0x4d4c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4C04u; }
        if (ctx->pc != 0x4D4C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4C04u; }
        if (ctx->pc != 0x4D4C04u) { return; }
    }
    ctx->pc = 0x4D4C04u;
label_4d4c04:
    // 0x4d4c04: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x4d4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4d4c08:
    // 0x4d4c08: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x4d4c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4d4c0c:
    // 0x4d4c0c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x4d4c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_4d4c10:
    // 0x4d4c10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4d4c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d4c14:
    // 0x4d4c14: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x4d4c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_4d4c18:
    // 0x4d4c18: 0xc040180  jal         func_100600
label_4d4c1c:
    if (ctx->pc == 0x4D4C1Cu) {
        ctx->pc = 0x4D4C1Cu;
            // 0x4d4c1c: 0xa20000d1  sb          $zero, 0xD1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4D4C20u;
        goto label_4d4c20;
    }
    ctx->pc = 0x4D4C18u;
    SET_GPR_U32(ctx, 31, 0x4D4C20u);
    ctx->pc = 0x4D4C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4C18u;
            // 0x4d4c1c: 0xa20000d1  sb          $zero, 0xD1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4C20u; }
        if (ctx->pc != 0x4D4C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4C20u; }
        if (ctx->pc != 0x4D4C20u) { return; }
    }
    ctx->pc = 0x4D4C20u;
label_4d4c20:
    // 0x4d4c20: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_4d4c24:
    if (ctx->pc == 0x4D4C24u) {
        ctx->pc = 0x4D4C24u;
            // 0x4d4c24: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x4D4C28u;
        goto label_4d4c28;
    }
    ctx->pc = 0x4D4C20u;
    {
        const bool branch_taken_0x4d4c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4c20) {
            ctx->pc = 0x4D4C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4C20u;
            // 0x4d4c24: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4C70u;
            goto label_4d4c70;
        }
    }
    ctx->pc = 0x4D4C28u;
label_4d4c28:
    // 0x4d4c28: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x4d4c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d4c2c:
    // 0x4d4c2c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4d4c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_4d4c30:
    // 0x4d4c30: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x4d4c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_4d4c34:
    // 0x4d4c34: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4d4c38:
    // 0x4d4c38: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4d4c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4d4c3c:
    // 0x4d4c3c: 0x24637d50  addiu       $v1, $v1, 0x7D50
    ctx->pc = 0x4d4c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32080));
label_4d4c40:
    // 0x4d4c40: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x4d4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_4d4c44:
    // 0x4d4c44: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4d4c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_4d4c48:
    // 0x4d4c48: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x4d4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_4d4c4c:
    // 0x4d4c4c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4d4c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_4d4c50:
    // 0x4d4c50: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x4d4c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_4d4c54:
    // 0x4d4c54: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x4d4c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_4d4c58:
    // 0x4d4c58: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x4d4c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_4d4c5c:
    // 0x4d4c5c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x4d4c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_4d4c60:
    // 0x4d4c60: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x4d4c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_4d4c64:
    // 0x4d4c64: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x4d4c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_4d4c68:
    // 0x4d4c68: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x4d4c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_4d4c6c:
    // 0x4d4c6c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4d4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_4d4c70:
    // 0x4d4c70: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x4d4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_4d4c74:
    // 0x4d4c74: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x4d4c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_4d4c78:
    // 0x4d4c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d4c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d4c7c:
    // 0x4d4c7c: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x4d4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_4d4c80:
    // 0x4d4c80: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x4d4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4d4c84:
    // 0x4d4c84: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x4d4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4d4c88:
    // 0x4d4c88: 0x3c024628  lui         $v0, 0x4628
    ctx->pc = 0x4d4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17960 << 16));
label_4d4c8c:
    // 0x4d4c8c: 0x3448c000  ori         $t0, $v0, 0xC000
    ctx->pc = 0x4d4c8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_4d4c90:
    // 0x4d4c90: 0x3c094396  lui         $t1, 0x4396
    ctx->pc = 0x4d4c90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17302 << 16));
label_4d4c94:
    // 0x4d4c94: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4d4c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d4c98:
    // 0x4d4c98: 0x3c064270  lui         $a2, 0x4270
    ctx->pc = 0x4d4c98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17008 << 16));
label_4d4c9c:
    // 0x4d4c9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4d4c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d4ca0:
    // 0x4d4ca0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4d4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4d4ca4:
    // 0x4d4ca4: 0x34640004  ori         $a0, $v1, 0x4
    ctx->pc = 0x4d4ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_4d4ca8:
    // 0x4d4ca8: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x4d4ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
label_4d4cac:
    // 0x4d4cac: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4d4cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4d4cb0:
    // 0x4d4cb0: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x4d4cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
label_4d4cb4:
    // 0x4d4cb4: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4d4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_4d4cb8:
    // 0x4d4cb8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x4d4cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_4d4cbc:
    // 0x4d4cbc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x4d4cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_4d4cc0:
    // 0x4d4cc0: 0xae090078  sw          $t1, 0x78($s0)
    ctx->pc = 0x4d4cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 9));
label_4d4cc4:
    // 0x4d4cc4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x4d4cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4d4cc8:
    // 0x4d4cc8: 0xae080080  sw          $t0, 0x80($s0)
    ctx->pc = 0x4d4cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 8));
label_4d4ccc:
    // 0x4d4ccc: 0xa20700cc  sb          $a3, 0xCC($s0)
    ctx->pc = 0x4d4cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 7));
label_4d4cd0:
    // 0x4d4cd0: 0xae0600c4  sw          $a2, 0xC4($s0)
    ctx->pc = 0x4d4cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 6));
label_4d4cd4:
    // 0x4d4cd4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4d4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4d4cd8:
    // 0x4d4cd8: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x4d4cd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_4d4cdc:
    // 0x4d4cdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4d4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d4ce0:
    // 0x4d4ce0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x4d4ce0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4d4ce4:
    // 0x4d4ce4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d4ce8:
    // 0x4d4ce8: 0xc04c720  jal         func_131C80
label_4d4cec:
    if (ctx->pc == 0x4D4CECu) {
        ctx->pc = 0x4D4CECu;
            // 0x4d4cec: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x4D4CF0u;
        goto label_4d4cf0;
    }
    ctx->pc = 0x4D4CE8u;
    SET_GPR_U32(ctx, 31, 0x4D4CF0u);
    ctx->pc = 0x4D4CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4CE8u;
            // 0x4d4cec: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4CF0u; }
        if (ctx->pc != 0x4D4CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4CF0u; }
        if (ctx->pc != 0x4D4CF0u) { return; }
    }
    ctx->pc = 0x4D4CF0u;
label_4d4cf0:
    // 0x4d4cf0: 0xc040180  jal         func_100600
label_4d4cf4:
    if (ctx->pc == 0x4D4CF4u) {
        ctx->pc = 0x4D4CF4u;
            // 0x4d4cf4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x4D4CF8u;
        goto label_4d4cf8;
    }
    ctx->pc = 0x4D4CF0u;
    SET_GPR_U32(ctx, 31, 0x4D4CF8u);
    ctx->pc = 0x4D4CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4CF0u;
            // 0x4d4cf4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4CF8u; }
        if (ctx->pc != 0x4D4CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4CF8u; }
        if (ctx->pc != 0x4D4CF8u) { return; }
    }
    ctx->pc = 0x4D4CF8u;
label_4d4cf8:
    // 0x4d4cf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4d4cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d4cfc:
    // 0x4d4cfc: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_4d4d00:
    if (ctx->pc == 0x4D4D00u) {
        ctx->pc = 0x4D4D00u;
            // 0x4d4d00: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4D4D04u;
        goto label_4d4d04;
    }
    ctx->pc = 0x4D4CFCu;
    {
        const bool branch_taken_0x4d4cfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4cfc) {
            ctx->pc = 0x4D4D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4CFCu;
            // 0x4d4d00: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4D3Cu;
            goto label_4d4d3c;
        }
    }
    ctx->pc = 0x4D4D04u;
label_4d4d04:
    // 0x4d4d04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4d4d08:
    // 0x4d4d08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d4d0c:
    // 0x4d4d0c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4d4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4d4d10:
    // 0x4d4d10: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4d4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4d4d14:
    // 0x4d4d14: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d4d18:
    // 0x4d4d18: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4d4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4d4d1c:
    // 0x4d4d1c: 0xc040138  jal         func_1004E0
label_4d4d20:
    if (ctx->pc == 0x4D4D20u) {
        ctx->pc = 0x4D4D20u;
            // 0x4d4d20: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4D4D24u;
        goto label_4d4d24;
    }
    ctx->pc = 0x4D4D1Cu;
    SET_GPR_U32(ctx, 31, 0x4D4D24u);
    ctx->pc = 0x4D4D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4D1Cu;
            // 0x4d4d20: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4D24u; }
        if (ctx->pc != 0x4D4D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4D24u; }
        if (ctx->pc != 0x4D4D24u) { return; }
    }
    ctx->pc = 0x4D4D24u;
label_4d4d24:
    // 0x4d4d24: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4d4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4d4d28:
    // 0x4d4d28: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4d4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4d4d2c:
    // 0x4d4d2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d4d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4d30:
    // 0x4d4d30: 0xc04a576  jal         func_1295D8
label_4d4d34:
    if (ctx->pc == 0x4D4D34u) {
        ctx->pc = 0x4D4D34u;
            // 0x4d4d34: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4D4D38u;
        goto label_4d4d38;
    }
    ctx->pc = 0x4D4D30u;
    SET_GPR_U32(ctx, 31, 0x4D4D38u);
    ctx->pc = 0x4D4D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4D30u;
            // 0x4d4d34: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4D38u; }
        if (ctx->pc != 0x4D4D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4D38u; }
        if (ctx->pc != 0x4D4D38u) { return; }
    }
    ctx->pc = 0x4D4D38u;
label_4d4d38:
    // 0x4d4d38: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4d4d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_4d4d3c:
    // 0x4d4d3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4d4d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4d4d40:
    // 0x4d4d40: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4d4d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4d4d44:
    // 0x4d4d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d4d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d4d48:
    // 0x4d4d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d4d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4d4c:
    // 0x4d4d4c: 0x240610ae  addiu       $a2, $zero, 0x10AE
    ctx->pc = 0x4d4d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4270));
label_4d4d50:
    // 0x4d4d50: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4d4d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d4d54:
    // 0x4d4d54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4d4d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4d58:
    // 0x4d4d58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4d4d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4d4d5c:
    // 0x4d4d5c: 0xc122cd8  jal         func_48B360
label_4d4d60:
    if (ctx->pc == 0x4D4D60u) {
        ctx->pc = 0x4D4D60u;
            // 0x4d4d60: 0xae110164  sw          $s1, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
        ctx->pc = 0x4D4D64u;
        goto label_4d4d64;
    }
    ctx->pc = 0x4D4D5Cu;
    SET_GPR_U32(ctx, 31, 0x4D4D64u);
    ctx->pc = 0x4D4D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4D5Cu;
            // 0x4d4d60: 0xae110164  sw          $s1, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4D64u; }
        if (ctx->pc != 0x4D4D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4D64u; }
        if (ctx->pc != 0x4D4D64u) { return; }
    }
    ctx->pc = 0x4D4D64u;
label_4d4d64:
    // 0x4d4d64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4d4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4d4d68:
    // 0x4d4d68: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4d4d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_4d4d6c:
    // 0x4d4d6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4d4d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4d4d70:
    // 0x4d4d70: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x4d4d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_4d4d74:
    // 0x4d4d74: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4d4d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4d4d78:
    // 0x4d4d78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4d4d7c:
    // 0x4d4d7c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4d4d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d4d80:
    // 0x4d4d80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d4d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d4d84:
    // 0x4d4d84: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x4d4d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
label_4d4d88:
    // 0x4d4d88: 0xc122cd8  jal         func_48B360
label_4d4d8c:
    if (ctx->pc == 0x4D4D8Cu) {
        ctx->pc = 0x4D4D8Cu;
            // 0x4d4d8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4D90u;
        goto label_4d4d90;
    }
    ctx->pc = 0x4D4D88u;
    SET_GPR_U32(ctx, 31, 0x4D4D90u);
    ctx->pc = 0x4D4D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4D88u;
            // 0x4d4d8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4D90u; }
        if (ctx->pc != 0x4D4D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4D90u; }
        if (ctx->pc != 0x4D4D90u) { return; }
    }
    ctx->pc = 0x4D4D90u;
label_4d4d90:
    // 0x4d4d90: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x4d4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4d4d94:
    // 0x4d4d94: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x4d4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_4d4d98:
    // 0x4d4d98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4d4d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d4d9c:
    // 0x4d4d9c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x4d4d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_4d4da0:
    // 0x4d4da0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x4d4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_4d4da4:
    // 0x4d4da4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d4da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4da8:
    // 0x4d4da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d4da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4dac:
    // 0x4d4dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d4dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4db0:
    // 0x4d4db0: 0x3e00008  jr          $ra
label_4d4db4:
    if (ctx->pc == 0x4D4DB4u) {
        ctx->pc = 0x4D4DB4u;
            // 0x4d4db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D4DB8u;
        goto label_4d4db8;
    }
    ctx->pc = 0x4D4DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4DB0u;
            // 0x4d4db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4DB8u;
label_4d4db8:
    // 0x4d4db8: 0x0  nop
    ctx->pc = 0x4d4db8u;
    // NOP
label_4d4dbc:
    // 0x4d4dbc: 0x0  nop
    ctx->pc = 0x4d4dbcu;
    // NOP
}
