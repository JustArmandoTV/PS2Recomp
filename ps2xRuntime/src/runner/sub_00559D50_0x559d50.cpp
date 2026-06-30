#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00559D50
// Address: 0x559d50 - 0x559f00
void sub_00559D50_0x559d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00559D50_0x559d50");
#endif

    switch (ctx->pc) {
        case 0x559d50u: goto label_559d50;
        case 0x559d54u: goto label_559d54;
        case 0x559d58u: goto label_559d58;
        case 0x559d5cu: goto label_559d5c;
        case 0x559d60u: goto label_559d60;
        case 0x559d64u: goto label_559d64;
        case 0x559d68u: goto label_559d68;
        case 0x559d6cu: goto label_559d6c;
        case 0x559d70u: goto label_559d70;
        case 0x559d74u: goto label_559d74;
        case 0x559d78u: goto label_559d78;
        case 0x559d7cu: goto label_559d7c;
        case 0x559d80u: goto label_559d80;
        case 0x559d84u: goto label_559d84;
        case 0x559d88u: goto label_559d88;
        case 0x559d8cu: goto label_559d8c;
        case 0x559d90u: goto label_559d90;
        case 0x559d94u: goto label_559d94;
        case 0x559d98u: goto label_559d98;
        case 0x559d9cu: goto label_559d9c;
        case 0x559da0u: goto label_559da0;
        case 0x559da4u: goto label_559da4;
        case 0x559da8u: goto label_559da8;
        case 0x559dacu: goto label_559dac;
        case 0x559db0u: goto label_559db0;
        case 0x559db4u: goto label_559db4;
        case 0x559db8u: goto label_559db8;
        case 0x559dbcu: goto label_559dbc;
        case 0x559dc0u: goto label_559dc0;
        case 0x559dc4u: goto label_559dc4;
        case 0x559dc8u: goto label_559dc8;
        case 0x559dccu: goto label_559dcc;
        case 0x559dd0u: goto label_559dd0;
        case 0x559dd4u: goto label_559dd4;
        case 0x559dd8u: goto label_559dd8;
        case 0x559ddcu: goto label_559ddc;
        case 0x559de0u: goto label_559de0;
        case 0x559de4u: goto label_559de4;
        case 0x559de8u: goto label_559de8;
        case 0x559decu: goto label_559dec;
        case 0x559df0u: goto label_559df0;
        case 0x559df4u: goto label_559df4;
        case 0x559df8u: goto label_559df8;
        case 0x559dfcu: goto label_559dfc;
        case 0x559e00u: goto label_559e00;
        case 0x559e04u: goto label_559e04;
        case 0x559e08u: goto label_559e08;
        case 0x559e0cu: goto label_559e0c;
        case 0x559e10u: goto label_559e10;
        case 0x559e14u: goto label_559e14;
        case 0x559e18u: goto label_559e18;
        case 0x559e1cu: goto label_559e1c;
        case 0x559e20u: goto label_559e20;
        case 0x559e24u: goto label_559e24;
        case 0x559e28u: goto label_559e28;
        case 0x559e2cu: goto label_559e2c;
        case 0x559e30u: goto label_559e30;
        case 0x559e34u: goto label_559e34;
        case 0x559e38u: goto label_559e38;
        case 0x559e3cu: goto label_559e3c;
        case 0x559e40u: goto label_559e40;
        case 0x559e44u: goto label_559e44;
        case 0x559e48u: goto label_559e48;
        case 0x559e4cu: goto label_559e4c;
        case 0x559e50u: goto label_559e50;
        case 0x559e54u: goto label_559e54;
        case 0x559e58u: goto label_559e58;
        case 0x559e5cu: goto label_559e5c;
        case 0x559e60u: goto label_559e60;
        case 0x559e64u: goto label_559e64;
        case 0x559e68u: goto label_559e68;
        case 0x559e6cu: goto label_559e6c;
        case 0x559e70u: goto label_559e70;
        case 0x559e74u: goto label_559e74;
        case 0x559e78u: goto label_559e78;
        case 0x559e7cu: goto label_559e7c;
        case 0x559e80u: goto label_559e80;
        case 0x559e84u: goto label_559e84;
        case 0x559e88u: goto label_559e88;
        case 0x559e8cu: goto label_559e8c;
        case 0x559e90u: goto label_559e90;
        case 0x559e94u: goto label_559e94;
        case 0x559e98u: goto label_559e98;
        case 0x559e9cu: goto label_559e9c;
        case 0x559ea0u: goto label_559ea0;
        case 0x559ea4u: goto label_559ea4;
        case 0x559ea8u: goto label_559ea8;
        case 0x559eacu: goto label_559eac;
        case 0x559eb0u: goto label_559eb0;
        case 0x559eb4u: goto label_559eb4;
        case 0x559eb8u: goto label_559eb8;
        case 0x559ebcu: goto label_559ebc;
        case 0x559ec0u: goto label_559ec0;
        case 0x559ec4u: goto label_559ec4;
        case 0x559ec8u: goto label_559ec8;
        case 0x559eccu: goto label_559ecc;
        case 0x559ed0u: goto label_559ed0;
        case 0x559ed4u: goto label_559ed4;
        case 0x559ed8u: goto label_559ed8;
        case 0x559edcu: goto label_559edc;
        case 0x559ee0u: goto label_559ee0;
        case 0x559ee4u: goto label_559ee4;
        case 0x559ee8u: goto label_559ee8;
        case 0x559eecu: goto label_559eec;
        case 0x559ef0u: goto label_559ef0;
        case 0x559ef4u: goto label_559ef4;
        case 0x559ef8u: goto label_559ef8;
        case 0x559efcu: goto label_559efc;
        default: break;
    }

    ctx->pc = 0x559d50u;

label_559d50:
    // 0x559d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x559d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_559d54:
    // 0x559d54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x559d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_559d58:
    // 0x559d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x559d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_559d5c:
    // 0x559d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x559d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_559d60:
    // 0x559d60: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x559d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_559d64:
    // 0x559d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x559d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_559d68:
    // 0x559d68: 0x8c840098  lw          $a0, 0x98($a0)
    ctx->pc = 0x559d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_559d6c:
    // 0x559d6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x559d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_559d70:
    // 0x559d70: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
label_559d74:
    if (ctx->pc == 0x559D74u) {
        ctx->pc = 0x559D74u;
            // 0x559d74: 0xc4a40018  lwc1        $f4, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x559D78u;
        goto label_559d78;
    }
    ctx->pc = 0x559D70u;
    {
        const bool branch_taken_0x559d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x559D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559D70u;
            // 0x559d74: 0xc4a40018  lwc1        $f4, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x559d70) {
            ctx->pc = 0x559E60u;
            goto label_559e60;
        }
    }
    ctx->pc = 0x559D78u;
label_559d78:
    // 0x559d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x559d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_559d7c:
    // 0x559d7c: 0x50830024  beql        $a0, $v1, . + 4 + (0x24 << 2)
label_559d80:
    if (ctx->pc == 0x559D80u) {
        ctx->pc = 0x559D80u;
            // 0x559d80: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->pc = 0x559D84u;
        goto label_559d84;
    }
    ctx->pc = 0x559D7Cu;
    {
        const bool branch_taken_0x559d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x559d7c) {
            ctx->pc = 0x559D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559D7Cu;
            // 0x559d80: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x559E10u;
            goto label_559e10;
        }
    }
    ctx->pc = 0x559D84u;
label_559d84:
    // 0x559d84: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_559d88:
    if (ctx->pc == 0x559D88u) {
        ctx->pc = 0x559D88u;
            // 0x559d88: 0xc60100bc  lwc1        $f1, 0xBC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x559D8Cu;
        goto label_559d8c;
    }
    ctx->pc = 0x559D84u;
    {
        const bool branch_taken_0x559d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x559d84) {
            ctx->pc = 0x559D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559D84u;
            // 0x559d88: 0xc60100bc  lwc1        $f1, 0xBC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x559D94u;
            goto label_559d94;
        }
    }
    ctx->pc = 0x559D8Cu;
label_559d8c:
    // 0x559d8c: 0x10000057  b           . + 4 + (0x57 << 2)
label_559d90:
    if (ctx->pc == 0x559D90u) {
        ctx->pc = 0x559D90u;
            // 0x559d90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x559D94u;
        goto label_559d94;
    }
    ctx->pc = 0x559D8Cu;
    {
        const bool branch_taken_0x559d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559D8Cu;
            // 0x559d90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559d8c) {
            ctx->pc = 0x559EECu;
            goto label_559eec;
        }
    }
    ctx->pc = 0x559D94u;
label_559d94:
    // 0x559d94: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x559d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_559d98:
    // 0x559d98: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x559d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559d9c:
    // 0x559d9c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x559d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_559da0:
    // 0x559da0: 0x0  nop
    ctx->pc = 0x559da0u;
    // NOP
label_559da4:
    // 0x559da4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x559da4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_559da8:
    // 0x559da8: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x559da8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_559dac:
    // 0x559dac: 0xe60100bc  swc1        $f1, 0xBC($s0)
    ctx->pc = 0x559dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_559db0:
    // 0x559db0: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x559db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559db4:
    // 0x559db4: 0xc60200b0  lwc1        $f2, 0xB0($s0)
    ctx->pc = 0x559db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559db8:
    // 0x559db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x559db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559dbc:
    // 0x559dbc: 0x0  nop
    ctx->pc = 0x559dbcu;
    // NOP
label_559dc0:
    // 0x559dc0: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x559dc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_559dc4:
    // 0x559dc4: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x559dc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_559dc8:
    // 0x559dc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x559dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559dcc:
    // 0x559dcc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_559dd0:
    if (ctx->pc == 0x559DD0u) {
        ctx->pc = 0x559DD0u;
            // 0x559dd0: 0xe60100ac  swc1        $f1, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->pc = 0x559DD4u;
        goto label_559dd4;
    }
    ctx->pc = 0x559DCCu;
    {
        const bool branch_taken_0x559dcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x559DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559DCCu;
            // 0x559dd0: 0xe60100ac  swc1        $f1, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x559dcc) {
            ctx->pc = 0x559DD8u;
            goto label_559dd8;
        }
    }
    ctx->pc = 0x559DD4u;
label_559dd4:
    // 0x559dd4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x559dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_559dd8:
    // 0x559dd8: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x559dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559ddc:
    // 0x559ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x559ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559de0:
    // 0x559de0: 0x0  nop
    ctx->pc = 0x559de0u;
    // NOP
label_559de4:
    // 0x559de4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x559de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559de8:
    // 0x559de8: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_559dec:
    if (ctx->pc == 0x559DECu) {
        ctx->pc = 0x559DF0u;
        goto label_559df0;
    }
    ctx->pc = 0x559DE8u;
    {
        const bool branch_taken_0x559de8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x559de8) {
            ctx->pc = 0x559EE8u;
            goto label_559ee8;
        }
    }
    ctx->pc = 0x559DF0u;
label_559df0:
    // 0x559df0: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x559df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_559df4:
    // 0x559df4: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x559df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_559df8:
    // 0x559df8: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x559df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
label_559dfc:
    // 0x559dfc: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x559dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_559e00:
    // 0x559e00: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x559e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_559e04:
    // 0x559e04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x559e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_559e08:
    // 0x559e08: 0x10000037  b           . + 4 + (0x37 << 2)
label_559e0c:
    if (ctx->pc == 0x559E0Cu) {
        ctx->pc = 0x559E0Cu;
            // 0x559e0c: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->pc = 0x559E10u;
        goto label_559e10;
    }
    ctx->pc = 0x559E08u;
    {
        const bool branch_taken_0x559e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559E08u;
            // 0x559e0c: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559e08) {
            ctx->pc = 0x559EE8u;
            goto label_559ee8;
        }
    }
    ctx->pc = 0x559E10u;
label_559e10:
    // 0x559e10: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x559e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_559e14:
    // 0x559e14: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x559e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_559e18:
    // 0x559e18: 0x8c63f2f8  lw          $v1, -0xD08($v1)
    ctx->pc = 0x559e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963960)));
label_559e1c:
    // 0x559e1c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x559e1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_559e20:
    // 0x559e20: 0x0  nop
    ctx->pc = 0x559e20u;
    // NOP
label_559e24:
    // 0x559e24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x559e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_559e28:
    // 0x559e28: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x559e28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_559e2c:
    // 0x559e2c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
label_559e30:
    if (ctx->pc == 0x559E30u) {
        ctx->pc = 0x559E30u;
            // 0x559e30: 0xae0400c4  sw          $a0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
        ctx->pc = 0x559E34u;
        goto label_559e34;
    }
    ctx->pc = 0x559E2Cu;
    {
        const bool branch_taken_0x559e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x559E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559E2Cu;
            // 0x559e30: 0xae0400c4  sw          $a0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559e2c) {
            ctx->pc = 0x559EE8u;
            goto label_559ee8;
        }
    }
    ctx->pc = 0x559E34u;
label_559e34:
    // 0x559e34: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x559e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_559e38:
    // 0x559e38: 0x3c033d08  lui         $v1, 0x3D08
    ctx->pc = 0x559e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15624 << 16));
label_559e3c:
    // 0x559e3c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x559e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_559e40:
    // 0x559e40: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x559e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_559e44:
    // 0x559e44: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x559e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_559e48:
    // 0x559e48: 0x3c034108  lui         $v1, 0x4108
    ctx->pc = 0x559e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16648 << 16));
label_559e4c:
    // 0x559e4c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x559e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_559e50:
    // 0x559e50: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x559e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_559e54:
    // 0x559e54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x559e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_559e58:
    // 0x559e58: 0x10000023  b           . + 4 + (0x23 << 2)
label_559e5c:
    if (ctx->pc == 0x559E5Cu) {
        ctx->pc = 0x559E5Cu;
            // 0x559e5c: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->pc = 0x559E60u;
        goto label_559e60;
    }
    ctx->pc = 0x559E58u;
    {
        const bool branch_taken_0x559e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559E58u;
            // 0x559e5c: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559e58) {
            ctx->pc = 0x559EE8u;
            goto label_559ee8;
        }
    }
    ctx->pc = 0x559E60u;
label_559e60:
    // 0x559e60: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x559e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_559e64:
    // 0x559e64: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x559e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559e68:
    // 0x559e68: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x559e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_559e6c:
    // 0x559e6c: 0x0  nop
    ctx->pc = 0x559e6cu;
    // NOP
label_559e70:
    // 0x559e70: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x559e70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_559e74:
    // 0x559e74: 0x4604081d  msub.s      $f0, $f1, $f4
    ctx->pc = 0x559e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_559e78:
    // 0x559e78: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x559e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_559e7c:
    // 0x559e7c: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x559e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_559e80:
    // 0x559e80: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x559e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559e84:
    // 0x559e84: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x559e84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_559e88:
    // 0x559e88: 0x4604081d  msub.s      $f0, $f1, $f4
    ctx->pc = 0x559e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_559e8c:
    // 0x559e8c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x559e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559e90:
    // 0x559e90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_559e94:
    if (ctx->pc == 0x559E94u) {
        ctx->pc = 0x559E94u;
            // 0x559e94: 0xe60000ac  swc1        $f0, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->pc = 0x559E98u;
        goto label_559e98;
    }
    ctx->pc = 0x559E90u;
    {
        const bool branch_taken_0x559e90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x559E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559E90u;
            // 0x559e94: 0xe60000ac  swc1        $f0, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x559e90) {
            ctx->pc = 0x559E9Cu;
            goto label_559e9c;
        }
    }
    ctx->pc = 0x559E98u;
label_559e98:
    // 0x559e98: 0xe60200ac  swc1        $f2, 0xAC($s0)
    ctx->pc = 0x559e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_559e9c:
    // 0x559e9c: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x559e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559ea0:
    // 0x559ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x559ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559ea4:
    // 0x559ea4: 0x0  nop
    ctx->pc = 0x559ea4u;
    // NOP
label_559ea8:
    // 0x559ea8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x559ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559eac:
    // 0x559eac: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_559eb0:
    if (ctx->pc == 0x559EB0u) {
        ctx->pc = 0x559EB4u;
        goto label_559eb4;
    }
    ctx->pc = 0x559EACu;
    {
        const bool branch_taken_0x559eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x559eac) {
            ctx->pc = 0x559EE8u;
            goto label_559ee8;
        }
    }
    ctx->pc = 0x559EB4u;
label_559eb4:
    // 0x559eb4: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x559eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_559eb8:
    // 0x559eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x559eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_559ebc:
    // 0x559ebc: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x559ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_559ec0:
    // 0x559ec0: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x559ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_559ec4:
    // 0x559ec4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x559ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_559ec8:
    // 0x559ec8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x559ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_559ecc:
    // 0x559ecc: 0x320f809  jalr        $t9
label_559ed0:
    if (ctx->pc == 0x559ED0u) {
        ctx->pc = 0x559ED0u;
            // 0x559ed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559ED4u;
        goto label_559ed4;
    }
    ctx->pc = 0x559ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559ED4u);
        ctx->pc = 0x559ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559ECCu;
            // 0x559ed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x559ED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559ED4u; }
            if (ctx->pc != 0x559ED4u) { return; }
        }
        }
    }
    ctx->pc = 0x559ED4u;
label_559ed4:
    // 0x559ed4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x559ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_559ed8:
    // 0x559ed8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_559edc:
    if (ctx->pc == 0x559EDCu) {
        ctx->pc = 0x559EE0u;
        goto label_559ee0;
    }
    ctx->pc = 0x559ED8u;
    {
        const bool branch_taken_0x559ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x559ed8) {
            ctx->pc = 0x559EE8u;
            goto label_559ee8;
        }
    }
    ctx->pc = 0x559EE0u;
label_559ee0:
    // 0x559ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x559ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_559ee4:
    // 0x559ee4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x559ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_559ee8:
    // 0x559ee8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x559ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_559eec:
    // 0x559eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x559eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_559ef0:
    // 0x559ef0: 0x3e00008  jr          $ra
label_559ef4:
    if (ctx->pc == 0x559EF4u) {
        ctx->pc = 0x559EF4u;
            // 0x559ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x559EF8u;
        goto label_559ef8;
    }
    ctx->pc = 0x559EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x559EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559EF0u;
            // 0x559ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x559EF8u;
label_559ef8:
    // 0x559ef8: 0x0  nop
    ctx->pc = 0x559ef8u;
    // NOP
label_559efc:
    // 0x559efc: 0x0  nop
    ctx->pc = 0x559efcu;
    // NOP
}
