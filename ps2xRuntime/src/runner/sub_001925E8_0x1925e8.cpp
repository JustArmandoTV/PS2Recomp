#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001925E8
// Address: 0x1925e8 - 0x192650
void sub_001925E8_0x1925e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001925E8_0x1925e8");
#endif

    switch (ctx->pc) {
        case 0x192604u: goto label_192604;
        default: break;
    }

    ctx->pc = 0x1925e8u;

    // 0x1925e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1925e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1925ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1925ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1925f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1925f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1925f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1925f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1925f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1925fc: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1925FCu;
    SET_GPR_U32(ctx, 31, 0x192604u);
    ctx->pc = 0x192600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1925FCu;
            // 0x192600: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192604u; }
        if (ctx->pc != 0x192604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192604u; }
        if (ctx->pc != 0x192604u) { return; }
    }
    ctx->pc = 0x192604u;
label_192604:
    // 0x192604: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x192604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x192608: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x192608u;
    {
        const bool branch_taken_0x192608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192608u;
            // 0x19260c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192608) {
            ctx->pc = 0x192628u;
            goto label_192628;
        }
    }
    ctx->pc = 0x192610u;
    // 0x192610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192614: 0x34a50201  ori         $a1, $a1, 0x201
    ctx->pc = 0x192614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
    // 0x192618: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19261c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19261cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192620: 0x8064a68  j           func_1929A0
    ctx->pc = 0x192620u;
    ctx->pc = 0x192624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192620u;
            // 0x192624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1929A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1929A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x192628u;
label_192628:
    // 0x192628: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x192628u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19262c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19262cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192630: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x192630u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x192634: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x192634u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x192638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19263c: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x19263cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x192640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192644: 0x3e00008  jr          $ra
    ctx->pc = 0x192644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192644u;
            // 0x192648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19264Cu;
    // 0x19264c: 0x0  nop
    ctx->pc = 0x19264cu;
    // NOP
}
