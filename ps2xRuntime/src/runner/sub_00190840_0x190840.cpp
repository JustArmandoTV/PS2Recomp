#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190840
// Address: 0x190840 - 0x190890
void sub_00190840_0x190840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190840_0x190840");
#endif

    switch (ctx->pc) {
        case 0x190864u: goto label_190864;
        default: break;
    }

    ctx->pc = 0x190840u;

    // 0x190840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x190844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x190848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19084c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19084cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x190850: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x190850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190854: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x190854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x190858: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x190858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19085c: 0xc064adc  jal         func_192B70
    ctx->pc = 0x19085Cu;
    SET_GPR_U32(ctx, 31, 0x190864u);
    ctx->pc = 0x190860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19085Cu;
            // 0x190860: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190864u; }
        if (ctx->pc != 0x190864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190864u; }
        if (ctx->pc != 0x190864u) { return; }
    }
    ctx->pc = 0x190864u;
label_190864:
    // 0x190864: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190864u;
    {
        const bool branch_taken_0x190864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190864) {
            ctx->pc = 0x190868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190864u;
            // 0x190868: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190878u;
            goto label_190878;
        }
    }
    ctx->pc = 0x19086Cu;
    // 0x19086c: 0xae1100f8  sw          $s1, 0xF8($s0)
    ctx->pc = 0x19086cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 17));
    // 0x190870: 0xae1200f4  sw          $s2, 0xF4($s0)
    ctx->pc = 0x190870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 18));
    // 0x190874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190878:
    // 0x190878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19087c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19087cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190880: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x190880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x190884: 0x3e00008  jr          $ra
    ctx->pc = 0x190884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190884u;
            // 0x190888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19088Cu;
    // 0x19088c: 0x0  nop
    ctx->pc = 0x19088cu;
    // NOP
}
