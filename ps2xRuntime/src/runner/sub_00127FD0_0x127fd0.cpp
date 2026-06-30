#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127FD0
// Address: 0x127fd0 - 0x128028
void sub_00127FD0_0x127fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127FD0_0x127fd0");
#endif

    switch (ctx->pc) {
        case 0x127ff8u: goto label_127ff8;
        default: break;
    }

    ctx->pc = 0x127fd0u;

    // 0x127fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127fdc: 0x3c1000be  lui         $s0, 0xBE
    ctx->pc = 0x127fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)190 << 16));
    // 0x127fe0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x127fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x127fe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127fe8: 0xae00b880  sw          $zero, -0x4780($s0)
    ctx->pc = 0x127fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948992), GPR_U32(ctx, 0));
    // 0x127fec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x127fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ff0: 0xc0432c6  jal         func_10CB18
    ctx->pc = 0x127FF0u;
    SET_GPR_U32(ctx, 31, 0x127FF8u);
    ctx->pc = 0x127FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127FF0u;
            // 0x127ff4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB18u;
    if (runtime->hasFunction(0x10CB18u)) {
        auto targetFn = runtime->lookupFunction(0x10CB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127FF8u; }
        if (ctx->pc != 0x127FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CB18_0x10cb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127FF8u; }
        if (ctx->pc != 0x127FF8u) { return; }
    }
    ctx->pc = 0x127FF8u;
label_127ff8:
    // 0x127ff8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x127ff8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127ffc: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x127FFCu;
    {
        const bool branch_taken_0x127ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x127ffc) {
            ctx->pc = 0x128000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127FFCu;
            // 0x128000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128014u;
            goto label_128014;
        }
    }
    ctx->pc = 0x128004u;
    // 0x128004: 0x8e0fb880  lw          $t7, -0x4780($s0)
    ctx->pc = 0x128004u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948992)));
    // 0x128008: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x128008u;
    {
        const bool branch_taken_0x128008 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x128008) {
            ctx->pc = 0x12800Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128008u;
            // 0x12800c: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128010u;
            goto label_128010;
        }
    }
    ctx->pc = 0x128010u;
label_128010:
    // 0x128010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128014:
    // 0x128014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12801c: 0x3e00008  jr          $ra
    ctx->pc = 0x12801Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12801Cu;
            // 0x128020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128024u;
    // 0x128024: 0x0  nop
    ctx->pc = 0x128024u;
    // NOP
}
