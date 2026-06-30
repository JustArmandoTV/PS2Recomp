#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00568CD0
// Address: 0x568cd0 - 0x568f20
void sub_00568CD0_0x568cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00568CD0_0x568cd0");
#endif

    switch (ctx->pc) {
        case 0x568cd0u: goto label_568cd0;
        case 0x568cd4u: goto label_568cd4;
        case 0x568cd8u: goto label_568cd8;
        case 0x568cdcu: goto label_568cdc;
        case 0x568ce0u: goto label_568ce0;
        case 0x568ce4u: goto label_568ce4;
        case 0x568ce8u: goto label_568ce8;
        case 0x568cecu: goto label_568cec;
        case 0x568cf0u: goto label_568cf0;
        case 0x568cf4u: goto label_568cf4;
        case 0x568cf8u: goto label_568cf8;
        case 0x568cfcu: goto label_568cfc;
        case 0x568d00u: goto label_568d00;
        case 0x568d04u: goto label_568d04;
        case 0x568d08u: goto label_568d08;
        case 0x568d0cu: goto label_568d0c;
        case 0x568d10u: goto label_568d10;
        case 0x568d14u: goto label_568d14;
        case 0x568d18u: goto label_568d18;
        case 0x568d1cu: goto label_568d1c;
        case 0x568d20u: goto label_568d20;
        case 0x568d24u: goto label_568d24;
        case 0x568d28u: goto label_568d28;
        case 0x568d2cu: goto label_568d2c;
        case 0x568d30u: goto label_568d30;
        case 0x568d34u: goto label_568d34;
        case 0x568d38u: goto label_568d38;
        case 0x568d3cu: goto label_568d3c;
        case 0x568d40u: goto label_568d40;
        case 0x568d44u: goto label_568d44;
        case 0x568d48u: goto label_568d48;
        case 0x568d4cu: goto label_568d4c;
        case 0x568d50u: goto label_568d50;
        case 0x568d54u: goto label_568d54;
        case 0x568d58u: goto label_568d58;
        case 0x568d5cu: goto label_568d5c;
        case 0x568d60u: goto label_568d60;
        case 0x568d64u: goto label_568d64;
        case 0x568d68u: goto label_568d68;
        case 0x568d6cu: goto label_568d6c;
        case 0x568d70u: goto label_568d70;
        case 0x568d74u: goto label_568d74;
        case 0x568d78u: goto label_568d78;
        case 0x568d7cu: goto label_568d7c;
        case 0x568d80u: goto label_568d80;
        case 0x568d84u: goto label_568d84;
        case 0x568d88u: goto label_568d88;
        case 0x568d8cu: goto label_568d8c;
        case 0x568d90u: goto label_568d90;
        case 0x568d94u: goto label_568d94;
        case 0x568d98u: goto label_568d98;
        case 0x568d9cu: goto label_568d9c;
        case 0x568da0u: goto label_568da0;
        case 0x568da4u: goto label_568da4;
        case 0x568da8u: goto label_568da8;
        case 0x568dacu: goto label_568dac;
        case 0x568db0u: goto label_568db0;
        case 0x568db4u: goto label_568db4;
        case 0x568db8u: goto label_568db8;
        case 0x568dbcu: goto label_568dbc;
        case 0x568dc0u: goto label_568dc0;
        case 0x568dc4u: goto label_568dc4;
        case 0x568dc8u: goto label_568dc8;
        case 0x568dccu: goto label_568dcc;
        case 0x568dd0u: goto label_568dd0;
        case 0x568dd4u: goto label_568dd4;
        case 0x568dd8u: goto label_568dd8;
        case 0x568ddcu: goto label_568ddc;
        case 0x568de0u: goto label_568de0;
        case 0x568de4u: goto label_568de4;
        case 0x568de8u: goto label_568de8;
        case 0x568decu: goto label_568dec;
        case 0x568df0u: goto label_568df0;
        case 0x568df4u: goto label_568df4;
        case 0x568df8u: goto label_568df8;
        case 0x568dfcu: goto label_568dfc;
        case 0x568e00u: goto label_568e00;
        case 0x568e04u: goto label_568e04;
        case 0x568e08u: goto label_568e08;
        case 0x568e0cu: goto label_568e0c;
        case 0x568e10u: goto label_568e10;
        case 0x568e14u: goto label_568e14;
        case 0x568e18u: goto label_568e18;
        case 0x568e1cu: goto label_568e1c;
        case 0x568e20u: goto label_568e20;
        case 0x568e24u: goto label_568e24;
        case 0x568e28u: goto label_568e28;
        case 0x568e2cu: goto label_568e2c;
        case 0x568e30u: goto label_568e30;
        case 0x568e34u: goto label_568e34;
        case 0x568e38u: goto label_568e38;
        case 0x568e3cu: goto label_568e3c;
        case 0x568e40u: goto label_568e40;
        case 0x568e44u: goto label_568e44;
        case 0x568e48u: goto label_568e48;
        case 0x568e4cu: goto label_568e4c;
        case 0x568e50u: goto label_568e50;
        case 0x568e54u: goto label_568e54;
        case 0x568e58u: goto label_568e58;
        case 0x568e5cu: goto label_568e5c;
        case 0x568e60u: goto label_568e60;
        case 0x568e64u: goto label_568e64;
        case 0x568e68u: goto label_568e68;
        case 0x568e6cu: goto label_568e6c;
        case 0x568e70u: goto label_568e70;
        case 0x568e74u: goto label_568e74;
        case 0x568e78u: goto label_568e78;
        case 0x568e7cu: goto label_568e7c;
        case 0x568e80u: goto label_568e80;
        case 0x568e84u: goto label_568e84;
        case 0x568e88u: goto label_568e88;
        case 0x568e8cu: goto label_568e8c;
        case 0x568e90u: goto label_568e90;
        case 0x568e94u: goto label_568e94;
        case 0x568e98u: goto label_568e98;
        case 0x568e9cu: goto label_568e9c;
        case 0x568ea0u: goto label_568ea0;
        case 0x568ea4u: goto label_568ea4;
        case 0x568ea8u: goto label_568ea8;
        case 0x568eacu: goto label_568eac;
        case 0x568eb0u: goto label_568eb0;
        case 0x568eb4u: goto label_568eb4;
        case 0x568eb8u: goto label_568eb8;
        case 0x568ebcu: goto label_568ebc;
        case 0x568ec0u: goto label_568ec0;
        case 0x568ec4u: goto label_568ec4;
        case 0x568ec8u: goto label_568ec8;
        case 0x568eccu: goto label_568ecc;
        case 0x568ed0u: goto label_568ed0;
        case 0x568ed4u: goto label_568ed4;
        case 0x568ed8u: goto label_568ed8;
        case 0x568edcu: goto label_568edc;
        case 0x568ee0u: goto label_568ee0;
        case 0x568ee4u: goto label_568ee4;
        case 0x568ee8u: goto label_568ee8;
        case 0x568eecu: goto label_568eec;
        case 0x568ef0u: goto label_568ef0;
        case 0x568ef4u: goto label_568ef4;
        case 0x568ef8u: goto label_568ef8;
        case 0x568efcu: goto label_568efc;
        case 0x568f00u: goto label_568f00;
        case 0x568f04u: goto label_568f04;
        case 0x568f08u: goto label_568f08;
        case 0x568f0cu: goto label_568f0c;
        case 0x568f10u: goto label_568f10;
        case 0x568f14u: goto label_568f14;
        case 0x568f18u: goto label_568f18;
        case 0x568f1cu: goto label_568f1c;
        default: break;
    }

    ctx->pc = 0x568cd0u;

label_568cd0:
    // 0x568cd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x568cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_568cd4:
    // 0x568cd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x568cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_568cd8:
    // 0x568cd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x568cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_568cdc:
    // 0x568cdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x568cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_568ce0:
    // 0x568ce0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x568ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_568ce4:
    // 0x568ce4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x568ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_568ce8:
    // 0x568ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x568ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_568cec:
    // 0x568cec: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x568cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_568cf0:
    // 0x568cf0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x568cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_568cf4:
    // 0x568cf4: 0xc0f4d14  jal         func_3D3450
label_568cf8:
    if (ctx->pc == 0x568CF8u) {
        ctx->pc = 0x568CF8u;
            // 0x568cf8: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x568CFCu;
        goto label_568cfc;
    }
    ctx->pc = 0x568CF4u;
    SET_GPR_U32(ctx, 31, 0x568CFCu);
    ctx->pc = 0x568CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568CF4u;
            // 0x568cf8: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D3450u;
    if (runtime->hasFunction(0x3D3450u)) {
        auto targetFn = runtime->lookupFunction(0x3D3450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568CFCu; }
        if (ctx->pc != 0x568CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D3450_0x3d3450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568CFCu; }
        if (ctx->pc != 0x568CFCu) { return; }
    }
    ctx->pc = 0x568CFCu;
label_568cfc:
    // 0x568cfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x568cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_568d00:
    // 0x568d00: 0x92440224  lbu         $a0, 0x224($s2)
    ctx->pc = 0x568d00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 548)));
label_568d04:
    // 0x568d04: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x568d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_568d08:
    // 0x568d08: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x568d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568d0c:
    // 0x568d0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x568d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_568d10:
    // 0x568d10: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x568d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_568d14:
    // 0x568d14: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x568d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_568d18:
    // 0x568d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x568d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_568d1c:
    // 0x568d1c: 0x0  nop
    ctx->pc = 0x568d1cu;
    // NOP
label_568d20:
    // 0x568d20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x568d20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_568d24:
    // 0x568d24: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x568d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_568d28:
    // 0x568d28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_568d2c:
    if (ctx->pc == 0x568D2Cu) {
        ctx->pc = 0x568D2Cu;
            // 0x568d2c: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x568D30u;
        goto label_568d30;
    }
    ctx->pc = 0x568D28u;
    {
        const bool branch_taken_0x568d28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x568D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568D28u;
            // 0x568d2c: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568d28) {
            ctx->pc = 0x568D40u;
            goto label_568d40;
        }
    }
    ctx->pc = 0x568D30u;
label_568d30:
    // 0x568d30: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x568d30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_568d34:
    // 0x568d34: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x568d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_568d38:
    // 0x568d38: 0x10000008  b           . + 4 + (0x8 << 2)
label_568d3c:
    if (ctx->pc == 0x568D3Cu) {
        ctx->pc = 0x568D3Cu;
            // 0x568d3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568D40u;
        goto label_568d40;
    }
    ctx->pc = 0x568D38u;
    {
        const bool branch_taken_0x568d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x568D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568D38u;
            // 0x568d3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568d38) {
            ctx->pc = 0x568D5Cu;
            goto label_568d5c;
        }
    }
    ctx->pc = 0x568D40u;
label_568d40:
    // 0x568d40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x568d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_568d44:
    // 0x568d44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x568d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_568d48:
    // 0x568d48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x568d48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_568d4c:
    // 0x568d4c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x568d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_568d50:
    // 0x568d50: 0x0  nop
    ctx->pc = 0x568d50u;
    // NOP
label_568d54:
    // 0x568d54: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x568d54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_568d58:
    // 0x568d58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x568d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_568d5c:
    // 0x568d5c: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x568d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_568d60:
    // 0x568d60: 0xc0b89e4  jal         func_2E2790
label_568d64:
    if (ctx->pc == 0x568D64u) {
        ctx->pc = 0x568D64u;
            // 0x568d64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x568D68u;
        goto label_568d68;
    }
    ctx->pc = 0x568D60u;
    SET_GPR_U32(ctx, 31, 0x568D68u);
    ctx->pc = 0x568D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568D60u;
            // 0x568d64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568D68u; }
        if (ctx->pc != 0x568D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568D68u; }
        if (ctx->pc != 0x568D68u) { return; }
    }
    ctx->pc = 0x568D68u;
label_568d68:
    // 0x568d68: 0xc64c0200  lwc1        $f12, 0x200($s2)
    ctx->pc = 0x568d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_568d6c:
    // 0x568d6c: 0xc64d0204  lwc1        $f13, 0x204($s2)
    ctx->pc = 0x568d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_568d70:
    // 0x568d70: 0xc64e0208  lwc1        $f14, 0x208($s2)
    ctx->pc = 0x568d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_568d74:
    // 0x568d74: 0xc04cbd8  jal         func_132F60
label_568d78:
    if (ctx->pc == 0x568D78u) {
        ctx->pc = 0x568D78u;
            // 0x568d78: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x568D7Cu;
        goto label_568d7c;
    }
    ctx->pc = 0x568D74u;
    SET_GPR_U32(ctx, 31, 0x568D7Cu);
    ctx->pc = 0x568D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568D74u;
            // 0x568d78: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568D7Cu; }
        if (ctx->pc != 0x568D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568D7Cu; }
        if (ctx->pc != 0x568D7Cu) { return; }
    }
    ctx->pc = 0x568D7Cu;
label_568d7c:
    // 0x568d7c: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x568d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_568d80:
    // 0x568d80: 0xc04c74c  jal         func_131D30
label_568d84:
    if (ctx->pc == 0x568D84u) {
        ctx->pc = 0x568D84u;
            // 0x568d84: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->pc = 0x568D88u;
        goto label_568d88;
    }
    ctx->pc = 0x568D80u;
    SET_GPR_U32(ctx, 31, 0x568D88u);
    ctx->pc = 0x568D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568D80u;
            // 0x568d84: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568D88u; }
        if (ctx->pc != 0x568D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568D88u; }
        if (ctx->pc != 0x568D88u) { return; }
    }
    ctx->pc = 0x568D88u;
label_568d88:
    // 0x568d88: 0x26440190  addiu       $a0, $s2, 0x190
    ctx->pc = 0x568d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
label_568d8c:
    // 0x568d8c: 0xc04c74c  jal         func_131D30
label_568d90:
    if (ctx->pc == 0x568D90u) {
        ctx->pc = 0x568D90u;
            // 0x568d90: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->pc = 0x568D94u;
        goto label_568d94;
    }
    ctx->pc = 0x568D8Cu;
    SET_GPR_U32(ctx, 31, 0x568D94u);
    ctx->pc = 0x568D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568D8Cu;
            // 0x568d90: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568D94u; }
        if (ctx->pc != 0x568D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568D94u; }
        if (ctx->pc != 0x568D94u) { return; }
    }
    ctx->pc = 0x568D94u;
label_568d94:
    // 0x568d94: 0xae4001b0  sw          $zero, 0x1B0($s2)
    ctx->pc = 0x568d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 0));
label_568d98:
    // 0x568d98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x568d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_568d9c:
    // 0x568d9c: 0xae4201b4  sw          $v0, 0x1B4($s2)
    ctx->pc = 0x568d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 2));
label_568da0:
    // 0x568da0: 0x264401a0  addiu       $a0, $s2, 0x1A0
    ctx->pc = 0x568da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_568da4:
    // 0x568da4: 0xc04c74c  jal         func_131D30
label_568da8:
    if (ctx->pc == 0x568DA8u) {
        ctx->pc = 0x568DA8u;
            // 0x568da8: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->pc = 0x568DACu;
        goto label_568dac;
    }
    ctx->pc = 0x568DA4u;
    SET_GPR_U32(ctx, 31, 0x568DACu);
    ctx->pc = 0x568DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568DA4u;
            // 0x568da8: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568DACu; }
        if (ctx->pc != 0x568DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568DACu; }
        if (ctx->pc != 0x568DACu) { return; }
    }
    ctx->pc = 0x568DACu;
label_568dac:
    // 0x568dac: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x568dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_568db0:
    // 0x568db0: 0xc04c720  jal         func_131C80
label_568db4:
    if (ctx->pc == 0x568DB4u) {
        ctx->pc = 0x568DB4u;
            // 0x568db4: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->pc = 0x568DB8u;
        goto label_568db8;
    }
    ctx->pc = 0x568DB0u;
    SET_GPR_U32(ctx, 31, 0x568DB8u);
    ctx->pc = 0x568DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568DB0u;
            // 0x568db4: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568DB8u; }
        if (ctx->pc != 0x568DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568DB8u; }
        if (ctx->pc != 0x568DB8u) { return; }
    }
    ctx->pc = 0x568DB8u;
label_568db8:
    // 0x568db8: 0xae40023c  sw          $zero, 0x23C($s2)
    ctx->pc = 0x568db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 572), GPR_U32(ctx, 0));
label_568dbc:
    // 0x568dbc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x568dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_568dc0:
    // 0x568dc0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x568dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_568dc4:
    // 0x568dc4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x568dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_568dc8:
    // 0x568dc8: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x568dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_568dcc:
    // 0x568dcc: 0x8e510080  lw          $s1, 0x80($s2)
    ctx->pc = 0x568dccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_568dd0:
    // 0x568dd0: 0xc088b74  jal         func_222DD0
label_568dd4:
    if (ctx->pc == 0x568DD4u) {
        ctx->pc = 0x568DD4u;
            // 0x568dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568DD8u;
        goto label_568dd8;
    }
    ctx->pc = 0x568DD0u;
    SET_GPR_U32(ctx, 31, 0x568DD8u);
    ctx->pc = 0x568DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568DD0u;
            // 0x568dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568DD8u; }
        if (ctx->pc != 0x568DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568DD8u; }
        if (ctx->pc != 0x568DD8u) { return; }
    }
    ctx->pc = 0x568DD8u;
label_568dd8:
    // 0x568dd8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x568dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_568ddc:
    // 0x568ddc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x568ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_568de0:
    // 0x568de0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x568de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_568de4:
    // 0x568de4: 0x320f809  jalr        $t9
label_568de8:
    if (ctx->pc == 0x568DE8u) {
        ctx->pc = 0x568DE8u;
            // 0x568de8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x568DECu;
        goto label_568dec;
    }
    ctx->pc = 0x568DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x568DECu);
        ctx->pc = 0x568DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568DE4u;
            // 0x568de8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x568DECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x568DECu; }
            if (ctx->pc != 0x568DECu) { return; }
        }
        }
    }
    ctx->pc = 0x568DECu;
label_568dec:
    // 0x568dec: 0x8e510080  lw          $s1, 0x80($s2)
    ctx->pc = 0x568decu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_568df0:
    // 0x568df0: 0xc088b74  jal         func_222DD0
label_568df4:
    if (ctx->pc == 0x568DF4u) {
        ctx->pc = 0x568DF4u;
            // 0x568df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568DF8u;
        goto label_568df8;
    }
    ctx->pc = 0x568DF0u;
    SET_GPR_U32(ctx, 31, 0x568DF8u);
    ctx->pc = 0x568DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568DF0u;
            // 0x568df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568DF8u; }
        if (ctx->pc != 0x568DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568DF8u; }
        if (ctx->pc != 0x568DF8u) { return; }
    }
    ctx->pc = 0x568DF8u;
label_568df8:
    // 0x568df8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x568df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_568dfc:
    // 0x568dfc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x568dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_568e00:
    // 0x568e00: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x568e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_568e04:
    // 0x568e04: 0x320f809  jalr        $t9
label_568e08:
    if (ctx->pc == 0x568E08u) {
        ctx->pc = 0x568E08u;
            // 0x568e08: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x568E0Cu;
        goto label_568e0c;
    }
    ctx->pc = 0x568E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x568E0Cu);
        ctx->pc = 0x568E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568E04u;
            // 0x568e08: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x568E0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x568E0Cu; }
            if (ctx->pc != 0x568E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x568E0Cu;
label_568e0c:
    // 0x568e0c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x568e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_568e10:
    // 0x568e10: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x568e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_568e14:
    // 0x568e14: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x568e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_568e18:
    // 0x568e18: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x568e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_568e1c:
    // 0x568e1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x568e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_568e20:
    // 0x568e20: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x568e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
label_568e24:
    // 0x568e24: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x568e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_568e28:
    // 0x568e28: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x568e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_568e2c:
    // 0x568e2c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x568e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_568e30:
    // 0x568e30: 0xac440154  sw          $a0, 0x154($v0)
    ctx->pc = 0x568e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 4));
label_568e34:
    // 0x568e34: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x568e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_568e38:
    // 0x568e38: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x568e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_568e3c:
    // 0x568e3c: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x568e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_568e40:
    // 0x568e40: 0xc08914c  jal         func_224530
label_568e44:
    if (ctx->pc == 0x568E44u) {
        ctx->pc = 0x568E44u;
            // 0x568e44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568E48u;
        goto label_568e48;
    }
    ctx->pc = 0x568E40u;
    SET_GPR_U32(ctx, 31, 0x568E48u);
    ctx->pc = 0x568E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568E40u;
            // 0x568e44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568E48u; }
        if (ctx->pc != 0x568E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568E48u; }
        if (ctx->pc != 0x568E48u) { return; }
    }
    ctx->pc = 0x568E48u;
label_568e48:
    // 0x568e48: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x568e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_568e4c:
    // 0x568e4c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x568e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_568e50:
    // 0x568e50: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x568e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_568e54:
    // 0x568e54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x568e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_568e58:
    // 0x568e58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x568e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568e5c:
    // 0x568e5c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x568e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_568e60:
    // 0x568e60: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x568e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_568e64:
    // 0x568e64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x568e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_568e68:
    // 0x568e68: 0xc08bff0  jal         func_22FFC0
label_568e6c:
    if (ctx->pc == 0x568E6Cu) {
        ctx->pc = 0x568E6Cu;
            // 0x568e6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568E70u;
        goto label_568e70;
    }
    ctx->pc = 0x568E68u;
    SET_GPR_U32(ctx, 31, 0x568E70u);
    ctx->pc = 0x568E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568E68u;
            // 0x568e6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568E70u; }
        if (ctx->pc != 0x568E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568E70u; }
        if (ctx->pc != 0x568E70u) { return; }
    }
    ctx->pc = 0x568E70u;
label_568e70:
    // 0x568e70: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x568e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_568e74:
    // 0x568e74: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x568e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_568e78:
    // 0x568e78: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x568e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568e7c:
    // 0x568e7c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x568e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_568e80:
    // 0x568e80: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x568e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_568e84:
    // 0x568e84: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x568e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_568e88:
    // 0x568e88: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x568e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_568e8c:
    // 0x568e8c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x568e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_568e90:
    // 0x568e90: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x568e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_568e94:
    // 0x568e94: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x568e94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_568e98:
    // 0x568e98: 0xc643005c  lwc1        $f3, 0x5C($s2)
    ctx->pc = 0x568e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_568e9c:
    // 0x568e9c: 0xc6420058  lwc1        $f2, 0x58($s2)
    ctx->pc = 0x568e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_568ea0:
    // 0x568ea0: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x568ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568ea4:
    // 0x568ea4: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x568ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_568ea8:
    // 0x568ea8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x568ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_568eac:
    // 0x568eac: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x568eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_568eb0:
    // 0x568eb0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x568eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_568eb4:
    // 0x568eb4: 0xc0892b0  jal         func_224AC0
label_568eb8:
    if (ctx->pc == 0x568EB8u) {
        ctx->pc = 0x568EB8u;
            // 0x568eb8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x568EBCu;
        goto label_568ebc;
    }
    ctx->pc = 0x568EB4u;
    SET_GPR_U32(ctx, 31, 0x568EBCu);
    ctx->pc = 0x568EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568EB4u;
            // 0x568eb8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568EBCu; }
        if (ctx->pc != 0x568EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568EBCu; }
        if (ctx->pc != 0x568EBCu) { return; }
    }
    ctx->pc = 0x568EBCu;
label_568ebc:
    // 0x568ebc: 0xa2400244  sb          $zero, 0x244($s2)
    ctx->pc = 0x568ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 580), (uint8_t)GPR_U32(ctx, 0));
label_568ec0:
    // 0x568ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x568ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_568ec4:
    // 0x568ec4: 0xa2450245  sb          $a1, 0x245($s2)
    ctx->pc = 0x568ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 581), (uint8_t)GPR_U32(ctx, 5));
label_568ec8:
    // 0x568ec8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x568ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_568ecc:
    // 0x568ecc: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x568eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_568ed0:
    // 0x568ed0: 0xa2400246  sb          $zero, 0x246($s2)
    ctx->pc = 0x568ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 582), (uint8_t)GPR_U32(ctx, 0));
label_568ed4:
    // 0x568ed4: 0xa244007c  sb          $a0, 0x7C($s2)
    ctx->pc = 0x568ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 4));
label_568ed8:
    // 0x568ed8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x568ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_568edc:
    // 0x568edc: 0x86040020  lh          $a0, 0x20($s0)
    ctx->pc = 0x568edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_568ee0:
    // 0x568ee0: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x568ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_568ee4:
    // 0x568ee4: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x568ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_568ee8:
    // 0x568ee8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x568ee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_568eec:
    // 0x568eec: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x568eecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_568ef0:
    // 0x568ef0: 0x0  nop
    ctx->pc = 0x568ef0u;
    // NOP
label_568ef4:
    // 0x568ef4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x568ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_568ef8:
    // 0x568ef8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x568ef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_568efc:
    // 0x568efc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x568efcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_568f00:
    // 0x568f00: 0xe6400230  swc1        $f0, 0x230($s2)
    ctx->pc = 0x568f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 560), bits); }
label_568f04:
    // 0x568f04: 0xae450110  sw          $a1, 0x110($s2)
    ctx->pc = 0x568f04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 5));
label_568f08:
    // 0x568f08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x568f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_568f0c:
    // 0x568f0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x568f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_568f10:
    // 0x568f10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x568f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_568f14:
    // 0x568f14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x568f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_568f18:
    // 0x568f18: 0x3e00008  jr          $ra
label_568f1c:
    if (ctx->pc == 0x568F1Cu) {
        ctx->pc = 0x568F1Cu;
            // 0x568f1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x568F20u;
        goto label_fallthrough_0x568f18;
    }
    ctx->pc = 0x568F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x568F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568F18u;
            // 0x568f1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x568f18:
    ctx->pc = 0x568F20u;
}
