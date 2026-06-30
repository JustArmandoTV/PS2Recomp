#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116918
// Address: 0x116918 - 0x116980
void sub_00116918_0x116918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116918_0x116918");
#endif

    switch (ctx->pc) {
        case 0x11692cu: goto label_11692c;
        case 0x116950u: goto label_116950;
        case 0x116958u: goto label_116958;
        case 0x116960u: goto label_116960;
        default: break;
    }

    ctx->pc = 0x116918u;

    // 0x116918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11691c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11691cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116920: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x116924: 0xc043104  jal         func_10C410
    ctx->pc = 0x116924u;
    SET_GPR_U32(ctx, 31, 0x11692Cu);
    ctx->pc = 0x116928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116924u;
            // 0x116928: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C410u;
    if (runtime->hasFunction(0x10C410u)) {
        auto targetFn = runtime->lookupFunction(0x10C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11692Cu; }
        if (ctx->pc != 0x11692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C410_0x10c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11692Cu; }
        if (ctx->pc != 0x11692Cu) { return; }
    }
    ctx->pc = 0x11692Cu;
label_11692c:
    // 0x11692c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116930: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x116930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x116934: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x116934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x116938: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x116938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x11693c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11693cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x116940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116944: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x116944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x116948: 0xc043100  jal         func_10C400
    ctx->pc = 0x116948u;
    SET_GPR_U32(ctx, 31, 0x116950u);
    ctx->pc = 0x11694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116948u;
            // 0x11694c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C400u;
    if (runtime->hasFunction(0x10C400u)) {
        auto targetFn = runtime->lookupFunction(0x10C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116950u; }
        if (ctx->pc != 0x116950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C400_0x10c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116950u; }
        if (ctx->pc != 0x116950u) { return; }
    }
    ctx->pc = 0x116950u;
label_116950:
    // 0x116950: 0xc043104  jal         func_10C410
    ctx->pc = 0x116950u;
    SET_GPR_U32(ctx, 31, 0x116958u);
    ctx->pc = 0x116954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116950u;
            // 0x116954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C410u;
    if (runtime->hasFunction(0x10C410u)) {
        auto targetFn = runtime->lookupFunction(0x10C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116958u; }
        if (ctx->pc != 0x116958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C410_0x10c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116958u; }
        if (ctx->pc != 0x116958u) { return; }
    }
    ctx->pc = 0x116958u;
label_116958:
    // 0x116958: 0xc043100  jal         func_10C400
    ctx->pc = 0x116958u;
    SET_GPR_U32(ctx, 31, 0x116960u);
    ctx->pc = 0x11695Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116958u;
            // 0x11695c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C400u;
    if (runtime->hasFunction(0x10C400u)) {
        auto targetFn = runtime->lookupFunction(0x10C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116960u; }
        if (ctx->pc != 0x116960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C400_0x10c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116960u; }
        if (ctx->pc != 0x116960u) { return; }
    }
    ctx->pc = 0x116960u;
label_116960:
    // 0x116960: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x116960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x116964: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116968: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x116968u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x11696c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11696cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116970: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x116970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x116974: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x116974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x116978: 0x3e00008  jr          $ra
    ctx->pc = 0x116978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116978u;
            // 0x11697c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116980u;
}
