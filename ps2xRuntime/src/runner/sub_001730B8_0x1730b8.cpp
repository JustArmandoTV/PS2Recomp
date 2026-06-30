#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001730B8
// Address: 0x1730b8 - 0x173140
void sub_001730B8_0x1730b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001730B8_0x1730b8");
#endif

    switch (ctx->pc) {
        case 0x173100u: goto label_173100;
        case 0x173108u: goto label_173108;
        case 0x17311cu: goto label_17311c;
        case 0x173128u: goto label_173128;
        default: break;
    }

    ctx->pc = 0x1730b8u;

    // 0x1730b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1730b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1730bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1730bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1730c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1730c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1730c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1730c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1730c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730cc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1730CCu;
    {
        const bool branch_taken_0x1730cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730CCu;
            // 0x1730d0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730cc) {
            ctx->pc = 0x1730DCu;
            goto label_1730dc;
        }
    }
    ctx->pc = 0x1730D4u;
    // 0x1730d4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1730D4u;
    {
        const bool branch_taken_0x1730d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1730d4) {
            ctx->pc = 0x1730F8u;
            goto label_1730f8;
        }
    }
    ctx->pc = 0x1730DCu;
label_1730dc:
    // 0x1730dc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1730dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1730e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1730e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1730e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1730e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1730e8: 0x24844178  addiu       $a0, $a0, 0x4178
    ctx->pc = 0x1730e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16760));
    // 0x1730ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1730ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1730f0: 0x8059f4e  j           func_167D38
    ctx->pc = 0x1730F0u;
    ctx->pc = 0x1730F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1730F0u;
            // 0x1730f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1730F8u;
label_1730f8:
    // 0x1730f8: 0xc05cc90  jal         func_173240
    ctx->pc = 0x1730F8u;
    SET_GPR_U32(ctx, 31, 0x173100u);
    ctx->pc = 0x173240u;
    if (runtime->hasFunction(0x173240u)) {
        auto targetFn = runtime->lookupFunction(0x173240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173100u; }
        if (ctx->pc != 0x173100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173240_0x173240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173100u; }
        if (ctx->pc != 0x173100u) { return; }
    }
    ctx->pc = 0x173100u;
label_173100:
    // 0x173100: 0xc0599d2  jal         func_166748
    ctx->pc = 0x173100u;
    SET_GPR_U32(ctx, 31, 0x173108u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173108u; }
        if (ctx->pc != 0x173108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173108u; }
        if (ctx->pc != 0x173108u) { return; }
    }
    ctx->pc = 0x173108u;
label_173108:
    // 0x173108: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x173108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17310c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17310cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173110: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x173110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x173114: 0xc05cba8  jal         func_172EA0
    ctx->pc = 0x173114u;
    SET_GPR_U32(ctx, 31, 0x17311Cu);
    ctx->pc = 0x173118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173114u;
            // 0x173118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172EA0u;
    if (runtime->hasFunction(0x172EA0u)) {
        auto targetFn = runtime->lookupFunction(0x172EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17311Cu; }
        if (ctx->pc != 0x17311Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172EA0_0x172ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17311Cu; }
        if (ctx->pc != 0x17311Cu) { return; }
    }
    ctx->pc = 0x17311Cu;
label_17311c:
    // 0x17311c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17311cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173120: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x173120u;
    SET_GPR_U32(ctx, 31, 0x173128u);
    ctx->pc = 0x173124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173120u;
            // 0x173124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173128u; }
        if (ctx->pc != 0x173128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175740_0x175740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173128u; }
        if (ctx->pc != 0x173128u) { return; }
    }
    ctx->pc = 0x173128u;
label_173128:
    // 0x173128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17312c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17312cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173134: 0x80599d8  j           func_166760
    ctx->pc = 0x173134u;
    ctx->pc = 0x173138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173134u;
            // 0x173138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17313Cu;
    // 0x17313c: 0x0  nop
    ctx->pc = 0x17313cu;
    // NOP
}
