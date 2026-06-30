#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029C970
// Address: 0x29c970 - 0x29ca30
void sub_0029C970_0x29c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C970_0x29c970");
#endif

    switch (ctx->pc) {
        case 0x29c9a8u: goto label_29c9a8;
        case 0x29c9c0u: goto label_29c9c0;
        case 0x29c9f8u: goto label_29c9f8;
        default: break;
    }

    ctx->pc = 0x29c970u;

    // 0x29c970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29c974: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29c978: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29c978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29c97c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29c97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29c980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29c980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29c984: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29c984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29c98c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29c98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c990: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29c990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29c998: 0x2512818  mult        $a1, $s2, $s1
    ctx->pc = 0x29c998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x29c99c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29c9a0: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x29C9A0u;
    SET_GPR_U32(ctx, 31, 0x29C9A8u);
    ctx->pc = 0x29C9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C9A0u;
            // 0x29c9a4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9A8u; }
        if (ctx->pc != 0x29C9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9A8u; }
        if (ctx->pc != 0x29C9A8u) { return; }
    }
    ctx->pc = 0x29C9A8u;
label_29c9a8:
    // 0x29c9a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29c9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29c9b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x29c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29c9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9b8: 0xc04a508  jal         func_129420
    ctx->pc = 0x29C9B8u;
    SET_GPR_U32(ctx, 31, 0x29C9C0u);
    ctx->pc = 0x29C9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C9B8u;
            // 0x29c9bc: 0x513018  mult        $a2, $v0, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9C0u; }
        if (ctx->pc != 0x29C9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9C0u; }
        if (ctx->pc != 0x29C9C0u) { return; }
    }
    ctx->pc = 0x29C9C0u;
label_29c9c0:
    // 0x29c9c0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x29c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x29c9c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29c9c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29c9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29c9cc: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x29C9CCu;
    {
        const bool branch_taken_0x29c9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c9cc) {
            ctx->pc = 0x29C9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C9CCu;
            // 0x29c9d0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C9FCu;
            goto label_29c9fc;
        }
    }
    ctx->pc = 0x29C9D4u;
    // 0x29c9d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29c9d8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x29c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x29c9dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29c9e0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29c9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29c9e4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29c9e8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x29c9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x29c9ec: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x29c9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x29c9f0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29C9F0u;
    SET_GPR_U32(ctx, 31, 0x29C9F8u);
    ctx->pc = 0x29C9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C9F0u;
            // 0x29c9f4: 0x2223018  mult        $a2, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9F8u; }
        if (ctx->pc != 0x29C9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9F8u; }
        if (ctx->pc != 0x29C9F8u) { return; }
    }
    ctx->pc = 0x29C9F8u;
label_29c9f8:
    // 0x29c9f8: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x29c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_29c9fc:
    // 0x29c9fc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x29c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x29ca00: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x29ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x29ca04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29ca04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29ca08: 0x2431825  or          $v1, $s2, $v1
    ctx->pc = 0x29ca08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x29ca0c: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x29ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x29ca10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29ca10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ca14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29ca14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ca18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29ca18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ca1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ca1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ca20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ca20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ca24: 0x3e00008  jr          $ra
    ctx->pc = 0x29CA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA24u;
            // 0x29ca28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CA2Cu;
    // 0x29ca2c: 0x0  nop
    ctx->pc = 0x29ca2cu;
    // NOP
}
