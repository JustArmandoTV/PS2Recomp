#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE7E0
// Address: 0x1be7e0 - 0x1be870
void sub_001BE7E0_0x1be7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE7E0_0x1be7e0");
#endif

    switch (ctx->pc) {
        case 0x1be7f0u: goto label_1be7f0;
        case 0x1be808u: goto label_1be808;
        case 0x1be810u: goto label_1be810;
        case 0x1be83cu: goto label_1be83c;
        case 0x1be860u: goto label_1be860;
        default: break;
    }

    ctx->pc = 0x1be7e0u;

    // 0x1be7e0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1be7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1be7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7E4u;
            // 0x1be7e8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE7ECu;
    // 0x1be7ec: 0x0  nop
    ctx->pc = 0x1be7ecu;
    // NOP
label_1be7f0:
    // 0x1be7f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1be7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1be7f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1be7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1be7f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1be7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1be7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7FCu;
            // 0x1be800: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE804u;
    // 0x1be804: 0x0  nop
    ctx->pc = 0x1be804u;
    // NOP
label_1be808:
    // 0x1be808: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE808u;
            // 0x1be80c: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE810u;
label_1be810:
    // 0x1be810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be818: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1be818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be81c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be820: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be824: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1be824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1be828: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1be828u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1be82c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1be830: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1be830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1be834: 0xc06fa1c  jal         func_1BE870
    ctx->pc = 0x1BE834u;
    SET_GPR_U32(ctx, 31, 0x1BE83Cu);
    ctx->pc = 0x1BE838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE834u;
            // 0x1be838: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE870u;
    if (runtime->hasFunction(0x1BE870u)) {
        auto targetFn = runtime->lookupFunction(0x1BE870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE83Cu; }
        if (ctx->pc != 0x1BE83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE870_0x1be870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE83Cu; }
        if (ctx->pc != 0x1BE83Cu) { return; }
    }
    ctx->pc = 0x1BE83Cu;
label_1be83c:
    // 0x1be83c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1be83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1be840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be844: 0xae120038  sw          $s2, 0x38($s0)
    ctx->pc = 0x1be844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
    // 0x1be848: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1be848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be854: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE854u;
            // 0x1be858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE85Cu;
    // 0x1be85c: 0x0  nop
    ctx->pc = 0x1be85cu;
    // NOP
label_1be860:
    // 0x1be860: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1be860u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1be864: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1be864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1be868: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE868u;
            // 0x1be86c: 0x8ca20038  lw          $v0, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE870u;
}
