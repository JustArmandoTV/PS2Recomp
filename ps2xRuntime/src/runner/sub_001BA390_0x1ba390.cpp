#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA390
// Address: 0x1ba390 - 0x1ba450
void sub_001BA390_0x1ba390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA390_0x1ba390");
#endif

    switch (ctx->pc) {
        case 0x1ba3e8u: goto label_1ba3e8;
        case 0x1ba400u: goto label_1ba400;
        case 0x1ba418u: goto label_1ba418;
        default: break;
    }

    ctx->pc = 0x1ba390u;

    // 0x1ba390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba39c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ba3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ba3a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ba3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ba3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ba3ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ba3acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ba3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ba3b4: 0x3c15006e  lui         $s5, 0x6E
    ctx->pc = 0x1ba3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)110 << 16));
    // 0x1ba3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba3bc: 0x26a41e98  addiu       $a0, $s5, 0x1E98
    ctx->pc = 0x1ba3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 7832));
    // 0x1ba3c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ba3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ba3c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ba3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ba3c8: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1ba3c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ba3cc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ba3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ba3d0: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x1ba3d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ba3d4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BA3D4u;
    {
        const bool branch_taken_0x1ba3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3D4u;
            // 0x1ba3d8: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3d4) {
            ctx->pc = 0x1BA42Cu;
            goto label_1ba42c;
        }
    }
    ctx->pc = 0x1BA3DCu;
    // 0x1ba3dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ba3dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ba3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3e4: 0x0  nop
    ctx->pc = 0x1ba3e4u;
    // NOP
label_1ba3e8:
    // 0x1ba3e8: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1ba3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ba3ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA3ECu;
    {
        const bool branch_taken_0x1ba3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3ECu;
            // 0x1ba3f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3ec) {
            ctx->pc = 0x1BA408u;
            goto label_1ba408;
        }
    }
    ctx->pc = 0x1BA3F4u;
    // 0x1ba3f4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1ba3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3f8: 0xc06e864  jal         func_1BA190
    ctx->pc = 0x1BA3F8u;
    SET_GPR_U32(ctx, 31, 0x1BA400u);
    ctx->pc = 0x1BA3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3F8u;
            // 0x1ba3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA190u;
    if (runtime->hasFunction(0x1BA190u)) {
        auto targetFn = runtime->lookupFunction(0x1BA190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA400u; }
        if (ctx->pc != 0x1BA400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA190_0x1ba190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA400u; }
        if (ctx->pc != 0x1BA400u) { return; }
    }
    ctx->pc = 0x1BA400u;
label_1ba400:
    // 0x1ba400: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BA400u;
    {
        const bool branch_taken_0x1ba400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA400u;
            // 0x1ba404: 0x26230018  addiu       $v1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba400) {
            ctx->pc = 0x1BA3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba3e8;
        }
    }
    ctx->pc = 0x1BA408u;
label_1ba408:
    // 0x1ba408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba40c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ba40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba410: 0xc06e84a  jal         func_1BA128
    ctx->pc = 0x1BA410u;
    SET_GPR_U32(ctx, 31, 0x1BA418u);
    ctx->pc = 0x1BA414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA410u;
            // 0x1ba414: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA128u;
    if (runtime->hasFunction(0x1BA128u)) {
        auto targetFn = runtime->lookupFunction(0x1BA128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA418u; }
        if (ctx->pc != 0x1BA418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA128_0x1ba128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA418u; }
        if (ctx->pc != 0x1BA418u) { return; }
    }
    ctx->pc = 0x1BA418u;
label_1ba418:
    // 0x1ba418: 0x26a41e98  addiu       $a0, $s5, 0x1E98
    ctx->pc = 0x1ba418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 7832));
    // 0x1ba41c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ba41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ba420: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ba420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba424: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba428: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ba428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1ba42c:
    // 0x1ba42c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba434: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ba434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba438: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ba438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ba43c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ba43cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba440: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ba440u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba444: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ba444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba448: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA448u;
            // 0x1ba44c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA450u;
}
