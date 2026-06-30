#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186558
// Address: 0x186558 - 0x186618
void sub_00186558_0x186558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186558_0x186558");
#endif

    switch (ctx->pc) {
        case 0x1865c8u: goto label_1865c8;
        case 0x1865f4u: goto label_1865f4;
        case 0x1865fcu: goto label_1865fc;
        case 0x186604u: goto label_186604;
        default: break;
    }

    ctx->pc = 0x186558u;

    // 0x186558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18655c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186564: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x186564u;
    {
        const bool branch_taken_0x186564 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x186568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186564u;
            // 0x186568: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186564) {
            ctx->pc = 0x186590u;
            goto label_186590;
        }
    }
    ctx->pc = 0x18656Cu;
    // 0x18656c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18656cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x186570: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x186574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186578: 0x24847c80  addiu       $a0, $a0, 0x7C80
    ctx->pc = 0x186578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31872));
    // 0x18657c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18657cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186580: 0x24a57c90  addiu       $a1, $a1, 0x7C90
    ctx->pc = 0x186580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
    // 0x186584: 0x80618a8  j           func_1862A0
    ctx->pc = 0x186584u;
    ctx->pc = 0x186588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186584u;
            // 0x186588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001862A0_0x1862a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18658Cu;
    // 0x18658c: 0x0  nop
    ctx->pc = 0x18658cu;
    // NOP
label_186590:
    // 0x186590: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x186590u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x186594: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x186594u;
    {
        const bool branch_taken_0x186594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186594u;
            // 0x186598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186594) {
            ctx->pc = 0x1865C0u;
            goto label_1865c0;
        }
    }
    ctx->pc = 0x18659Cu;
    // 0x18659c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18659cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1865a0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1865a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1865a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1865a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1865a8: 0x24847cb0  addiu       $a0, $a0, 0x7CB0
    ctx->pc = 0x1865a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    // 0x1865ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1865acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1865b0: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x1865b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
    // 0x1865b4: 0x80618a8  j           func_1862A0
    ctx->pc = 0x1865B4u;
    ctx->pc = 0x1865B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865B4u;
            // 0x1865b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001862A0_0x1862a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1865BCu;
    // 0x1865bc: 0x0  nop
    ctx->pc = 0x1865bcu;
    // NOP
label_1865c0:
    // 0x1865c0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1865C0u;
    SET_GPR_U32(ctx, 31, 0x1865C8u);
    ctx->pc = 0x1865C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865C0u;
            // 0x1865c4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865C8u; }
        if (ctx->pc != 0x1865C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865C8u; }
        if (ctx->pc != 0x1865C8u) { return; }
    }
    ctx->pc = 0x1865C8u;
label_1865c8:
    // 0x1865c8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1865c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1865cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1865ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1865d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1865d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1865d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1865D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1865D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1865D4u;
            // 0x1865d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1865DCu;
    // 0x1865dc: 0x0  nop
    ctx->pc = 0x1865dcu;
    // NOP
    // 0x1865e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1865e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1865e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1865e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1865e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1865e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1865ec: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x1865ECu;
    SET_GPR_U32(ctx, 31, 0x1865F4u);
    ctx->pc = 0x1865F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865ECu;
            // 0x1865f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865F4u; }
        if (ctx->pc != 0x1865F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865F4u; }
        if (ctx->pc != 0x1865F4u) { return; }
    }
    ctx->pc = 0x1865F4u;
label_1865f4:
    // 0x1865f4: 0xc061986  jal         func_186618
    ctx->pc = 0x1865F4u;
    SET_GPR_U32(ctx, 31, 0x1865FCu);
    ctx->pc = 0x1865F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865F4u;
            // 0x1865f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186618u;
    if (runtime->hasFunction(0x186618u)) {
        auto targetFn = runtime->lookupFunction(0x186618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865FCu; }
        if (ctx->pc != 0x1865FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186618_0x186618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865FCu; }
        if (ctx->pc != 0x1865FCu) { return; }
    }
    ctx->pc = 0x1865FCu;
label_1865fc:
    // 0x1865fc: 0xc061282  jal         func_184A08
    ctx->pc = 0x1865FCu;
    SET_GPR_U32(ctx, 31, 0x186604u);
    ctx->pc = 0x186600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865FCu;
            // 0x186600: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186604u; }
        if (ctx->pc != 0x186604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186604u; }
        if (ctx->pc != 0x186604u) { return; }
    }
    ctx->pc = 0x186604u;
label_186604:
    // 0x186604: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186608: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18660c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18660cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186610: 0x3e00008  jr          $ra
    ctx->pc = 0x186610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186610u;
            // 0x186614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186618u;
}
