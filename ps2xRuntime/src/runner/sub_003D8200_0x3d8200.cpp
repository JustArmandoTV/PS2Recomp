#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D8200
// Address: 0x3d8200 - 0x3d8270
void sub_003D8200_0x3d8200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8200_0x3d8200");
#endif

    switch (ctx->pc) {
        case 0x3d8240u: goto label_3d8240;
        case 0x3d8258u: goto label_3d8258;
        default: break;
    }

    ctx->pc = 0x3d8200u;

    // 0x3d8200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d8200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d8204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d8204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d8208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d820c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d8210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d8210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8214: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D8214u;
    {
        const bool branch_taken_0x3d8214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8214u;
            // 0x3d8218: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8214) {
            ctx->pc = 0x3D8258u;
            goto label_3d8258;
        }
    }
    ctx->pc = 0x3D821Cu;
    // 0x3d821c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D821Cu;
    {
        const bool branch_taken_0x3d821c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d821c) {
            ctx->pc = 0x3D8220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D821Cu;
            // 0x3d8220: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D8244u;
            goto label_3d8244;
        }
    }
    ctx->pc = 0x3D8224u;
    // 0x3d8224: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8224u;
    {
        const bool branch_taken_0x3d8224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8224) {
            ctx->pc = 0x3D8240u;
            goto label_3d8240;
        }
    }
    ctx->pc = 0x3D822Cu;
    // 0x3d822c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3d822cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3d8230: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8230u;
    {
        const bool branch_taken_0x3d8230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8230) {
            ctx->pc = 0x3D8240u;
            goto label_3d8240;
        }
    }
    ctx->pc = 0x3D8238u;
    // 0x3d8238: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3D8238u;
    SET_GPR_U32(ctx, 31, 0x3D8240u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8240u; }
        if (ctx->pc != 0x3D8240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8240u; }
        if (ctx->pc != 0x3D8240u) { return; }
    }
    ctx->pc = 0x3D8240u;
label_3d8240:
    // 0x3d8240: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3d8240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3d8244:
    // 0x3d8244: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d8244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3d8248: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8248u;
    {
        const bool branch_taken_0x3d8248 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d8248) {
            ctx->pc = 0x3D824Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8248u;
            // 0x3d824c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D825Cu;
            goto label_3d825c;
        }
    }
    ctx->pc = 0x3D8250u;
    // 0x3d8250: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3D8250u;
    SET_GPR_U32(ctx, 31, 0x3D8258u);
    ctx->pc = 0x3D8254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8250u;
            // 0x3d8254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8258u; }
        if (ctx->pc != 0x3D8258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8258u; }
        if (ctx->pc != 0x3D8258u) { return; }
    }
    ctx->pc = 0x3D8258u;
label_3d8258:
    // 0x3d8258: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d8258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d825c:
    // 0x3d825c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d825cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d8260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d8260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8268: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8268u;
            // 0x3d826c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8270u;
}
