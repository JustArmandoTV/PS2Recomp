#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00559BA0
// Address: 0x559ba0 - 0x559d50
void sub_00559BA0_0x559ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00559BA0_0x559ba0");
#endif

    switch (ctx->pc) {
        case 0x559ba0u: goto label_559ba0;
        case 0x559ba4u: goto label_559ba4;
        case 0x559ba8u: goto label_559ba8;
        case 0x559bacu: goto label_559bac;
        case 0x559bb0u: goto label_559bb0;
        case 0x559bb4u: goto label_559bb4;
        case 0x559bb8u: goto label_559bb8;
        case 0x559bbcu: goto label_559bbc;
        case 0x559bc0u: goto label_559bc0;
        case 0x559bc4u: goto label_559bc4;
        case 0x559bc8u: goto label_559bc8;
        case 0x559bccu: goto label_559bcc;
        case 0x559bd0u: goto label_559bd0;
        case 0x559bd4u: goto label_559bd4;
        case 0x559bd8u: goto label_559bd8;
        case 0x559bdcu: goto label_559bdc;
        case 0x559be0u: goto label_559be0;
        case 0x559be4u: goto label_559be4;
        case 0x559be8u: goto label_559be8;
        case 0x559becu: goto label_559bec;
        case 0x559bf0u: goto label_559bf0;
        case 0x559bf4u: goto label_559bf4;
        case 0x559bf8u: goto label_559bf8;
        case 0x559bfcu: goto label_559bfc;
        case 0x559c00u: goto label_559c00;
        case 0x559c04u: goto label_559c04;
        case 0x559c08u: goto label_559c08;
        case 0x559c0cu: goto label_559c0c;
        case 0x559c10u: goto label_559c10;
        case 0x559c14u: goto label_559c14;
        case 0x559c18u: goto label_559c18;
        case 0x559c1cu: goto label_559c1c;
        case 0x559c20u: goto label_559c20;
        case 0x559c24u: goto label_559c24;
        case 0x559c28u: goto label_559c28;
        case 0x559c2cu: goto label_559c2c;
        case 0x559c30u: goto label_559c30;
        case 0x559c34u: goto label_559c34;
        case 0x559c38u: goto label_559c38;
        case 0x559c3cu: goto label_559c3c;
        case 0x559c40u: goto label_559c40;
        case 0x559c44u: goto label_559c44;
        case 0x559c48u: goto label_559c48;
        case 0x559c4cu: goto label_559c4c;
        case 0x559c50u: goto label_559c50;
        case 0x559c54u: goto label_559c54;
        case 0x559c58u: goto label_559c58;
        case 0x559c5cu: goto label_559c5c;
        case 0x559c60u: goto label_559c60;
        case 0x559c64u: goto label_559c64;
        case 0x559c68u: goto label_559c68;
        case 0x559c6cu: goto label_559c6c;
        case 0x559c70u: goto label_559c70;
        case 0x559c74u: goto label_559c74;
        case 0x559c78u: goto label_559c78;
        case 0x559c7cu: goto label_559c7c;
        case 0x559c80u: goto label_559c80;
        case 0x559c84u: goto label_559c84;
        case 0x559c88u: goto label_559c88;
        case 0x559c8cu: goto label_559c8c;
        case 0x559c90u: goto label_559c90;
        case 0x559c94u: goto label_559c94;
        case 0x559c98u: goto label_559c98;
        case 0x559c9cu: goto label_559c9c;
        case 0x559ca0u: goto label_559ca0;
        case 0x559ca4u: goto label_559ca4;
        case 0x559ca8u: goto label_559ca8;
        case 0x559cacu: goto label_559cac;
        case 0x559cb0u: goto label_559cb0;
        case 0x559cb4u: goto label_559cb4;
        case 0x559cb8u: goto label_559cb8;
        case 0x559cbcu: goto label_559cbc;
        case 0x559cc0u: goto label_559cc0;
        case 0x559cc4u: goto label_559cc4;
        case 0x559cc8u: goto label_559cc8;
        case 0x559cccu: goto label_559ccc;
        case 0x559cd0u: goto label_559cd0;
        case 0x559cd4u: goto label_559cd4;
        case 0x559cd8u: goto label_559cd8;
        case 0x559cdcu: goto label_559cdc;
        case 0x559ce0u: goto label_559ce0;
        case 0x559ce4u: goto label_559ce4;
        case 0x559ce8u: goto label_559ce8;
        case 0x559cecu: goto label_559cec;
        case 0x559cf0u: goto label_559cf0;
        case 0x559cf4u: goto label_559cf4;
        case 0x559cf8u: goto label_559cf8;
        case 0x559cfcu: goto label_559cfc;
        case 0x559d00u: goto label_559d00;
        case 0x559d04u: goto label_559d04;
        case 0x559d08u: goto label_559d08;
        case 0x559d0cu: goto label_559d0c;
        case 0x559d10u: goto label_559d10;
        case 0x559d14u: goto label_559d14;
        case 0x559d18u: goto label_559d18;
        case 0x559d1cu: goto label_559d1c;
        case 0x559d20u: goto label_559d20;
        case 0x559d24u: goto label_559d24;
        case 0x559d28u: goto label_559d28;
        case 0x559d2cu: goto label_559d2c;
        case 0x559d30u: goto label_559d30;
        case 0x559d34u: goto label_559d34;
        case 0x559d38u: goto label_559d38;
        case 0x559d3cu: goto label_559d3c;
        case 0x559d40u: goto label_559d40;
        case 0x559d44u: goto label_559d44;
        case 0x559d48u: goto label_559d48;
        case 0x559d4cu: goto label_559d4c;
        default: break;
    }

    ctx->pc = 0x559ba0u;

label_559ba0:
    // 0x559ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x559ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_559ba4:
    // 0x559ba4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x559ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_559ba8:
    // 0x559ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x559ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_559bac:
    // 0x559bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x559bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_559bb0:
    // 0x559bb0: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x559bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_559bb4:
    // 0x559bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x559bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_559bb8:
    // 0x559bb8: 0x8c840098  lw          $a0, 0x98($a0)
    ctx->pc = 0x559bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_559bbc:
    // 0x559bbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x559bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_559bc0:
    // 0x559bc0: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
label_559bc4:
    if (ctx->pc == 0x559BC4u) {
        ctx->pc = 0x559BC4u;
            // 0x559bc4: 0xc4a40018  lwc1        $f4, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x559BC8u;
        goto label_559bc8;
    }
    ctx->pc = 0x559BC0u;
    {
        const bool branch_taken_0x559bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x559BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559BC0u;
            // 0x559bc4: 0xc4a40018  lwc1        $f4, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x559bc0) {
            ctx->pc = 0x559CB4u;
            goto label_559cb4;
        }
    }
    ctx->pc = 0x559BC8u;
label_559bc8:
    // 0x559bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x559bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_559bcc:
    // 0x559bcc: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
label_559bd0:
    if (ctx->pc == 0x559BD0u) {
        ctx->pc = 0x559BD0u;
            // 0x559bd0: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->pc = 0x559BD4u;
        goto label_559bd4;
    }
    ctx->pc = 0x559BCCu;
    {
        const bool branch_taken_0x559bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x559bcc) {
            ctx->pc = 0x559BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559BCCu;
            // 0x559bd0: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x559C64u;
            goto label_559c64;
        }
    }
    ctx->pc = 0x559BD4u;
label_559bd4:
    // 0x559bd4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_559bd8:
    if (ctx->pc == 0x559BD8u) {
        ctx->pc = 0x559BD8u;
            // 0x559bd8: 0xc60100c0  lwc1        $f1, 0xC0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x559BDCu;
        goto label_559bdc;
    }
    ctx->pc = 0x559BD4u;
    {
        const bool branch_taken_0x559bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x559bd4) {
            ctx->pc = 0x559BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559BD4u;
            // 0x559bd8: 0xc60100c0  lwc1        $f1, 0xC0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x559BE4u;
            goto label_559be4;
        }
    }
    ctx->pc = 0x559BDCu;
label_559bdc:
    // 0x559bdc: 0x10000058  b           . + 4 + (0x58 << 2)
label_559be0:
    if (ctx->pc == 0x559BE0u) {
        ctx->pc = 0x559BE0u;
            // 0x559be0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x559BE4u;
        goto label_559be4;
    }
    ctx->pc = 0x559BDCu;
    {
        const bool branch_taken_0x559bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559BDCu;
            // 0x559be0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559bdc) {
            ctx->pc = 0x559D40u;
            goto label_559d40;
        }
    }
    ctx->pc = 0x559BE4u;
label_559be4:
    // 0x559be4: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x559be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_559be8:
    // 0x559be8: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x559be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559bec:
    // 0x559bec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x559becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_559bf0:
    // 0x559bf0: 0x0  nop
    ctx->pc = 0x559bf0u;
    // NOP
label_559bf4:
    // 0x559bf4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x559bf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_559bf8:
    // 0x559bf8: 0x4604105d  msub.s      $f1, $f2, $f4
    ctx->pc = 0x559bf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_559bfc:
    // 0x559bfc: 0xe60100c0  swc1        $f1, 0xC0($s0)
    ctx->pc = 0x559bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_559c00:
    // 0x559c00: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x559c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559c04:
    // 0x559c04: 0xc60200b0  lwc1        $f2, 0xB0($s0)
    ctx->pc = 0x559c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559c08:
    // 0x559c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x559c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559c0c:
    // 0x559c0c: 0x0  nop
    ctx->pc = 0x559c0cu;
    // NOP
label_559c10:
    // 0x559c10: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x559c10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_559c14:
    // 0x559c14: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x559c14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_559c18:
    // 0x559c18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x559c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559c1c:
    // 0x559c1c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_559c20:
    if (ctx->pc == 0x559C20u) {
        ctx->pc = 0x559C20u;
            // 0x559c20: 0xe60100ac  swc1        $f1, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->pc = 0x559C24u;
        goto label_559c24;
    }
    ctx->pc = 0x559C1Cu;
    {
        const bool branch_taken_0x559c1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x559C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559C1Cu;
            // 0x559c20: 0xe60100ac  swc1        $f1, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x559c1c) {
            ctx->pc = 0x559C28u;
            goto label_559c28;
        }
    }
    ctx->pc = 0x559C24u;
label_559c24:
    // 0x559c24: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x559c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_559c28:
    // 0x559c28: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x559c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559c2c:
    // 0x559c2c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x559c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_559c30:
    // 0x559c30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x559c30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559c34:
    // 0x559c34: 0x0  nop
    ctx->pc = 0x559c34u;
    // NOP
label_559c38:
    // 0x559c38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x559c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559c3c:
    // 0x559c3c: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
label_559c40:
    if (ctx->pc == 0x559C40u) {
        ctx->pc = 0x559C44u;
        goto label_559c44;
    }
    ctx->pc = 0x559C3Cu;
    {
        const bool branch_taken_0x559c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x559c3c) {
            ctx->pc = 0x559D3Cu;
            goto label_559d3c;
        }
    }
    ctx->pc = 0x559C44u;
label_559c44:
    // 0x559c44: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x559c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_559c48:
    // 0x559c48: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x559c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_559c4c:
    // 0x559c4c: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x559c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
label_559c50:
    // 0x559c50: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x559c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_559c54:
    // 0x559c54: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x559c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_559c58:
    // 0x559c58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x559c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_559c5c:
    // 0x559c5c: 0x10000037  b           . + 4 + (0x37 << 2)
label_559c60:
    if (ctx->pc == 0x559C60u) {
        ctx->pc = 0x559C60u;
            // 0x559c60: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->pc = 0x559C64u;
        goto label_559c64;
    }
    ctx->pc = 0x559C5Cu;
    {
        const bool branch_taken_0x559c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559C5Cu;
            // 0x559c60: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559c5c) {
            ctx->pc = 0x559D3Cu;
            goto label_559d3c;
        }
    }
    ctx->pc = 0x559C64u;
label_559c64:
    // 0x559c64: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x559c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_559c68:
    // 0x559c68: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x559c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_559c6c:
    // 0x559c6c: 0x8c63f300  lw          $v1, -0xD00($v1)
    ctx->pc = 0x559c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963968)));
label_559c70:
    // 0x559c70: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x559c70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_559c74:
    // 0x559c74: 0x0  nop
    ctx->pc = 0x559c74u;
    // NOP
label_559c78:
    // 0x559c78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x559c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_559c7c:
    // 0x559c7c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x559c7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_559c80:
    // 0x559c80: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
label_559c84:
    if (ctx->pc == 0x559C84u) {
        ctx->pc = 0x559C84u;
            // 0x559c84: 0xae0400c4  sw          $a0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
        ctx->pc = 0x559C88u;
        goto label_559c88;
    }
    ctx->pc = 0x559C80u;
    {
        const bool branch_taken_0x559c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x559C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559C80u;
            // 0x559c84: 0xae0400c4  sw          $a0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559c80) {
            ctx->pc = 0x559D3Cu;
            goto label_559d3c;
        }
    }
    ctx->pc = 0x559C88u;
label_559c88:
    // 0x559c88: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x559c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_559c8c:
    // 0x559c8c: 0x3c03402a  lui         $v1, 0x402A
    ctx->pc = 0x559c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16426 << 16));
label_559c90:
    // 0x559c90: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x559c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_559c94:
    // 0x559c94: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x559c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_559c98:
    // 0x559c98: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x559c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_559c9c:
    // 0x559c9c: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x559c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
label_559ca0:
    // 0x559ca0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x559ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_559ca4:
    // 0x559ca4: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x559ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_559ca8:
    // 0x559ca8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x559ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_559cac:
    // 0x559cac: 0x10000023  b           . + 4 + (0x23 << 2)
label_559cb0:
    if (ctx->pc == 0x559CB0u) {
        ctx->pc = 0x559CB0u;
            // 0x559cb0: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->pc = 0x559CB4u;
        goto label_559cb4;
    }
    ctx->pc = 0x559CACu;
    {
        const bool branch_taken_0x559cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559CACu;
            // 0x559cb0: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559cac) {
            ctx->pc = 0x559D3Cu;
            goto label_559d3c;
        }
    }
    ctx->pc = 0x559CB4u;
label_559cb4:
    // 0x559cb4: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x559cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_559cb8:
    // 0x559cb8: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x559cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559cbc:
    // 0x559cbc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x559cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_559cc0:
    // 0x559cc0: 0x0  nop
    ctx->pc = 0x559cc0u;
    // NOP
label_559cc4:
    // 0x559cc4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x559cc4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_559cc8:
    // 0x559cc8: 0x4604081c  madd.s      $f0, $f1, $f4
    ctx->pc = 0x559cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_559ccc:
    // 0x559ccc: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x559cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_559cd0:
    // 0x559cd0: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x559cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_559cd4:
    // 0x559cd4: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x559cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559cd8:
    // 0x559cd8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x559cd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_559cdc:
    // 0x559cdc: 0x4604081d  msub.s      $f0, $f1, $f4
    ctx->pc = 0x559cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_559ce0:
    // 0x559ce0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x559ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559ce4:
    // 0x559ce4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_559ce8:
    if (ctx->pc == 0x559CE8u) {
        ctx->pc = 0x559CE8u;
            // 0x559ce8: 0xe60000ac  swc1        $f0, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->pc = 0x559CECu;
        goto label_559cec;
    }
    ctx->pc = 0x559CE4u;
    {
        const bool branch_taken_0x559ce4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x559CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559CE4u;
            // 0x559ce8: 0xe60000ac  swc1        $f0, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x559ce4) {
            ctx->pc = 0x559CF0u;
            goto label_559cf0;
        }
    }
    ctx->pc = 0x559CECu;
label_559cec:
    // 0x559cec: 0xe60200ac  swc1        $f2, 0xAC($s0)
    ctx->pc = 0x559cecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_559cf0:
    // 0x559cf0: 0xc60100b8  lwc1        $f1, 0xB8($s0)
    ctx->pc = 0x559cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559cf4:
    // 0x559cf4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x559cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_559cf8:
    // 0x559cf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x559cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559cfc:
    // 0x559cfc: 0x0  nop
    ctx->pc = 0x559cfcu;
    // NOP
label_559d00:
    // 0x559d00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x559d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559d04:
    // 0x559d04: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_559d08:
    if (ctx->pc == 0x559D08u) {
        ctx->pc = 0x559D0Cu;
        goto label_559d0c;
    }
    ctx->pc = 0x559D04u;
    {
        const bool branch_taken_0x559d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x559d04) {
            ctx->pc = 0x559D3Cu;
            goto label_559d3c;
        }
    }
    ctx->pc = 0x559D0Cu;
label_559d0c:
    // 0x559d0c: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x559d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_559d10:
    // 0x559d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x559d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_559d14:
    // 0x559d14: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x559d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_559d18:
    // 0x559d18: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x559d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_559d1c:
    // 0x559d1c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x559d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_559d20:
    // 0x559d20: 0x320f809  jalr        $t9
label_559d24:
    if (ctx->pc == 0x559D24u) {
        ctx->pc = 0x559D24u;
            // 0x559d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559D28u;
        goto label_559d28;
    }
    ctx->pc = 0x559D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559D28u);
        ctx->pc = 0x559D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559D20u;
            // 0x559d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x559D28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559D28u; }
            if (ctx->pc != 0x559D28u) { return; }
        }
        }
    }
    ctx->pc = 0x559D28u;
label_559d28:
    // 0x559d28: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x559d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_559d2c:
    // 0x559d2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_559d30:
    if (ctx->pc == 0x559D30u) {
        ctx->pc = 0x559D34u;
        goto label_559d34;
    }
    ctx->pc = 0x559D2Cu;
    {
        const bool branch_taken_0x559d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x559d2c) {
            ctx->pc = 0x559D3Cu;
            goto label_559d3c;
        }
    }
    ctx->pc = 0x559D34u;
label_559d34:
    // 0x559d34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x559d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_559d38:
    // 0x559d38: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x559d38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_559d3c:
    // 0x559d3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x559d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_559d40:
    // 0x559d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x559d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_559d44:
    // 0x559d44: 0x3e00008  jr          $ra
label_559d48:
    if (ctx->pc == 0x559D48u) {
        ctx->pc = 0x559D48u;
            // 0x559d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x559D4Cu;
        goto label_559d4c;
    }
    ctx->pc = 0x559D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x559D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559D44u;
            // 0x559d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x559D4Cu;
label_559d4c:
    // 0x559d4c: 0x0  nop
    ctx->pc = 0x559d4cu;
    // NOP
}
