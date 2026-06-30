#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE3F8
// Address: 0x1ce3f8 - 0x1ce4b0
void sub_001CE3F8_0x1ce3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE3F8_0x1ce3f8");
#endif

    switch (ctx->pc) {
        case 0x1ce44cu: goto label_1ce44c;
        case 0x1ce468u: goto label_1ce468;
        case 0x1ce490u: goto label_1ce490;
        default: break;
    }

    ctx->pc = 0x1ce3f8u;

    // 0x1ce3f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ce3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ce3fc: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1ce3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1ce400: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ce400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1ce404: 0x24e7003f  addiu       $a3, $a3, 0x3F
    ctx->pc = 0x1ce404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x1ce408: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ce408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ce40c: 0x2508003f  addiu       $t0, $t0, 0x3F
    ctx->pc = 0x1ce40cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x1ce410: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ce410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ce414: 0x1029024  and         $s2, $t0, $v0
    ctx->pc = 0x1ce414u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1ce418: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ce418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ce41c: 0xe28824  and         $s1, $a3, $v0
    ctx->pc = 0x1ce41cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1ce420: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ce420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ce424: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x1ce424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ce428: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1ce428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1ce42c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE42Cu;
    {
        const bool branch_taken_0x1ce42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE42Cu;
            // 0x1ce430: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce42c) {
            ctx->pc = 0x1CE440u;
            goto label_1ce440;
        }
    }
    ctx->pc = 0x1CE434u;
    // 0x1ce434: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1ce434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ce438: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE438u;
    {
        const bool branch_taken_0x1ce438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE438u;
            // 0x1ce43c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce438) {
            ctx->pc = 0x1CE470u;
            goto label_1ce470;
        }
    }
    ctx->pc = 0x1CE440u;
label_1ce440:
    // 0x1ce440: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1ce444: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1CE444u;
    SET_GPR_U32(ctx, 31, 0x1CE44Cu);
    ctx->pc = 0x1CE448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE444u;
            // 0x1ce448: 0x2484c288  addiu       $a0, $a0, -0x3D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE44Cu; }
        if (ctx->pc != 0x1CE44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE44Cu; }
        if (ctx->pc != 0x1CE44Cu) { return; }
    }
    ctx->pc = 0x1CE44Cu;
label_1ce44c:
    // 0x1ce44c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1ce44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1ce450: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ce450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce454: 0x2484c2c0  addiu       $a0, $a0, -0x3D40
    ctx->pc = 0x1ce454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
    // 0x1ce458: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ce458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce45c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ce45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce460: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1CE460u;
    SET_GPR_U32(ctx, 31, 0x1CE468u);
    ctx->pc = 0x1CE464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE460u;
            // 0x1ce464: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE468u; }
        if (ctx->pc != 0x1CE468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE468u; }
        if (ctx->pc != 0x1CE468u) { return; }
    }
    ctx->pc = 0x1CE468u;
label_1ce468:
    // 0x1ce468: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE468u;
    {
        const bool branch_taken_0x1ce468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE468u;
            // 0x1ce46c: 0x2402fde1  addiu       $v0, $zero, -0x21F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966753));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce468) {
            ctx->pc = 0x1CE490u;
            goto label_1ce490;
        }
    }
    ctx->pc = 0x1CE470u;
label_1ce470:
    // 0x1ce470: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ce470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce474: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ce474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce478: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1ce478u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce47c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ce47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ce480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce484: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ce484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce488: 0xc073862  jal         func_1CE188
    ctx->pc = 0x1CE488u;
    SET_GPR_U32(ctx, 31, 0x1CE490u);
    ctx->pc = 0x1CE48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE488u;
            // 0x1ce48c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE188u;
    if (runtime->hasFunction(0x1CE188u)) {
        auto targetFn = runtime->lookupFunction(0x1CE188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE490u; }
        if (ctx->pc != 0x1CE490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE188_0x1ce188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE490u; }
        if (ctx->pc != 0x1CE490u) { return; }
    }
    ctx->pc = 0x1CE490u;
label_1ce490:
    // 0x1ce490: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ce490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce494: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ce494u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce498: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ce498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce49c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ce49cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce4a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ce4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4A4u;
            // 0x1ce4a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE4ACu;
    // 0x1ce4ac: 0x0  nop
    ctx->pc = 0x1ce4acu;
    // NOP
}
