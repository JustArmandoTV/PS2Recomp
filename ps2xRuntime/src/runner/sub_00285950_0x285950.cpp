#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285950
// Address: 0x285950 - 0x285ef0
void sub_00285950_0x285950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285950_0x285950");
#endif

    switch (ctx->pc) {
        case 0x2859b0u: goto label_2859b0;
        case 0x285a10u: goto label_285a10;
        case 0x285a20u: goto label_285a20;
        case 0x285a40u: goto label_285a40;
        case 0x285a5cu: goto label_285a5c;
        case 0x285a74u: goto label_285a74;
        case 0x285a78u: goto label_285a78;
        case 0x285a98u: goto label_285a98;
        case 0x285ab4u: goto label_285ab4;
        case 0x285accu: goto label_285acc;
        case 0x285af8u: goto label_285af8;
        case 0x285b18u: goto label_285b18;
        case 0x285b68u: goto label_285b68;
        case 0x285b90u: goto label_285b90;
        case 0x285c08u: goto label_285c08;
        case 0x285c30u: goto label_285c30;
        case 0x285c9cu: goto label_285c9c;
        case 0x285cb4u: goto label_285cb4;
        case 0x285d04u: goto label_285d04;
        case 0x285d54u: goto label_285d54;
        case 0x285d98u: goto label_285d98;
        case 0x285dd4u: goto label_285dd4;
        case 0x285e48u: goto label_285e48;
        case 0x285e64u: goto label_285e64;
        case 0x285e88u: goto label_285e88;
        case 0x285ec0u: goto label_285ec0;
        default: break;
    }

    ctx->pc = 0x285950u;

label_285950:
    // 0x285950: 0x27bdf720  addiu       $sp, $sp, -0x8E0
    ctx->pc = 0x285950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965024));
    // 0x285954: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x285954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x285958: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x285958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28595c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x285960: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x285964: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x285964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x285968: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x285968u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28596c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x285970: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x285970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x285974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x285978: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x285978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28597c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x285980: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x285980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x285984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285988: 0x285082a  slt         $at, $s4, $a1
    ctx->pc = 0x285988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28598c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28598cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285990: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x285990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285994: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x285994u;
    {
        const bool branch_taken_0x285994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285994u;
            // 0x285998: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285994) {
            ctx->pc = 0x2859E8u;
            goto label_2859e8;
        }
    }
    ctx->pc = 0x28599Cu;
    // 0x28599c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x28599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2859a0: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x2859a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2859a4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2859a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2859a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2859a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2859ac: 0x0  nop
    ctx->pc = 0x2859acu;
    // NOP
label_2859b0:
    // 0x2859b0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2859b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2859b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2859b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2859b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2859B8u;
    {
        const bool branch_taken_0x2859b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2859BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2859B8u;
            // 0x2859bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859b8) {
            ctx->pc = 0x2859C8u;
            goto label_2859c8;
        }
    }
    ctx->pc = 0x2859C0u;
    // 0x2859c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2859C0u;
    {
        const bool branch_taken_0x2859c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2859c0) {
            ctx->pc = 0x2859D0u;
            goto label_2859d0;
        }
    }
    ctx->pc = 0x2859C8u;
label_2859c8:
    // 0x2859c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2859c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859cc: 0x0  nop
    ctx->pc = 0x2859ccu;
    // NOP
label_2859d0:
    // 0x2859d0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2859d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2859d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2859d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2859d8: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x2859d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2859dc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2859DCu;
    {
        const bool branch_taken_0x2859dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2859E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2859DCu;
            // 0x2859e0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859dc) {
            ctx->pc = 0x2859B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2859b0;
        }
    }
    ctx->pc = 0x2859E4u;
    // 0x2859e4: 0x0  nop
    ctx->pc = 0x2859e4u;
    // NOP
label_2859e8:
    // 0x2859e8: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x2859e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2859ec: 0x142000dc  bnez        $at, . + 4 + (0xDC << 2)
    ctx->pc = 0x2859ECu;
    {
        const bool branch_taken_0x2859ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2859ec) {
            ctx->pc = 0x285D60u;
            goto label_285d60;
        }
    }
    ctx->pc = 0x2859F4u;
    // 0x2859f4: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x2859f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2859f8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2859F8u;
    {
        const bool branch_taken_0x2859f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2859FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2859F8u;
            // 0x2859fc: 0x28843  sra         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859f8) {
            ctx->pc = 0x285A08u;
            goto label_285a08;
        }
    }
    ctx->pc = 0x285A00u;
    // 0x285a00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285a04: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x285a04u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
label_285a08:
    // 0x285a08: 0xc0a2edc  jal         func_28BB70
    ctx->pc = 0x285A08u;
    SET_GPR_U32(ctx, 31, 0x285A10u);
    ctx->pc = 0x285A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285A08u;
            // 0x285a0c: 0x27a404c0  addiu       $a0, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BB70u;
    if (runtime->hasFunction(0x28BB70u)) {
        auto targetFn = runtime->lookupFunction(0x28BB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A10u; }
        if (ctx->pc != 0x285A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BB70_0x28bb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A10u; }
        if (ctx->pc != 0x285A10u) { return; }
    }
    ctx->pc = 0x285A10u;
label_285a10:
    // 0x285a10: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x285a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x285a14: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x285a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285a18: 0xc0a2edc  jal         func_28BB70
    ctx->pc = 0x285A18u;
    SET_GPR_U32(ctx, 31, 0x285A20u);
    ctx->pc = 0x285A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285A18u;
            // 0x285a1c: 0xafa204c0  sw          $v0, 0x4C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BB70u;
    if (runtime->hasFunction(0x28BB70u)) {
        auto targetFn = runtime->lookupFunction(0x28BB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A20u; }
        if (ctx->pc != 0x285A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BB70_0x28bb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A20u; }
        if (ctx->pc != 0x285A20u) { return; }
    }
    ctx->pc = 0x285A20u;
label_285a20:
    // 0x285a20: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x285a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x285a24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285a28: 0x27b704c8  addiu       $s7, $sp, 0x4C8
    ctx->pc = 0x285a28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1224));
    // 0x285a2c: 0x27b600b8  addiu       $s6, $sp, 0xB8
    ctx->pc = 0x285a2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x285a30: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x285a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x285a34: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x285A34u;
    {
        const bool branch_taken_0x285a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A34u;
            // 0x285a38: 0xa3a308dc  sb          $v1, 0x8DC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2268), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a34) {
            ctx->pc = 0x285B38u;
            goto label_285b38;
        }
    }
    ctx->pc = 0x285A3Cu;
    // 0x285a3c: 0x0  nop
    ctx->pc = 0x285a3cu;
    // NOP
label_285a40:
    // 0x285a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x285a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a48: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x285a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a4c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x285a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a50: 0x27a804c0  addiu       $t0, $sp, 0x4C0
    ctx->pc = 0x285a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x285a54: 0xc0a1654  jal         func_285950
    ctx->pc = 0x285A54u;
    SET_GPR_U32(ctx, 31, 0x285A5Cu);
    ctx->pc = 0x285A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285A54u;
            // 0x285a58: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285950u;
    goto label_285950;
    ctx->pc = 0x285A5Cu;
label_285a5c:
    // 0x285a5c: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x285a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x285a60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x285a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x285a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x285a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a6c: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x285A6Cu;
    SET_GPR_U32(ctx, 31, 0x285A74u);
    ctx->pc = 0x285A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285A6Cu;
            // 0x285a70: 0x27a808dc  addiu       $t0, $sp, 0x8DC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A74u; }
        if (ctx->pc != 0x285A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283270_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A74u; }
        if (ctx->pc != 0x285A74u) { return; }
    }
    ctx->pc = 0x285A74u;
label_285a74:
    // 0x285a74: 0x0  nop
    ctx->pc = 0x285a74u;
    // NOP
label_285a78:
    // 0x285a78: 0x83a208dc  lb          $v0, 0x8DC($sp)
    ctx->pc = 0x285a78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2268)));
    // 0x285a7c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x285A7Cu;
    {
        const bool branch_taken_0x285a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A7Cu;
            // 0x285a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a7c) {
            ctx->pc = 0x285A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285a40;
        }
    }
    ctx->pc = 0x285A84u;
    // 0x285a84: 0xa3a208dc  sb          $v0, 0x8DC($sp)
    ctx->pc = 0x285a84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2268), (uint8_t)GPR_U32(ctx, 2));
    // 0x285a88: 0x83a208dc  lb          $v0, 0x8DC($sp)
    ctx->pc = 0x285a88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2268)));
    // 0x285a8c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x285A8Cu;
    {
        const bool branch_taken_0x285a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285a8c) {
            ctx->pc = 0x285AD8u;
            goto label_285ad8;
        }
    }
    ctx->pc = 0x285A94u;
    // 0x285a94: 0x0  nop
    ctx->pc = 0x285a94u;
    // NOP
label_285a98:
    // 0x285a98: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x285a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x285a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285aa0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x285aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285aa4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x285aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285aa8: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x285aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285aac: 0xc0a1654  jal         func_285950
    ctx->pc = 0x285AACu;
    SET_GPR_U32(ctx, 31, 0x285AB4u);
    ctx->pc = 0x285AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285AACu;
            // 0x285ab0: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285950u;
    goto label_285950;
    ctx->pc = 0x285AB4u;
label_285ab4:
    // 0x285ab4: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x285ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x285ab8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x285ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285abc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x285abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ac0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x285ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ac4: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x285AC4u;
    SET_GPR_U32(ctx, 31, 0x285ACCu);
    ctx->pc = 0x285AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285AC4u;
            // 0x285ac8: 0x27a808dc  addiu       $t0, $sp, 0x8DC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285ACCu; }
        if (ctx->pc != 0x285ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283270_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285ACCu; }
        if (ctx->pc != 0x285ACCu) { return; }
    }
    ctx->pc = 0x285ACCu;
label_285acc:
    // 0x285acc: 0x83a208dc  lb          $v0, 0x8DC($sp)
    ctx->pc = 0x285accu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2268)));
    // 0x285ad0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x285AD0u;
    {
        const bool branch_taken_0x285ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285ad0) {
            ctx->pc = 0x285A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285a98;
        }
    }
    ctx->pc = 0x285AD8u;
label_285ad8:
    // 0x285ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285adc: 0xa3a208d8  sb          $v0, 0x8D8($sp)
    ctx->pc = 0x285adcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2264), (uint8_t)GPR_U32(ctx, 2));
    // 0x285ae0: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x285ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x285ae4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x285ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ae8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x285ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285aec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x285aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285af0: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x285AF0u;
    SET_GPR_U32(ctx, 31, 0x285AF8u);
    ctx->pc = 0x285AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285AF0u;
            // 0x285af4: 0x27a808d8  addiu       $t0, $sp, 0x8D8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285AF8u; }
        if (ctx->pc != 0x285AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283270_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285AF8u; }
        if (ctx->pc != 0x285AF8u) { return; }
    }
    ctx->pc = 0x285AF8u;
label_285af8:
    // 0x285af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285afc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x285afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285b00: 0xa3a208d4  sb          $v0, 0x8D4($sp)
    ctx->pc = 0x285b00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2260), (uint8_t)GPR_U32(ctx, 2));
    // 0x285b04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x285b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x285b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b0c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x285b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b10: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x285B10u;
    SET_GPR_U32(ctx, 31, 0x285B18u);
    ctx->pc = 0x285B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285B10u;
            // 0x285b14: 0x27a808d4  addiu       $t0, $sp, 0x8D4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285B18u; }
        if (ctx->pc != 0x285B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283270_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285B18u; }
        if (ctx->pc != 0x285B18u) { return; }
    }
    ctx->pc = 0x285B18u;
label_285b18:
    // 0x285b18: 0x83a308d8  lb          $v1, 0x8D8($sp)
    ctx->pc = 0x285b18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2264)));
    // 0x285b1c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x285b1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x285b20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x285B20u;
    {
        const bool branch_taken_0x285b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b20) {
            ctx->pc = 0x285B30u;
            goto label_285b30;
        }
    }
    ctx->pc = 0x285B28u;
    // 0x285b28: 0x83a308d4  lb          $v1, 0x8D4($sp)
    ctx->pc = 0x285b28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2260)));
    // 0x285b2c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x285b2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_285b30:
    // 0x285b30: 0xa3a308dc  sb          $v1, 0x8DC($sp)
    ctx->pc = 0x285b30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2268), (uint8_t)GPR_U32(ctx, 3));
    // 0x285b34: 0x0  nop
    ctx->pc = 0x285b34u;
    // NOP
label_285b38:
    // 0x285b38: 0x83a308dc  lb          $v1, 0x8DC($sp)
    ctx->pc = 0x285b38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2268)));
    // 0x285b3c: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x285B3Cu;
    {
        const bool branch_taken_0x285b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b3c) {
            ctx->pc = 0x285A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285a78;
        }
    }
    ctx->pc = 0x285B44u;
    // 0x285b44: 0x8fa404c8  lw          $a0, 0x4C8($sp)
    ctx->pc = 0x285b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x285b48: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x285B48u;
    {
        const bool branch_taken_0x285b48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b48) {
            ctx->pc = 0x285BE8u;
            goto label_285be8;
        }
    }
    ctx->pc = 0x285B50u;
    // 0x285b50: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x285b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x285b54: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x285b54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285b58: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x285B58u;
    {
        const bool branch_taken_0x285b58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285B58u;
            // 0x285b5c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b58) {
            ctx->pc = 0x285CA0u;
            goto label_285ca0;
        }
    }
    ctx->pc = 0x285B60u;
    // 0x285b60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x285b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b64: 0x27b000b4  addiu       $s0, $sp, 0xB4
    ctx->pc = 0x285b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_285b68:
    // 0x285b68: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x285b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x285b6c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x285b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285b70: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x285b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x285b74: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x285b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x285b78: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x285b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x285b7c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x285B7Cu;
    {
        const bool branch_taken_0x285b7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x285B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285B7Cu;
            // 0x285b80: 0xb19821  addu        $s3, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b7c) {
            ctx->pc = 0x285B90u;
            goto label_285b90;
        }
    }
    ctx->pc = 0x285B84u;
    // 0x285b84: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x285b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285b88: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x285B88u;
    SET_GPR_U32(ctx, 31, 0x285B90u);
    ctx->pc = 0x285B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285B88u;
            // 0x285b8c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285B90u; }
        if (ctx->pc != 0x285B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285B90u; }
        if (ctx->pc != 0x285B90u) { return; }
    }
    ctx->pc = 0x285B90u;
label_285b90:
    // 0x285b90: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x285b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x285b94: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x285b94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x285b98: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x285b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x285b9c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x285b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x285ba0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x285ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x285ba4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x285ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x285ba8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x285ba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x285bac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x285bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x285bb0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x285bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x285bb4: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x285bb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x285bb8: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x285bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x285bbc: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x285bbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x285bc0: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x285bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x285bc4: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x285bc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x285bc8: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x285bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x285bcc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x285bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x285bd0: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x285bd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285bd4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x285BD4u;
    {
        const bool branch_taken_0x285bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285BD4u;
            // 0x285bd8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285bd4) {
            ctx->pc = 0x285B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285b68;
        }
    }
    ctx->pc = 0x285BDCu;
    // 0x285bdc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x285BDCu;
    {
        const bool branch_taken_0x285bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285bdc) {
            ctx->pc = 0x285CA0u;
            goto label_285ca0;
        }
    }
    ctx->pc = 0x285BE4u;
    // 0x285be4: 0x0  nop
    ctx->pc = 0x285be4u;
    // NOP
label_285be8:
    // 0x285be8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x285be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x285bec: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x285BECu;
    {
        const bool branch_taken_0x285bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285BECu;
            // 0x285bf0: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285bec) {
            ctx->pc = 0x285C88u;
            goto label_285c88;
        }
    }
    ctx->pc = 0x285BF4u;
    // 0x285bf4: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x285BF4u;
    {
        const bool branch_taken_0x285bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285BF4u;
            // 0x285bf8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285bf4) {
            ctx->pc = 0x285CA0u;
            goto label_285ca0;
        }
    }
    ctx->pc = 0x285BFCu;
    // 0x285bfc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x285bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c00: 0x27b004c4  addiu       $s0, $sp, 0x4C4
    ctx->pc = 0x285c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
    // 0x285c04: 0x0  nop
    ctx->pc = 0x285c04u;
    // NOP
label_285c08:
    // 0x285c08: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x285c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x285c0c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x285c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285c10: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x285c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x285c14: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x285c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x285c18: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x285c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x285c1c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x285C1Cu;
    {
        const bool branch_taken_0x285c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x285C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C1Cu;
            // 0x285c20: 0xb19821  addu        $s3, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c1c) {
            ctx->pc = 0x285C30u;
            goto label_285c30;
        }
    }
    ctx->pc = 0x285C24u;
    // 0x285c24: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x285c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x285c28: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x285C28u;
    SET_GPR_U32(ctx, 31, 0x285C30u);
    ctx->pc = 0x285C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285C28u;
            // 0x285c2c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C30u; }
        if (ctx->pc != 0x285C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C30u; }
        if (ctx->pc != 0x285C30u) { return; }
    }
    ctx->pc = 0x285C30u;
label_285c30:
    // 0x285c30: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x285c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x285c34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x285c34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x285c38: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x285c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x285c3c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x285c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x285c40: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x285c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x285c44: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x285c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x285c48: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x285c48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x285c4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x285c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x285c50: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x285c50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x285c54: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x285c54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x285c58: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x285c58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x285c5c: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x285c5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x285c60: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x285c60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x285c64: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x285c64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x285c68: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x285c68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x285c6c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x285c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x285c70: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x285c70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285c74: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x285C74u;
    {
        const bool branch_taken_0x285c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C74u;
            // 0x285c78: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c74) {
            ctx->pc = 0x285C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285c08;
        }
    }
    ctx->pc = 0x285C7Cu;
    // 0x285c7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x285C7Cu;
    {
        const bool branch_taken_0x285c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285c7c) {
            ctx->pc = 0x285CA0u;
            goto label_285ca0;
        }
    }
    ctx->pc = 0x285C84u;
    // 0x285c84: 0x0  nop
    ctx->pc = 0x285c84u;
    // NOP
label_285c88:
    // 0x285c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c8c: 0x27a504c0  addiu       $a1, $sp, 0x4C0
    ctx->pc = 0x285c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x285c90: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x285c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285c94: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x285C94u;
    SET_GPR_U32(ctx, 31, 0x285C9Cu);
    ctx->pc = 0x285C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285C94u;
            // 0x285c98: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (runtime->hasFunction(0x285EF0u)) {
        auto targetFn = runtime->lookupFunction(0x285EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C9Cu; }
        if (ctx->pc != 0x285C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285EF0_0x285ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C9Cu; }
        if (ctx->pc != 0x285C9Cu) { return; }
    }
    ctx->pc = 0x285C9Cu;
label_285c9c:
    // 0x285c9c: 0x0  nop
    ctx->pc = 0x285c9cu;
    // NOP
label_285ca0:
    // 0x285ca0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x285ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x285ca4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x285CA4u;
    {
        const bool branch_taken_0x285ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285CA4u;
            // 0x285ca8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ca4) {
            ctx->pc = 0x285CB8u;
            goto label_285cb8;
        }
    }
    ctx->pc = 0x285CACu;
    // 0x285cac: 0xc0a2a88  jal         func_28AA20
    ctx->pc = 0x285CACu;
    SET_GPR_U32(ctx, 31, 0x285CB4u);
    ctx->pc = 0x285CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285CACu;
            // 0x285cb0: 0x27a504c4  addiu       $a1, $sp, 0x4C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AA20u;
    if (runtime->hasFunction(0x28AA20u)) {
        auto targetFn = runtime->lookupFunction(0x28AA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285CB4u; }
        if (ctx->pc != 0x285CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028AA20_0x28aa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285CB4u; }
        if (ctx->pc != 0x285CB4u) { return; }
    }
    ctx->pc = 0x285CB4u;
label_285cb4:
    // 0x285cb4: 0x0  nop
    ctx->pc = 0x285cb4u;
    // NOP
label_285cb8:
    // 0x285cb8: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x285cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x285cbc: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x285CBCu;
    {
        const bool branch_taken_0x285cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x285cbc) {
            ctx->pc = 0x285D08u;
            goto label_285d08;
        }
    }
    ctx->pc = 0x285CC4u;
    // 0x285cc4: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x285CC4u;
    {
        const bool branch_taken_0x285cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x285cc4) {
            ctx->pc = 0x285D08u;
            goto label_285d08;
        }
    }
    ctx->pc = 0x285CCCu;
    // 0x285ccc: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x285cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x285cd0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x285cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x285cd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285cd8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x285CD8u;
    {
        const bool branch_taken_0x285cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285cd8) {
            ctx->pc = 0x285D08u;
            goto label_285d08;
        }
    }
    ctx->pc = 0x285CE0u;
    // 0x285ce0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x285ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x285ce4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x285ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x285ce8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x285ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285cec: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x285cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x285cf0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x285cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x285cf4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x285cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x285cf8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x285cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x285cfc: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x285CFCu;
    SET_GPR_U32(ctx, 31, 0x285D04u);
    ctx->pc = 0x285D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285CFCu;
            // 0x285d00: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D04u; }
        if (ctx->pc != 0x285D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D04u; }
        if (ctx->pc != 0x285D04u) { return; }
    }
    ctx->pc = 0x285D04u;
label_285d04:
    // 0x285d04: 0x0  nop
    ctx->pc = 0x285d04u;
    // NOP
label_285d08:
    // 0x285d08: 0x27a504c4  addiu       $a1, $sp, 0x4C4
    ctx->pc = 0x285d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1220));
    // 0x285d0c: 0x10a0006c  beqz        $a1, . + 4 + (0x6C << 2)
    ctx->pc = 0x285D0Cu;
    {
        const bool branch_taken_0x285d0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x285d0c) {
            ctx->pc = 0x285EC0u;
            goto label_285ec0;
        }
    }
    ctx->pc = 0x285D14u;
    // 0x285d14: 0x10a0006a  beqz        $a1, . + 4 + (0x6A << 2)
    ctx->pc = 0x285D14u;
    {
        const bool branch_taken_0x285d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x285d14) {
            ctx->pc = 0x285EC0u;
            goto label_285ec0;
        }
    }
    ctx->pc = 0x285D1Cu;
    // 0x285d1c: 0x8fa404cc  lw          $a0, 0x4CC($sp)
    ctx->pc = 0x285d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1228)));
    // 0x285d20: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x285d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x285d24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285d28: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x285D28u;
    {
        const bool branch_taken_0x285d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285d28) {
            ctx->pc = 0x285EC0u;
            goto label_285ec0;
        }
    }
    ctx->pc = 0x285D30u;
    // 0x285d30: 0x8fa204cc  lw          $v0, 0x4CC($sp)
    ctx->pc = 0x285d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1228)));
    // 0x285d34: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x285d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x285d38: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x285d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285d3c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x285d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x285d40: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x285d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x285d44: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x285d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x285d48: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x285d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x285d4c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x285D4Cu;
    SET_GPR_U32(ctx, 31, 0x285D54u);
    ctx->pc = 0x285D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285D4Cu;
            // 0x285d50: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D54u; }
        if (ctx->pc != 0x285D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D54u; }
        if (ctx->pc != 0x285D54u) { return; }
    }
    ctx->pc = 0x285D54u;
label_285d54:
    // 0x285d54: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x285D54u;
    {
        const bool branch_taken_0x285d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285d54) {
            ctx->pc = 0x285EC0u;
            goto label_285ec0;
        }
    }
    ctx->pc = 0x285D5Cu;
    // 0x285d5c: 0x0  nop
    ctx->pc = 0x285d5cu;
    // NOP
label_285d60:
    // 0x285d60: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x285d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x285d64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x285d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x285d68: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x285d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x285d6c: 0x34640003  ori         $a0, $v1, 0x3
    ctx->pc = 0x285d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x285d70: 0x27b60094  addiu       $s6, $sp, 0x94
    ctx->pc = 0x285d70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x285d74: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x285d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x285d78: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x285d78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x285d7c: 0x283082a  slt         $at, $s4, $v1
    ctx->pc = 0x285d7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285d80: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x285d80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x285d84: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x285d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x285d88: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x285d88u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x285d8c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x285D8Cu;
    {
        const bool branch_taken_0x285d8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285D8Cu;
            // 0x285d90: 0xaee40000  sw          $a0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d8c) {
            ctx->pc = 0x285E10u;
            goto label_285e10;
        }
    }
    ctx->pc = 0x285D94u;
    // 0x285d94: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x285d94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_285d98:
    // 0x285d98: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x285d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x285d9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285da0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x285da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x285da4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x285da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285da8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x285da8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285dac: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x285DACu;
    {
        const bool branch_taken_0x285dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285dac) {
            ctx->pc = 0x285DF8u;
            goto label_285df8;
        }
    }
    ctx->pc = 0x285DB4u;
    // 0x285db4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x285db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x285db8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x285db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x285dbc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x285dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x285dc0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x285dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x285dc4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x285DC4u;
    {
        const bool branch_taken_0x285dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x285DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285DC4u;
            // 0x285dc8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dc4) {
            ctx->pc = 0x285DD8u;
            goto label_285dd8;
        }
    }
    ctx->pc = 0x285DCCu;
    // 0x285dcc: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x285DCCu;
    SET_GPR_U32(ctx, 31, 0x285DD4u);
    ctx->pc = 0x285DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285DCCu;
            // 0x285dd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DD4u; }
        if (ctx->pc != 0x285DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DD4u; }
        if (ctx->pc != 0x285DD4u) { return; }
    }
    ctx->pc = 0x285DD4u;
label_285dd4:
    // 0x285dd4: 0x0  nop
    ctx->pc = 0x285dd4u;
    // NOP
label_285dd8:
    // 0x285dd8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x285dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x285ddc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x285ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x285de0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x285de0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x285de4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x285de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x285de8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x285de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285dec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x285decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x285df0: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x285df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x285df4: 0x0  nop
    ctx->pc = 0x285df4u;
    // NOP
label_285df8:
    // 0x285df8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x285df8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x285dfc: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x285dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x285e00: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x285e00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285e04: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x285E04u;
    {
        const bool branch_taken_0x285e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285E04u;
            // 0x285e08: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e04) {
            ctx->pc = 0x285D98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285d98;
        }
    }
    ctx->pc = 0x285E0Cu;
    // 0x285e0c: 0x0  nop
    ctx->pc = 0x285e0cu;
    // NOP
label_285e10:
    // 0x285e10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x285e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285e14: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x285E14u;
    {
        const bool branch_taken_0x285e14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x285E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285E14u;
            // 0x285e18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e14) {
            ctx->pc = 0x285E50u;
            goto label_285e50;
        }
    }
    ctx->pc = 0x285E1Cu;
    // 0x285e1c: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x285E1Cu;
    {
        const bool branch_taken_0x285e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x285e1c) {
            ctx->pc = 0x285E38u;
            goto label_285e38;
        }
    }
    ctx->pc = 0x285E24u;
    // 0x285e24: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x285E24u;
    {
        const bool branch_taken_0x285e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e24) {
            ctx->pc = 0x285E88u;
            goto label_285e88;
        }
    }
    ctx->pc = 0x285E2Cu;
    // 0x285e2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x285E2Cu;
    {
        const bool branch_taken_0x285e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e2c) {
            ctx->pc = 0x285E70u;
            goto label_285e70;
        }
    }
    ctx->pc = 0x285E34u;
    // 0x285e34: 0x0  nop
    ctx->pc = 0x285e34u;
    // NOP
label_285e38:
    // 0x285e38: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x285e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285e3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x285e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285e40: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x285E40u;
    SET_GPR_U32(ctx, 31, 0x285E48u);
    ctx->pc = 0x285E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285E40u;
            // 0x285e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (runtime->hasFunction(0x28BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x28BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285E48u; }
        if (ctx->pc != 0x285E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BBF0_0x28bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285E48u; }
        if (ctx->pc != 0x285E48u) { return; }
    }
    ctx->pc = 0x285E48u;
label_285e48:
    // 0x285e48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x285E48u;
    {
        const bool branch_taken_0x285e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e48) {
            ctx->pc = 0x285E88u;
            goto label_285e88;
        }
    }
    ctx->pc = 0x285E50u;
label_285e50:
    // 0x285e50: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x285e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285e54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x285e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285e58: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x285e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x285e5c: 0xc0a2f1c  jal         func_28BC70
    ctx->pc = 0x285E5Cu;
    SET_GPR_U32(ctx, 31, 0x285E64u);
    ctx->pc = 0x285E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285E5Cu;
            // 0x285e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BC70u;
    if (runtime->hasFunction(0x28BC70u)) {
        auto targetFn = runtime->lookupFunction(0x28BC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285E64u; }
        if (ctx->pc != 0x285E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BC70_0x28bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285E64u; }
        if (ctx->pc != 0x285E64u) { return; }
    }
    ctx->pc = 0x285E64u;
label_285e64:
    // 0x285e64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x285E64u;
    {
        const bool branch_taken_0x285e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e64) {
            ctx->pc = 0x285E88u;
            goto label_285e88;
        }
    }
    ctx->pc = 0x285E6Cu;
    // 0x285e6c: 0x0  nop
    ctx->pc = 0x285e6cu;
    // NOP
label_285e70:
    // 0x285e70: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x285e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285e74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x285e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285e78: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x285e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x285e7c: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x285e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x285e80: 0xc0a2f54  jal         func_28BD50
    ctx->pc = 0x285E80u;
    SET_GPR_U32(ctx, 31, 0x285E88u);
    ctx->pc = 0x285E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285E80u;
            // 0x285e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BD50u;
    if (runtime->hasFunction(0x28BD50u)) {
        auto targetFn = runtime->lookupFunction(0x28BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285E88u; }
        if (ctx->pc != 0x285E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BD50_0x28bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285E88u; }
        if (ctx->pc != 0x285E88u) { return; }
    }
    ctx->pc = 0x285E88u;
label_285e88:
    // 0x285e88: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x285e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x285e8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x285e90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285e94: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x285E94u;
    {
        const bool branch_taken_0x285e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285e94) {
            ctx->pc = 0x285EC0u;
            goto label_285ec0;
        }
    }
    ctx->pc = 0x285E9Cu;
    // 0x285e9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x285e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x285ea0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x285ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x285ea4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x285ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x285ea8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x285ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x285eac: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x285eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285eb0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x285eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x285eb4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x285eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x285eb8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x285EB8u;
    SET_GPR_U32(ctx, 31, 0x285EC0u);
    ctx->pc = 0x285EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285EB8u;
            // 0x285ebc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285EC0u; }
        if (ctx->pc != 0x285EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285EC0u; }
        if (ctx->pc != 0x285EC0u) { return; }
    }
    ctx->pc = 0x285EC0u;
label_285ec0:
    // 0x285ec0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x285ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285ec4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x285ec4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x285ec8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x285ec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285ecc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285ed0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285ed4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x285EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EE4u;
            // 0x285ee8: 0x27bd08e0  addiu       $sp, $sp, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285EECu;
    // 0x285eec: 0x0  nop
    ctx->pc = 0x285eecu;
    // NOP
}
