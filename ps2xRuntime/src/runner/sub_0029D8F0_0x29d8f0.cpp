#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D8F0
// Address: 0x29d8f0 - 0x29d9a0
void sub_0029D8F0_0x29d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D8F0_0x29d8f0");
#endif

    switch (ctx->pc) {
        case 0x29d928u: goto label_29d928;
        case 0x29d940u: goto label_29d940;
        case 0x29d970u: goto label_29d970;
        default: break;
    }

    ctx->pc = 0x29d8f0u;

    // 0x29d8f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29d8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29d8f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29d8f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29d8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29d8fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29d900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d904: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29d904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d90c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29d90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d910: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29d910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d918: 0x2512818  mult        $a1, $s2, $s1
    ctx->pc = 0x29d918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x29d91c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29d920: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x29D920u;
    SET_GPR_U32(ctx, 31, 0x29D928u);
    ctx->pc = 0x29D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D920u;
            // 0x29d924: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D928u; }
        if (ctx->pc != 0x29D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D928u; }
        if (ctx->pc != 0x29D928u) { return; }
    }
    ctx->pc = 0x29D928u;
label_29d928:
    // 0x29d928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d92c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29d92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29d930: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x29d930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29d934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d938: 0xc04a508  jal         func_129420
    ctx->pc = 0x29D938u;
    SET_GPR_U32(ctx, 31, 0x29D940u);
    ctx->pc = 0x29D93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D938u;
            // 0x29d93c: 0x513018  mult        $a2, $v0, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D940u; }
        if (ctx->pc != 0x29D940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D940u; }
        if (ctx->pc != 0x29D940u) { return; }
    }
    ctx->pc = 0x29D940u;
label_29d940:
    // 0x29d940: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x29d940u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x29d944: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x29d944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x29d948: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x29D948u;
    {
        const bool branch_taken_0x29d948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d948) {
            ctx->pc = 0x29D94Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D948u;
            // 0x29d94c: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D974u;
            goto label_29d974;
        }
    }
    ctx->pc = 0x29D950u;
    // 0x29d950: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29d950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29d954: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x29d954u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x29d958: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29d958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29d95c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29d95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29d960: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29d960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29d964: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x29d964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x29d968: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29D968u;
    SET_GPR_U32(ctx, 31, 0x29D970u);
    ctx->pc = 0x29D96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D968u;
            // 0x29d96c: 0x2223018  mult        $a2, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D970u; }
        if (ctx->pc != 0x29D970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D970u; }
        if (ctx->pc != 0x29D970u) { return; }
    }
    ctx->pc = 0x29D970u;
label_29d970:
    // 0x29d970: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x29d970u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_29d974:
    // 0x29d974: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x29d974u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x29d978: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x29d978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x29d97c: 0x2431825  or          $v1, $s2, $v1
    ctx->pc = 0x29d97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x29d980: 0xa6630006  sh          $v1, 0x6($s3)
    ctx->pc = 0x29d980u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x29d984: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29d984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d988: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29d988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d98c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d98cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d998: 0x3e00008  jr          $ra
    ctx->pc = 0x29D998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D998u;
            // 0x29d99c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D9A0u;
}
