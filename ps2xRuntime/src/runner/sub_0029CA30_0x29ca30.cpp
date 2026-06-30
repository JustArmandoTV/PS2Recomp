#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CA30
// Address: 0x29ca30 - 0x29cb00
void sub_0029CA30_0x29ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CA30_0x29ca30");
#endif

    switch (ctx->pc) {
        case 0x29ca78u: goto label_29ca78;
        case 0x29ca90u: goto label_29ca90;
        case 0x29cac8u: goto label_29cac8;
        default: break;
    }

    ctx->pc = 0x29ca30u;

    // 0x29ca30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29ca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29ca34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29ca38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29ca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29ca3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29ca40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29ca40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ca48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ca48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ca4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29ca50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CA50u;
    {
        const bool branch_taken_0x29ca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA50u;
            // 0x29ca54: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca50) {
            ctx->pc = 0x29CA60u;
            goto label_29ca60;
        }
    }
    ctx->pc = 0x29CA58u;
    // 0x29ca58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29CA58u;
    {
        const bool branch_taken_0x29ca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA58u;
            // 0x29ca5c: 0x28040  sll         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca58) {
            ctx->pc = 0x29CA64u;
            goto label_29ca64;
        }
    }
    ctx->pc = 0x29CA60u;
label_29ca60:
    // 0x29ca60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29ca60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ca64:
    // 0x29ca64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29ca68: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x29ca68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29ca6c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29ca70: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x29CA70u;
    SET_GPR_U32(ctx, 31, 0x29CA78u);
    ctx->pc = 0x29CA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA70u;
            // 0x29ca74: 0x2122818  mult        $a1, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CA78u; }
        if (ctx->pc != 0x29CA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CA78u; }
        if (ctx->pc != 0x29CA78u) { return; }
    }
    ctx->pc = 0x29CA78u;
label_29ca78:
    // 0x29ca78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29ca78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca7c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29ca80: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x29ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29ca84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ca84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca88: 0xc04a508  jal         func_129420
    ctx->pc = 0x29CA88u;
    SET_GPR_U32(ctx, 31, 0x29CA90u);
    ctx->pc = 0x29CA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA88u;
            // 0x29ca8c: 0x523018  mult        $a2, $v0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CA90u; }
        if (ctx->pc != 0x29CA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CA90u; }
        if (ctx->pc != 0x29CA90u) { return; }
    }
    ctx->pc = 0x29CA90u;
label_29ca90:
    // 0x29ca90: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x29ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x29ca94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29ca98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29ca98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29ca9c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x29CA9Cu;
    {
        const bool branch_taken_0x29ca9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ca9c) {
            ctx->pc = 0x29CAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA9Cu;
            // 0x29caa0: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29CACCu;
            goto label_29cacc;
        }
    }
    ctx->pc = 0x29CAA4u;
    // 0x29caa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29caa8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x29caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x29caac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29caacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29cab0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29cab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29cab4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29cab8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x29cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x29cabc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x29cabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x29cac0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29CAC0u;
    SET_GPR_U32(ctx, 31, 0x29CAC8u);
    ctx->pc = 0x29CAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAC0u;
            // 0x29cac4: 0x2423018  mult        $a2, $s2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAC8u; }
        if (ctx->pc != 0x29CAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAC8u; }
        if (ctx->pc != 0x29CAC8u) { return; }
    }
    ctx->pc = 0x29CAC8u;
label_29cac8:
    // 0x29cac8: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x29cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_29cacc:
    // 0x29cacc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x29caccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x29cad0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x29cad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x29cad4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29cad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29cad8: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x29cad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x29cadc: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x29cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x29cae0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29cae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cae4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29cae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29cae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29caec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29caecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29caf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29caf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29caf4: 0x3e00008  jr          $ra
    ctx->pc = 0x29CAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAF4u;
            // 0x29caf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CAFCu;
    // 0x29cafc: 0x0  nop
    ctx->pc = 0x29cafcu;
    // NOP
}
