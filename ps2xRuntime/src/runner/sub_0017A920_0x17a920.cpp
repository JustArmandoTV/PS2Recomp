#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A920
// Address: 0x17a920 - 0x17a988
void sub_0017A920_0x17a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A920_0x17a920");
#endif

    switch (ctx->pc) {
        case 0x17a944u: goto label_17a944;
        case 0x17a94cu: goto label_17a94c;
        case 0x17a960u: goto label_17a960;
        case 0x17a978u: goto label_17a978;
        default: break;
    }

    ctx->pc = 0x17a920u;

    // 0x17a920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a92c: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x17a92cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x17a930: 0x26104408  addiu       $s0, $s0, 0x4408
    ctx->pc = 0x17a930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17416));
    // 0x17a934: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17a938: 0x0  nop
    ctx->pc = 0x17a938u;
    // NOP
    // 0x17a93c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17A93Cu;
    SET_GPR_U32(ctx, 31, 0x17A944u);
    ctx->pc = 0x17A940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A93Cu;
            // 0x17a940: 0x24042600  addiu       $a0, $zero, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A944u; }
        if (ctx->pc != 0x17A944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A944u; }
        if (ctx->pc != 0x17A944u) { return; }
    }
    ctx->pc = 0x17A944u;
label_17a944:
    // 0x17a944: 0xc047e4e  jal         func_11F938
    ctx->pc = 0x17A944u;
    SET_GPR_U32(ctx, 31, 0x17A94Cu);
    ctx->pc = 0x11F938u;
    if (runtime->hasFunction(0x11F938u)) {
        auto targetFn = runtime->lookupFunction(0x11F938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A94Cu; }
        if (ctx->pc != 0x17A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F938_0x11f938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A94Cu; }
        if (ctx->pc != 0x17A94Cu) { return; }
    }
    ctx->pc = 0x17A94Cu;
label_17a94c:
    // 0x17a94c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17a950: 0x24042601  addiu       $a0, $zero, 0x2601
    ctx->pc = 0x17a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9729));
    // 0x17a954: 0x24634404  addiu       $v1, $v1, 0x4404
    ctx->pc = 0x17a954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17412));
    // 0x17a958: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17A958u;
    SET_GPR_U32(ctx, 31, 0x17A960u);
    ctx->pc = 0x17A95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A958u;
            // 0x17a95c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A960u; }
        if (ctx->pc != 0x17A960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A960u; }
        if (ctx->pc != 0x17A960u) { return; }
    }
    ctx->pc = 0x17A960u;
label_17a960:
    // 0x17a960: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17a960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17a964: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17a964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a96c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A96Cu;
            // 0x17a970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A974u;
    // 0x17a974: 0x0  nop
    ctx->pc = 0x17a974u;
    // NOP
label_17a978:
    // 0x17a978: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17a978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17a97c: 0x2463440c  addiu       $v1, $v1, 0x440C
    ctx->pc = 0x17a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17420));
    // 0x17a980: 0x3e00008  jr          $ra
    ctx->pc = 0x17A980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A980u;
            // 0x17a984: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A988u;
}
