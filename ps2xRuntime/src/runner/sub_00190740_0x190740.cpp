#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190740
// Address: 0x190740 - 0x1907f0
void sub_00190740_0x190740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190740_0x190740");
#endif

    switch (ctx->pc) {
        case 0x190764u: goto label_190764;
        case 0x1907a0u: goto label_1907a0;
        case 0x1907c4u: goto label_1907c4;
        default: break;
    }

    ctx->pc = 0x190740u;

    // 0x190740: 0x3e00008  jr          $ra
    ctx->pc = 0x190740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190748u;
    // 0x190748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19074c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19074cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x190750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190754: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x190754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x190758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19075c: 0xc064adc  jal         func_192B70
    ctx->pc = 0x19075Cu;
    SET_GPR_U32(ctx, 31, 0x190764u);
    ctx->pc = 0x190760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19075Cu;
            // 0x190760: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190764u; }
        if (ctx->pc != 0x190764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190764u; }
        if (ctx->pc != 0x190764u) { return; }
    }
    ctx->pc = 0x190764u;
label_190764:
    // 0x190764: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x190764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x190768: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x190768u;
    {
        const bool branch_taken_0x190768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190768u;
            // 0x19076c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190768) {
            ctx->pc = 0x190788u;
            goto label_190788;
        }
    }
    ctx->pc = 0x190770u;
    // 0x190770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190774: 0x34a50302  ori         $a1, $a1, 0x302
    ctx->pc = 0x190774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)770);
    // 0x190778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19077c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19077cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190780: 0x8064a68  j           func_1929A0
    ctx->pc = 0x190780u;
    ctx->pc = 0x190784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190780u;
            // 0x190784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1929A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1929A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x190788u;
label_190788:
    // 0x190788: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x190788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x19078c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19078cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x190794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190798: 0x3e00008  jr          $ra
    ctx->pc = 0x190798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19079Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190798u;
            // 0x19079c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1907A0u;
label_1907a0:
    // 0x1907a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1907a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1907a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1907a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1907a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1907a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1907acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1907b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1907b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1907b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1907b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1907b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1907bc: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1907BCu;
    SET_GPR_U32(ctx, 31, 0x1907C4u);
    ctx->pc = 0x1907C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1907BCu;
            // 0x1907c0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1907C4u; }
        if (ctx->pc != 0x1907C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1907C4u; }
        if (ctx->pc != 0x1907C4u) { return; }
    }
    ctx->pc = 0x1907C4u;
label_1907c4:
    // 0x1907c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1907C4u;
    {
        const bool branch_taken_0x1907c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1907c4) {
            ctx->pc = 0x1907C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1907C4u;
            // 0x1907c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1907D8u;
            goto label_1907d8;
        }
    }
    ctx->pc = 0x1907CCu;
    // 0x1907cc: 0xae1100e8  sw          $s1, 0xE8($s0)
    ctx->pc = 0x1907ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 17));
    // 0x1907d0: 0xae1200e4  sw          $s2, 0xE4($s0)
    ctx->pc = 0x1907d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 18));
    // 0x1907d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1907d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1907d8:
    // 0x1907d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1907d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1907dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1907dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1907e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1907e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1907e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1907E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1907E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1907E4u;
            // 0x1907e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1907ECu;
    // 0x1907ec: 0x0  nop
    ctx->pc = 0x1907ecu;
    // NOP
}
