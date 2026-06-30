#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD008
// Address: 0x1bd008 - 0x1bd070
void sub_001BD008_0x1bd008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD008_0x1bd008");
#endif

    switch (ctx->pc) {
        case 0x1bd020u: goto label_1bd020;
        default: break;
    }

    ctx->pc = 0x1bd008u;

    // 0x1bd008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd00c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bd00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bd010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd014: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bd018: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BD018u;
    SET_GPR_U32(ctx, 31, 0x1BD020u);
    ctx->pc = 0x1BD01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD018u;
            // 0x1bd01c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD020u; }
        if (ctx->pc != 0x1BD020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD020u; }
        if (ctx->pc != 0x1BD020u) { return; }
    }
    ctx->pc = 0x1BD020u;
label_1bd020:
    // 0x1bd020: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bd020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd024: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1BD024u;
    {
        const bool branch_taken_0x1bd024 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd024) {
            ctx->pc = 0x1BD028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD024u;
            // 0x1bd028: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD060u;
            goto label_1bd060;
        }
    }
    ctx->pc = 0x1BD02Cu;
    // 0x1bd02c: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x1bd02cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1bd030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd034: 0x90c40007  lbu         $a0, 0x7($a2)
    ctx->pc = 0x1bd034u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x1bd038: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bd038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bd03c: 0x90c50008  lbu         $a1, 0x8($a2)
    ctx->pc = 0x1bd03cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bd040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd044: 0x90c60009  lbu         $a2, 0x9($a2)
    ctx->pc = 0x1bd044u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1bd048: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bd048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bd04c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bd04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bd050: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bd050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bd054: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1bd054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1bd058: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bd058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bd05c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd060:
    // 0x1bd060: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd064: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD064u;
            // 0x1bd068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD06Cu;
    // 0x1bd06c: 0x0  nop
    ctx->pc = 0x1bd06cu;
    // NOP
}
