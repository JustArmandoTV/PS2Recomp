#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192900
// Address: 0x192900 - 0x192978
void sub_00192900_0x192900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192900_0x192900");
#endif

    switch (ctx->pc) {
        case 0x192938u: goto label_192938;
        case 0x19294cu: goto label_19294c;
        case 0x192960u: goto label_192960;
        default: break;
    }

    ctx->pc = 0x192900u;

    // 0x192900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192904: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x192904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x192908: 0x8c436a58  lw          $v1, 0x6A58($v0)
    ctx->pc = 0x192908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27224)));
    // 0x19290c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192910: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192914: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x192914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x192918: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x192918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19291c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x192920: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x192920u;
    {
        const bool branch_taken_0x192920 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x192924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192920u;
            // 0x192924: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192920) {
            ctx->pc = 0x192958u;
            goto label_192958;
        }
    }
    ctx->pc = 0x192928u;
    // 0x192928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19292c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19292cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192930: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x192930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192934: 0x0  nop
    ctx->pc = 0x192934u;
    // NOP
label_192938:
    // 0x192938: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x192938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19293c: 0x50520004  beql        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19293Cu;
    {
        const bool branch_taken_0x19293c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x19293c) {
            ctx->pc = 0x192940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19293Cu;
            // 0x192940: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192950u;
            goto label_192950;
        }
    }
    ctx->pc = 0x192944u;
    // 0x192944: 0xc064b4e  jal         func_192D38
    ctx->pc = 0x192944u;
    SET_GPR_U32(ctx, 31, 0x19294Cu);
    ctx->pc = 0x192948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192944u;
            // 0x192948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D38u;
    if (runtime->hasFunction(0x192D38u)) {
        auto targetFn = runtime->lookupFunction(0x192D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19294Cu; }
        if (ctx->pc != 0x19294Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D38_0x192d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19294Cu; }
        if (ctx->pc != 0x19294Cu) { return; }
    }
    ctx->pc = 0x19294Cu;
label_19294c:
    // 0x19294c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19294cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_192950:
    // 0x192950: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x192950u;
    {
        const bool branch_taken_0x192950 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x192954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192950u;
            // 0x192954: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192950) {
            ctx->pc = 0x192938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_192938;
        }
    }
    ctx->pc = 0x192958u;
label_192958:
    // 0x192958: 0xc0641d0  jal         func_190740
    ctx->pc = 0x192958u;
    SET_GPR_U32(ctx, 31, 0x192960u);
    ctx->pc = 0x190740u;
    if (runtime->hasFunction(0x190740u)) {
        auto targetFn = runtime->lookupFunction(0x190740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192960u; }
        if (ctx->pc != 0x192960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190740_0x190740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192960u; }
        if (ctx->pc != 0x192960u) { return; }
    }
    ctx->pc = 0x192960u;
label_192960:
    // 0x192960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192968: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x192968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19296c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19296cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x192970: 0x8064978  j           func_1925E0
    ctx->pc = 0x192970u;
    ctx->pc = 0x192974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192970u;
            // 0x192974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1925E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x192978u;
}
