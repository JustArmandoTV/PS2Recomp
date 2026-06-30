#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00546AB0
// Address: 0x546ab0 - 0x546d40
void sub_00546AB0_0x546ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00546AB0_0x546ab0");
#endif

    switch (ctx->pc) {
        case 0x546ab0u: goto label_546ab0;
        case 0x546ab4u: goto label_546ab4;
        case 0x546ab8u: goto label_546ab8;
        case 0x546abcu: goto label_546abc;
        case 0x546ac0u: goto label_546ac0;
        case 0x546ac4u: goto label_546ac4;
        case 0x546ac8u: goto label_546ac8;
        case 0x546accu: goto label_546acc;
        case 0x546ad0u: goto label_546ad0;
        case 0x546ad4u: goto label_546ad4;
        case 0x546ad8u: goto label_546ad8;
        case 0x546adcu: goto label_546adc;
        case 0x546ae0u: goto label_546ae0;
        case 0x546ae4u: goto label_546ae4;
        case 0x546ae8u: goto label_546ae8;
        case 0x546aecu: goto label_546aec;
        case 0x546af0u: goto label_546af0;
        case 0x546af4u: goto label_546af4;
        case 0x546af8u: goto label_546af8;
        case 0x546afcu: goto label_546afc;
        case 0x546b00u: goto label_546b00;
        case 0x546b04u: goto label_546b04;
        case 0x546b08u: goto label_546b08;
        case 0x546b0cu: goto label_546b0c;
        case 0x546b10u: goto label_546b10;
        case 0x546b14u: goto label_546b14;
        case 0x546b18u: goto label_546b18;
        case 0x546b1cu: goto label_546b1c;
        case 0x546b20u: goto label_546b20;
        case 0x546b24u: goto label_546b24;
        case 0x546b28u: goto label_546b28;
        case 0x546b2cu: goto label_546b2c;
        case 0x546b30u: goto label_546b30;
        case 0x546b34u: goto label_546b34;
        case 0x546b38u: goto label_546b38;
        case 0x546b3cu: goto label_546b3c;
        case 0x546b40u: goto label_546b40;
        case 0x546b44u: goto label_546b44;
        case 0x546b48u: goto label_546b48;
        case 0x546b4cu: goto label_546b4c;
        case 0x546b50u: goto label_546b50;
        case 0x546b54u: goto label_546b54;
        case 0x546b58u: goto label_546b58;
        case 0x546b5cu: goto label_546b5c;
        case 0x546b60u: goto label_546b60;
        case 0x546b64u: goto label_546b64;
        case 0x546b68u: goto label_546b68;
        case 0x546b6cu: goto label_546b6c;
        case 0x546b70u: goto label_546b70;
        case 0x546b74u: goto label_546b74;
        case 0x546b78u: goto label_546b78;
        case 0x546b7cu: goto label_546b7c;
        case 0x546b80u: goto label_546b80;
        case 0x546b84u: goto label_546b84;
        case 0x546b88u: goto label_546b88;
        case 0x546b8cu: goto label_546b8c;
        case 0x546b90u: goto label_546b90;
        case 0x546b94u: goto label_546b94;
        case 0x546b98u: goto label_546b98;
        case 0x546b9cu: goto label_546b9c;
        case 0x546ba0u: goto label_546ba0;
        case 0x546ba4u: goto label_546ba4;
        case 0x546ba8u: goto label_546ba8;
        case 0x546bacu: goto label_546bac;
        case 0x546bb0u: goto label_546bb0;
        case 0x546bb4u: goto label_546bb4;
        case 0x546bb8u: goto label_546bb8;
        case 0x546bbcu: goto label_546bbc;
        case 0x546bc0u: goto label_546bc0;
        case 0x546bc4u: goto label_546bc4;
        case 0x546bc8u: goto label_546bc8;
        case 0x546bccu: goto label_546bcc;
        case 0x546bd0u: goto label_546bd0;
        case 0x546bd4u: goto label_546bd4;
        case 0x546bd8u: goto label_546bd8;
        case 0x546bdcu: goto label_546bdc;
        case 0x546be0u: goto label_546be0;
        case 0x546be4u: goto label_546be4;
        case 0x546be8u: goto label_546be8;
        case 0x546becu: goto label_546bec;
        case 0x546bf0u: goto label_546bf0;
        case 0x546bf4u: goto label_546bf4;
        case 0x546bf8u: goto label_546bf8;
        case 0x546bfcu: goto label_546bfc;
        case 0x546c00u: goto label_546c00;
        case 0x546c04u: goto label_546c04;
        case 0x546c08u: goto label_546c08;
        case 0x546c0cu: goto label_546c0c;
        case 0x546c10u: goto label_546c10;
        case 0x546c14u: goto label_546c14;
        case 0x546c18u: goto label_546c18;
        case 0x546c1cu: goto label_546c1c;
        case 0x546c20u: goto label_546c20;
        case 0x546c24u: goto label_546c24;
        case 0x546c28u: goto label_546c28;
        case 0x546c2cu: goto label_546c2c;
        case 0x546c30u: goto label_546c30;
        case 0x546c34u: goto label_546c34;
        case 0x546c38u: goto label_546c38;
        case 0x546c3cu: goto label_546c3c;
        case 0x546c40u: goto label_546c40;
        case 0x546c44u: goto label_546c44;
        case 0x546c48u: goto label_546c48;
        case 0x546c4cu: goto label_546c4c;
        case 0x546c50u: goto label_546c50;
        case 0x546c54u: goto label_546c54;
        case 0x546c58u: goto label_546c58;
        case 0x546c5cu: goto label_546c5c;
        case 0x546c60u: goto label_546c60;
        case 0x546c64u: goto label_546c64;
        case 0x546c68u: goto label_546c68;
        case 0x546c6cu: goto label_546c6c;
        case 0x546c70u: goto label_546c70;
        case 0x546c74u: goto label_546c74;
        case 0x546c78u: goto label_546c78;
        case 0x546c7cu: goto label_546c7c;
        case 0x546c80u: goto label_546c80;
        case 0x546c84u: goto label_546c84;
        case 0x546c88u: goto label_546c88;
        case 0x546c8cu: goto label_546c8c;
        case 0x546c90u: goto label_546c90;
        case 0x546c94u: goto label_546c94;
        case 0x546c98u: goto label_546c98;
        case 0x546c9cu: goto label_546c9c;
        case 0x546ca0u: goto label_546ca0;
        case 0x546ca4u: goto label_546ca4;
        case 0x546ca8u: goto label_546ca8;
        case 0x546cacu: goto label_546cac;
        case 0x546cb0u: goto label_546cb0;
        case 0x546cb4u: goto label_546cb4;
        case 0x546cb8u: goto label_546cb8;
        case 0x546cbcu: goto label_546cbc;
        case 0x546cc0u: goto label_546cc0;
        case 0x546cc4u: goto label_546cc4;
        case 0x546cc8u: goto label_546cc8;
        case 0x546cccu: goto label_546ccc;
        case 0x546cd0u: goto label_546cd0;
        case 0x546cd4u: goto label_546cd4;
        case 0x546cd8u: goto label_546cd8;
        case 0x546cdcu: goto label_546cdc;
        case 0x546ce0u: goto label_546ce0;
        case 0x546ce4u: goto label_546ce4;
        case 0x546ce8u: goto label_546ce8;
        case 0x546cecu: goto label_546cec;
        case 0x546cf0u: goto label_546cf0;
        case 0x546cf4u: goto label_546cf4;
        case 0x546cf8u: goto label_546cf8;
        case 0x546cfcu: goto label_546cfc;
        case 0x546d00u: goto label_546d00;
        case 0x546d04u: goto label_546d04;
        case 0x546d08u: goto label_546d08;
        case 0x546d0cu: goto label_546d0c;
        case 0x546d10u: goto label_546d10;
        case 0x546d14u: goto label_546d14;
        case 0x546d18u: goto label_546d18;
        case 0x546d1cu: goto label_546d1c;
        case 0x546d20u: goto label_546d20;
        case 0x546d24u: goto label_546d24;
        case 0x546d28u: goto label_546d28;
        case 0x546d2cu: goto label_546d2c;
        case 0x546d30u: goto label_546d30;
        case 0x546d34u: goto label_546d34;
        case 0x546d38u: goto label_546d38;
        case 0x546d3cu: goto label_546d3c;
        default: break;
    }

    ctx->pc = 0x546ab0u;

label_546ab0:
    // 0x546ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x546ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_546ab4:
    // 0x546ab4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x546ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_546ab8:
    // 0x546ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x546ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_546abc:
    // 0x546abc: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x546abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_546ac0:
    // 0x546ac0: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x546ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_546ac4:
    // 0x546ac4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x546ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_546ac8:
    // 0x546ac8: 0x10a3003c  beq         $a1, $v1, . + 4 + (0x3C << 2)
label_546acc:
    if (ctx->pc == 0x546ACCu) {
        ctx->pc = 0x546ACCu;
            // 0x546acc: 0xc4c40018  lwc1        $f4, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x546AD0u;
        goto label_546ad0;
    }
    ctx->pc = 0x546AC8u;
    {
        const bool branch_taken_0x546ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x546ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546AC8u;
            // 0x546acc: 0xc4c40018  lwc1        $f4, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x546ac8) {
            ctx->pc = 0x546BBCu;
            goto label_546bbc;
        }
    }
    ctx->pc = 0x546AD0u;
label_546ad0:
    // 0x546ad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x546ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_546ad4:
    // 0x546ad4: 0x50a30025  beql        $a1, $v1, . + 4 + (0x25 << 2)
label_546ad8:
    if (ctx->pc == 0x546AD8u) {
        ctx->pc = 0x546AD8u;
            // 0x546ad8: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->pc = 0x546ADCu;
        goto label_546adc;
    }
    ctx->pc = 0x546AD4u;
    {
        const bool branch_taken_0x546ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x546ad4) {
            ctx->pc = 0x546AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546AD4u;
            // 0x546ad8: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x546B6Cu;
            goto label_546b6c;
        }
    }
    ctx->pc = 0x546ADCu;
label_546adc:
    // 0x546adc: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_546ae0:
    if (ctx->pc == 0x546AE0u) {
        ctx->pc = 0x546AE0u;
            // 0x546ae0: 0xc4810084  lwc1        $f1, 0x84($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x546AE4u;
        goto label_546ae4;
    }
    ctx->pc = 0x546ADCu;
    {
        const bool branch_taken_0x546adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x546adc) {
            ctx->pc = 0x546AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546ADCu;
            // 0x546ae0: 0xc4810084  lwc1        $f1, 0x84($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x546AECu;
            goto label_546aec;
        }
    }
    ctx->pc = 0x546AE4u;
label_546ae4:
    // 0x546ae4: 0x10000052  b           . + 4 + (0x52 << 2)
label_546ae8:
    if (ctx->pc == 0x546AE8u) {
        ctx->pc = 0x546AE8u;
            // 0x546ae8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x546AECu;
        goto label_546aec;
    }
    ctx->pc = 0x546AE4u;
    {
        const bool branch_taken_0x546ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546AE4u;
            // 0x546ae8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546ae4) {
            ctx->pc = 0x546C30u;
            goto label_546c30;
        }
    }
    ctx->pc = 0x546AECu;
label_546aec:
    // 0x546aec: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x546aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_546af0:
    // 0x546af0: 0xc482007c  lwc1        $f2, 0x7C($a0)
    ctx->pc = 0x546af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_546af4:
    // 0x546af4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x546af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_546af8:
    // 0x546af8: 0x0  nop
    ctx->pc = 0x546af8u;
    // NOP
label_546afc:
    // 0x546afc: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x546afcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_546b00:
    // 0x546b00: 0x4604105d  msub.s      $f1, $f2, $f4
    ctx->pc = 0x546b00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_546b04:
    // 0x546b04: 0xe4810084  swc1        $f1, 0x84($a0)
    ctx->pc = 0x546b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_546b08:
    // 0x546b08: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x546b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_546b0c:
    // 0x546b0c: 0xc4820078  lwc1        $f2, 0x78($a0)
    ctx->pc = 0x546b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_546b10:
    // 0x546b10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x546b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_546b14:
    // 0x546b14: 0x0  nop
    ctx->pc = 0x546b14u;
    // NOP
label_546b18:
    // 0x546b18: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x546b18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_546b1c:
    // 0x546b1c: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x546b1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_546b20:
    // 0x546b20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x546b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_546b24:
    // 0x546b24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_546b28:
    if (ctx->pc == 0x546B28u) {
        ctx->pc = 0x546B28u;
            // 0x546b28: 0xe4810074  swc1        $f1, 0x74($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
        ctx->pc = 0x546B2Cu;
        goto label_546b2c;
    }
    ctx->pc = 0x546B24u;
    {
        const bool branch_taken_0x546b24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x546B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546B24u;
            // 0x546b28: 0xe4810074  swc1        $f1, 0x74($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x546b24) {
            ctx->pc = 0x546B30u;
            goto label_546b30;
        }
    }
    ctx->pc = 0x546B2Cu;
label_546b2c:
    // 0x546b2c: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x546b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_546b30:
    // 0x546b30: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x546b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_546b34:
    // 0x546b34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x546b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_546b38:
    // 0x546b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x546b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_546b3c:
    // 0x546b3c: 0x0  nop
    ctx->pc = 0x546b3cu;
    // NOP
label_546b40:
    // 0x546b40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x546b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_546b44:
    // 0x546b44: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_546b48:
    if (ctx->pc == 0x546B48u) {
        ctx->pc = 0x546B4Cu;
        goto label_546b4c;
    }
    ctx->pc = 0x546B44u;
    {
        const bool branch_taken_0x546b44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x546b44) {
            ctx->pc = 0x546C2Cu;
            goto label_546c2c;
        }
    }
    ctx->pc = 0x546B4Cu;
label_546b4c:
    // 0x546b4c: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x546b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_546b50:
    // 0x546b50: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x546b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_546b54:
    // 0x546b54: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x546b54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
label_546b58:
    // 0x546b58: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x546b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
label_546b5c:
    // 0x546b5c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x546b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_546b60:
    // 0x546b60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x546b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_546b64:
    // 0x546b64: 0x10000031  b           . + 4 + (0x31 << 2)
label_546b68:
    if (ctx->pc == 0x546B68u) {
        ctx->pc = 0x546B68u;
            // 0x546b68: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x546B6Cu;
        goto label_546b6c;
    }
    ctx->pc = 0x546B64u;
    {
        const bool branch_taken_0x546b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546B64u;
            // 0x546b68: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546b64) {
            ctx->pc = 0x546C2Cu;
            goto label_546c2c;
        }
    }
    ctx->pc = 0x546B6Cu;
label_546b6c:
    // 0x546b6c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x546b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_546b70:
    // 0x546b70: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x546b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_546b74:
    // 0x546b74: 0x8c63ddd0  lw          $v1, -0x2230($v1)
    ctx->pc = 0x546b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958544)));
label_546b78:
    // 0x546b78: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x546b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_546b7c:
    // 0x546b7c: 0x0  nop
    ctx->pc = 0x546b7cu;
    // NOP
label_546b80:
    // 0x546b80: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x546b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_546b84:
    // 0x546b84: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x546b84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_546b88:
    // 0x546b88: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_546b8c:
    if (ctx->pc == 0x546B8Cu) {
        ctx->pc = 0x546B8Cu;
            // 0x546b8c: 0xac850088  sw          $a1, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 5));
        ctx->pc = 0x546B90u;
        goto label_546b90;
    }
    ctx->pc = 0x546B88u;
    {
        const bool branch_taken_0x546b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x546B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546B88u;
            // 0x546b8c: 0xac850088  sw          $a1, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546b88) {
            ctx->pc = 0x546C2Cu;
            goto label_546c2c;
        }
    }
    ctx->pc = 0x546B90u;
label_546b90:
    // 0x546b90: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x546b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
label_546b94:
    // 0x546b94: 0x3c03402a  lui         $v1, 0x402A
    ctx->pc = 0x546b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16426 << 16));
label_546b98:
    // 0x546b98: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x546b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_546b9c:
    // 0x546b9c: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x546b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
label_546ba0:
    // 0x546ba0: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x546ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
label_546ba4:
    // 0x546ba4: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x546ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
label_546ba8:
    // 0x546ba8: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x546ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
label_546bac:
    // 0x546bac: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x546bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_546bb0:
    // 0x546bb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x546bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_546bb4:
    // 0x546bb4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_546bb8:
    if (ctx->pc == 0x546BB8u) {
        ctx->pc = 0x546BB8u;
            // 0x546bb8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x546BBCu;
        goto label_546bbc;
    }
    ctx->pc = 0x546BB4u;
    {
        const bool branch_taken_0x546bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546BB4u;
            // 0x546bb8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546bb4) {
            ctx->pc = 0x546C2Cu;
            goto label_546c2c;
        }
    }
    ctx->pc = 0x546BBCu;
label_546bbc:
    // 0x546bbc: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x546bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_546bc0:
    // 0x546bc0: 0xc481007c  lwc1        $f1, 0x7C($a0)
    ctx->pc = 0x546bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_546bc4:
    // 0x546bc4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x546bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_546bc8:
    // 0x546bc8: 0x0  nop
    ctx->pc = 0x546bc8u;
    // NOP
label_546bcc:
    // 0x546bcc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x546bccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_546bd0:
    // 0x546bd0: 0x4604081c  madd.s      $f0, $f1, $f4
    ctx->pc = 0x546bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_546bd4:
    // 0x546bd4: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x546bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_546bd8:
    // 0x546bd8: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x546bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_546bdc:
    // 0x546bdc: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x546bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_546be0:
    // 0x546be0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x546be0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_546be4:
    // 0x546be4: 0x4604081d  msub.s      $f0, $f1, $f4
    ctx->pc = 0x546be4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_546be8:
    // 0x546be8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x546be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_546bec:
    // 0x546bec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_546bf0:
    if (ctx->pc == 0x546BF0u) {
        ctx->pc = 0x546BF0u;
            // 0x546bf0: 0xe4800074  swc1        $f0, 0x74($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
        ctx->pc = 0x546BF4u;
        goto label_546bf4;
    }
    ctx->pc = 0x546BECu;
    {
        const bool branch_taken_0x546bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x546BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546BECu;
            // 0x546bf0: 0xe4800074  swc1        $f0, 0x74($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x546bec) {
            ctx->pc = 0x546BF8u;
            goto label_546bf8;
        }
    }
    ctx->pc = 0x546BF4u;
label_546bf4:
    // 0x546bf4: 0xe4820074  swc1        $f2, 0x74($a0)
    ctx->pc = 0x546bf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_546bf8:
    // 0x546bf8: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x546bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_546bfc:
    // 0x546bfc: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x546bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_546c00:
    // 0x546c00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x546c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_546c04:
    // 0x546c04: 0x0  nop
    ctx->pc = 0x546c04u;
    // NOP
label_546c08:
    // 0x546c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x546c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_546c0c:
    // 0x546c0c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_546c10:
    if (ctx->pc == 0x546C10u) {
        ctx->pc = 0x546C14u;
        goto label_546c14;
    }
    ctx->pc = 0x546C0Cu;
    {
        const bool branch_taken_0x546c0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x546c0c) {
            ctx->pc = 0x546C2Cu;
            goto label_546c2c;
        }
    }
    ctx->pc = 0x546C14u;
label_546c14:
    // 0x546c14: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x546c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
label_546c18:
    // 0x546c18: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x546c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
label_546c1c:
    // 0x546c1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x546c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_546c20:
    // 0x546c20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x546c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_546c24:
    // 0x546c24: 0x320f809  jalr        $t9
label_546c28:
    if (ctx->pc == 0x546C28u) {
        ctx->pc = 0x546C28u;
            // 0x546c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546C2Cu;
        goto label_546c2c;
    }
    ctx->pc = 0x546C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x546C2Cu);
        ctx->pc = 0x546C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546C24u;
            // 0x546c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x546C2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x546C2Cu; }
            if (ctx->pc != 0x546C2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x546C2Cu;
label_546c2c:
    // 0x546c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x546c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_546c30:
    // 0x546c30: 0x3e00008  jr          $ra
label_546c34:
    if (ctx->pc == 0x546C34u) {
        ctx->pc = 0x546C34u;
            // 0x546c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x546C38u;
        goto label_546c38;
    }
    ctx->pc = 0x546C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x546C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546C30u;
            // 0x546c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x546C38u;
label_546c38:
    // 0x546c38: 0x0  nop
    ctx->pc = 0x546c38u;
    // NOP
label_546c3c:
    // 0x546c3c: 0x0  nop
    ctx->pc = 0x546c3cu;
    // NOP
label_546c40:
    // 0x546c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x546c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_546c44:
    // 0x546c44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x546c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_546c48:
    // 0x546c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x546c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_546c4c:
    // 0x546c4c: 0x8c670e80  lw          $a3, 0xE80($v1)
    ctx->pc = 0x546c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_546c50:
    // 0x546c50: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x546c50u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_546c54:
    // 0x546c54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x546c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_546c58:
    // 0x546c58: 0x10c30032  beq         $a2, $v1, . + 4 + (0x32 << 2)
label_546c5c:
    if (ctx->pc == 0x546C5Cu) {
        ctx->pc = 0x546C5Cu;
            // 0x546c5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546C60u;
        goto label_546c60;
    }
    ctx->pc = 0x546C58u;
    {
        const bool branch_taken_0x546c58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x546C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546C58u;
            // 0x546c5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546c58) {
            ctx->pc = 0x546D24u;
            goto label_546d24;
        }
    }
    ctx->pc = 0x546C60u;
label_546c60:
    // 0x546c60: 0x50c0002b  beql        $a2, $zero, . + 4 + (0x2B << 2)
label_546c64:
    if (ctx->pc == 0x546C64u) {
        ctx->pc = 0x546C64u;
            // 0x546c64: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x546C68u;
        goto label_546c68;
    }
    ctx->pc = 0x546C60u;
    {
        const bool branch_taken_0x546c60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x546c60) {
            ctx->pc = 0x546C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546C60u;
            // 0x546c64: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546D10u;
            goto label_546d10;
        }
    }
    ctx->pc = 0x546C68u;
label_546c68:
    // 0x546c68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x546c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_546c6c:
    // 0x546c6c: 0x50c30020  beql        $a2, $v1, . + 4 + (0x20 << 2)
label_546c70:
    if (ctx->pc == 0x546C70u) {
        ctx->pc = 0x546C70u;
            // 0x546c70: 0x8ca3005c  lw          $v1, 0x5C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
        ctx->pc = 0x546C74u;
        goto label_546c74;
    }
    ctx->pc = 0x546C6Cu;
    {
        const bool branch_taken_0x546c6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x546c6c) {
            ctx->pc = 0x546C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546C6Cu;
            // 0x546c70: 0x8ca3005c  lw          $v1, 0x5C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546CF0u;
            goto label_546cf0;
        }
    }
    ctx->pc = 0x546C74u;
label_546c74:
    // 0x546c74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x546c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_546c78:
    // 0x546c78: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_546c7c:
    if (ctx->pc == 0x546C7Cu) {
        ctx->pc = 0x546C7Cu;
            // 0x546c7c: 0x8ce30cb4  lw          $v1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->pc = 0x546C80u;
        goto label_546c80;
    }
    ctx->pc = 0x546C78u;
    {
        const bool branch_taken_0x546c78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x546c78) {
            ctx->pc = 0x546C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546C78u;
            // 0x546c7c: 0x8ce30cb4  lw          $v1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546C88u;
            goto label_546c88;
        }
    }
    ctx->pc = 0x546C80u;
label_546c80:
    // 0x546c80: 0x1000002d  b           . + 4 + (0x2D << 2)
label_546c84:
    if (ctx->pc == 0x546C84u) {
        ctx->pc = 0x546C84u;
            // 0x546c84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x546C88u;
        goto label_546c88;
    }
    ctx->pc = 0x546C80u;
    {
        const bool branch_taken_0x546c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546C80u;
            // 0x546c84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546c80) {
            ctx->pc = 0x546D38u;
            goto label_546d38;
        }
    }
    ctx->pc = 0x546C88u;
label_546c88:
    // 0x546c88: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x546c88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_546c8c:
    // 0x546c8c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_546c90:
    if (ctx->pc == 0x546C90u) {
        ctx->pc = 0x546C94u;
        goto label_546c94;
    }
    ctx->pc = 0x546C8Cu;
    {
        const bool branch_taken_0x546c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x546c8c) {
            ctx->pc = 0x546D34u;
            goto label_546d34;
        }
    }
    ctx->pc = 0x546C94u;
label_546c94:
    // 0x546c94: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x546c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_546c98:
    // 0x546c98: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_546c9c:
    if (ctx->pc == 0x546C9Cu) {
        ctx->pc = 0x546C9Cu;
            // 0x546c9c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x546CA0u;
        goto label_546ca0;
    }
    ctx->pc = 0x546C98u;
    {
        const bool branch_taken_0x546c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x546c98) {
            ctx->pc = 0x546C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546C98u;
            // 0x546c9c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546CA8u;
            goto label_546ca8;
        }
    }
    ctx->pc = 0x546CA0u;
label_546ca0:
    // 0x546ca0: 0x1000000e  b           . + 4 + (0xE << 2)
label_546ca4:
    if (ctx->pc == 0x546CA4u) {
        ctx->pc = 0x546CA4u;
            // 0x546ca4: 0x8cb90000  lw          $t9, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x546CA8u;
        goto label_546ca8;
    }
    ctx->pc = 0x546CA0u;
    {
        const bool branch_taken_0x546ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546CA0u;
            // 0x546ca4: 0x8cb90000  lw          $t9, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546ca0) {
            ctx->pc = 0x546CDCu;
            goto label_546cdc;
        }
    }
    ctx->pc = 0x546CA8u;
label_546ca8:
    // 0x546ca8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x546ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_546cac:
    // 0x546cac: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x546cacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
label_546cb0:
    // 0x546cb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x546cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_546cb4:
    // 0x546cb4: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x546cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
label_546cb8:
    // 0x546cb8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x546cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_546cbc:
    // 0x546cbc: 0xc4a20084  lwc1        $f2, 0x84($a1)
    ctx->pc = 0x546cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_546cc0:
    // 0x546cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x546cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_546cc4:
    // 0x546cc4: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x546cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_546cc8:
    // 0x546cc8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x546cc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_546ccc:
    // 0x546ccc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x546cccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_546cd0:
    // 0x546cd0: 0xe4a0007c  swc1        $f0, 0x7C($a1)
    ctx->pc = 0x546cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 124), bits); }
label_546cd4:
    // 0x546cd4: 0xaca20078  sw          $v0, 0x78($a1)
    ctx->pc = 0x546cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 2));
label_546cd8:
    // 0x546cd8: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x546cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_546cdc:
    // 0x546cdc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x546cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_546ce0:
    // 0x546ce0: 0x320f809  jalr        $t9
label_546ce4:
    if (ctx->pc == 0x546CE4u) {
        ctx->pc = 0x546CE4u;
            // 0x546ce4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546CE8u;
        goto label_546ce8;
    }
    ctx->pc = 0x546CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x546CE8u);
        ctx->pc = 0x546CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546CE0u;
            // 0x546ce4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x546CE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x546CE8u; }
            if (ctx->pc != 0x546CE8u) { return; }
        }
        }
    }
    ctx->pc = 0x546CE8u;
label_546ce8:
    // 0x546ce8: 0x10000012  b           . + 4 + (0x12 << 2)
label_546cec:
    if (ctx->pc == 0x546CECu) {
        ctx->pc = 0x546CF0u;
        goto label_546cf0;
    }
    ctx->pc = 0x546CE8u;
    {
        const bool branch_taken_0x546ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x546ce8) {
            ctx->pc = 0x546D34u;
            goto label_546d34;
        }
    }
    ctx->pc = 0x546CF0u;
label_546cf0:
    // 0x546cf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_546cf4:
    if (ctx->pc == 0x546CF4u) {
        ctx->pc = 0x546CF8u;
        goto label_546cf8;
    }
    ctx->pc = 0x546CF0u;
    {
        const bool branch_taken_0x546cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x546cf0) {
            ctx->pc = 0x546D00u;
            goto label_546d00;
        }
    }
    ctx->pc = 0x546CF8u;
label_546cf8:
    // 0x546cf8: 0x1000000e  b           . + 4 + (0xE << 2)
label_546cfc:
    if (ctx->pc == 0x546CFCu) {
        ctx->pc = 0x546D00u;
        goto label_546d00;
    }
    ctx->pc = 0x546CF8u;
    {
        const bool branch_taken_0x546cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x546cf8) {
            ctx->pc = 0x546D34u;
            goto label_546d34;
        }
    }
    ctx->pc = 0x546D00u;
label_546d00:
    // 0x546d00: 0xc151aac  jal         func_546AB0
label_546d04:
    if (ctx->pc == 0x546D04u) {
        ctx->pc = 0x546D08u;
        goto label_546d08;
    }
    ctx->pc = 0x546D00u;
    SET_GPR_U32(ctx, 31, 0x546D08u);
    ctx->pc = 0x546AB0u;
    goto label_546ab0;
    ctx->pc = 0x546D08u;
label_546d08:
    // 0x546d08: 0x1000000a  b           . + 4 + (0xA << 2)
label_546d0c:
    if (ctx->pc == 0x546D0Cu) {
        ctx->pc = 0x546D10u;
        goto label_546d10;
    }
    ctx->pc = 0x546D08u;
    {
        const bool branch_taken_0x546d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x546d08) {
            ctx->pc = 0x546D34u;
            goto label_546d34;
        }
    }
    ctx->pc = 0x546D10u;
label_546d10:
    // 0x546d10: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x546d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_546d14:
    // 0x546d14: 0x320f809  jalr        $t9
label_546d18:
    if (ctx->pc == 0x546D18u) {
        ctx->pc = 0x546D1Cu;
        goto label_546d1c;
    }
    ctx->pc = 0x546D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x546D1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x546D1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x546D1Cu; }
            if (ctx->pc != 0x546D1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x546D1Cu;
label_546d1c:
    // 0x546d1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_546d20:
    if (ctx->pc == 0x546D20u) {
        ctx->pc = 0x546D24u;
        goto label_546d24;
    }
    ctx->pc = 0x546D1Cu;
    {
        const bool branch_taken_0x546d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x546d1c) {
            ctx->pc = 0x546D34u;
            goto label_546d34;
        }
    }
    ctx->pc = 0x546D24u;
label_546d24:
    // 0x546d24: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x546d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_546d28:
    // 0x546d28: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x546d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_546d2c:
    // 0x546d2c: 0xc057b7c  jal         func_15EDF0
label_546d30:
    if (ctx->pc == 0x546D30u) {
        ctx->pc = 0x546D30u;
            // 0x546d30: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x546D34u;
        goto label_546d34;
    }
    ctx->pc = 0x546D2Cu;
    SET_GPR_U32(ctx, 31, 0x546D34u);
    ctx->pc = 0x546D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546D2Cu;
            // 0x546d30: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546D34u; }
        if (ctx->pc != 0x546D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546D34u; }
        if (ctx->pc != 0x546D34u) { return; }
    }
    ctx->pc = 0x546D34u;
label_546d34:
    // 0x546d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x546d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_546d38:
    // 0x546d38: 0x3e00008  jr          $ra
label_546d3c:
    if (ctx->pc == 0x546D3Cu) {
        ctx->pc = 0x546D3Cu;
            // 0x546d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x546D40u;
        goto label_fallthrough_0x546d38;
    }
    ctx->pc = 0x546D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x546D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546D38u;
            // 0x546d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x546d38:
    ctx->pc = 0x546D40u;
}
