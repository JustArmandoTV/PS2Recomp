#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD070
// Address: 0x1bd070 - 0x1bd0c0
void sub_001BD070_0x1bd070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD070_0x1bd070");
#endif

    switch (ctx->pc) {
        case 0x1bd088u: goto label_1bd088;
        default: break;
    }

    ctx->pc = 0x1bd070u;

    // 0x1bd070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd074: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bd074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bd078: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd07c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bd080: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BD080u;
    SET_GPR_U32(ctx, 31, 0x1BD088u);
    ctx->pc = 0x1BD084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD080u;
            // 0x1bd084: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD088u; }
        if (ctx->pc != 0x1BD088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD088u; }
        if (ctx->pc != 0x1BD088u) { return; }
    }
    ctx->pc = 0x1BD088u;
label_1bd088:
    // 0x1bd088: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bd088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd08c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD08Cu;
    {
        const bool branch_taken_0x1bd08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd08c) {
            ctx->pc = 0x1BD090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD08Cu;
            // 0x1bd090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD0B4u;
            goto label_1bd0b4;
        }
    }
    ctx->pc = 0x1BD094u;
    // 0x1bd094: 0x9064000a  lbu         $a0, 0xA($v1)
    ctx->pc = 0x1bd094u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1bd098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd09c: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x1bd09cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1bd0a0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1bd0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1bd0a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd0a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1bd0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1bd0ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bd0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bd0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd0b4:
    // 0x1bd0b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0B8u;
            // 0x1bd0bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD0C0u;
}
