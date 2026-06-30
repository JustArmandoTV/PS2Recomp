#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182520
// Address: 0x182520 - 0x182658
void sub_00182520_0x182520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182520_0x182520");
#endif

    switch (ctx->pc) {
        case 0x182580u: goto label_182580;
        case 0x182588u: goto label_182588;
        case 0x182598u: goto label_182598;
        case 0x1825a0u: goto label_1825a0;
        case 0x1825acu: goto label_1825ac;
        case 0x1825b8u: goto label_1825b8;
        case 0x1825f4u: goto label_1825f4;
        default: break;
    }

    ctx->pc = 0x182520u;

    // 0x182520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18252c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18252cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182530: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x182530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182534: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x182534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x182538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18253c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x182540: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x182540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x182544: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x182544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x182548: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x182548u;
    {
        const bool branch_taken_0x182548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182548u;
            // 0x18254c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182548) {
            ctx->pc = 0x182578u;
            goto label_182578;
        }
    }
    ctx->pc = 0x182550u;
    // 0x182550: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x182550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x182554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18255c: 0x248472f8  addiu       $a0, $a0, 0x72F8
    ctx->pc = 0x18255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29432));
    // 0x182560: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182564: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x182564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182568: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x182568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18256c: 0x8059f4e  j           func_167D38
    ctx->pc = 0x18256Cu;
    ctx->pc = 0x182570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18256Cu;
            // 0x182570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x182574u;
    // 0x182574: 0x0  nop
    ctx->pc = 0x182574u;
    // NOP
label_182578:
    // 0x182578: 0xc05cc84  jal         func_173210
    ctx->pc = 0x182578u;
    SET_GPR_U32(ctx, 31, 0x182580u);
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182580u; }
        if (ctx->pc != 0x182580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182580u; }
        if (ctx->pc != 0x182580u) { return; }
    }
    ctx->pc = 0x182580u;
label_182580:
    // 0x182580: 0xc060996  jal         func_182658
    ctx->pc = 0x182580u;
    SET_GPR_U32(ctx, 31, 0x182588u);
    ctx->pc = 0x182584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182580u;
            // 0x182584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182658u;
    if (runtime->hasFunction(0x182658u)) {
        auto targetFn = runtime->lookupFunction(0x182658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182588u; }
        if (ctx->pc != 0x182588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182658_0x182658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182588u; }
        if (ctx->pc != 0x182588u) { return; }
    }
    ctx->pc = 0x182588u;
label_182588:
    // 0x182588: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x182588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x18258c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18258cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182590: 0xc060710  jal         func_181C40
    ctx->pc = 0x182590u;
    SET_GPR_U32(ctx, 31, 0x182598u);
    ctx->pc = 0x182594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182590u;
            // 0x182594: 0x24842800  addiu       $a0, $a0, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C40u;
    if (runtime->hasFunction(0x181C40u)) {
        auto targetFn = runtime->lookupFunction(0x181C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182598u; }
        if (ctx->pc != 0x182598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C40_0x181c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182598u; }
        if (ctx->pc != 0x182598u) { return; }
    }
    ctx->pc = 0x182598u;
label_182598:
    // 0x182598: 0xc060732  jal         func_181CC8
    ctx->pc = 0x182598u;
    SET_GPR_U32(ctx, 31, 0x1825A0u);
    ctx->pc = 0x18259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182598u;
            // 0x18259c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181CC8u;
    if (runtime->hasFunction(0x181CC8u)) {
        auto targetFn = runtime->lookupFunction(0x181CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825A0u; }
        if (ctx->pc != 0x1825A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181CC8_0x181cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825A0u; }
        if (ctx->pc != 0x1825A0u) { return; }
    }
    ctx->pc = 0x1825A0u;
label_1825a0:
    // 0x1825a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1825a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1825a4: 0xc05b714  jal         func_16DC50
    ctx->pc = 0x1825A4u;
    SET_GPR_U32(ctx, 31, 0x1825ACu);
    ctx->pc = 0x1825A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1825A4u;
            // 0x1825a8: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DC50u;
    if (runtime->hasFunction(0x16DC50u)) {
        auto targetFn = runtime->lookupFunction(0x16DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825ACu; }
        if (ctx->pc != 0x1825ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DC50_0x16dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825ACu; }
        if (ctx->pc != 0x1825ACu) { return; }
    }
    ctx->pc = 0x1825ACu;
label_1825ac:
    // 0x1825ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1825acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825b0: 0xc060760  jal         func_181D80
    ctx->pc = 0x1825B0u;
    SET_GPR_U32(ctx, 31, 0x1825B8u);
    ctx->pc = 0x1825B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1825B0u;
            // 0x1825b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D80u;
    if (runtime->hasFunction(0x181D80u)) {
        auto targetFn = runtime->lookupFunction(0x181D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825B8u; }
        if (ctx->pc != 0x1825B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D80_0x181d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825B8u; }
        if (ctx->pc != 0x1825B8u) { return; }
    }
    ctx->pc = 0x1825B8u;
label_1825b8:
    // 0x1825b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1825b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825bc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1825BCu;
    {
        const bool branch_taken_0x1825bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1825C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1825BCu;
            // 0x1825c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825bc) {
            ctx->pc = 0x1825E8u;
            goto label_1825e8;
        }
    }
    ctx->pc = 0x1825C4u;
    // 0x1825c4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1825c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1825c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1825c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1825cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1825ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1825d0: 0x24847338  addiu       $a0, $a0, 0x7338
    ctx->pc = 0x1825d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29496));
    // 0x1825d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1825d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1825d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1825d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1825dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1825dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1825e0: 0x8059f4e  j           func_167D38
    ctx->pc = 0x1825E0u;
    ctx->pc = 0x1825E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1825E0u;
            // 0x1825e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1825E8u;
label_1825e8:
    // 0x1825e8: 0x8e2500ec  lw          $a1, 0xEC($s1)
    ctx->pc = 0x1825e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x1825ec: 0xc0608d6  jal         func_182358
    ctx->pc = 0x1825ECu;
    SET_GPR_U32(ctx, 31, 0x1825F4u);
    ctx->pc = 0x1825F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1825ECu;
            // 0x1825f0: 0x8e2600f0  lw          $a2, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182358u;
    if (runtime->hasFunction(0x182358u)) {
        auto targetFn = runtime->lookupFunction(0x182358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825F4u; }
        if (ctx->pc != 0x1825F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182358_0x182358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825F4u; }
        if (ctx->pc != 0x1825F4u) { return; }
    }
    ctx->pc = 0x1825F4u;
label_1825f4:
    // 0x1825f4: 0xae3000e8  sw          $s0, 0xE8($s1)
    ctx->pc = 0x1825f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
    // 0x1825f8: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x1825f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x1825fc: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x1825fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x182600: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x182600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x182604: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x182604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x182608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18260c: 0x24422728  addiu       $v0, $v0, 0x2728
    ctx->pc = 0x18260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10024));
    // 0x182610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182614: 0x246327b0  addiu       $v1, $v1, 0x27B0
    ctx->pc = 0x182614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10160));
    // 0x182618: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18261c: 0x24842798  addiu       $a0, $a0, 0x2798
    ctx->pc = 0x18261cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10136));
    // 0x182620: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x182620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182624: 0x24a527e8  addiu       $a1, $a1, 0x27E8
    ctx->pc = 0x182624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10216));
    // 0x182628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x182628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18262c: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x18262cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x182630: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x182630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x182634: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x182634u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x182638: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x182638u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x18263c: 0xacc23f38  sw          $v0, 0x3F38($a2)
    ctx->pc = 0x18263cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16184), GPR_U32(ctx, 2));
    // 0x182640: 0xace361ec  sw          $v1, 0x61EC($a3)
    ctx->pc = 0x182640u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 25068), GPR_U32(ctx, 3));
    // 0x182644: 0xad0461f0  sw          $a0, 0x61F0($t0)
    ctx->pc = 0x182644u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 25072), GPR_U32(ctx, 4));
    // 0x182648: 0x0  nop
    ctx->pc = 0x182648u;
    // NOP
    // 0x18264c: 0x805b71a  j           func_16DC68
    ctx->pc = 0x18264Cu;
    ctx->pc = 0x182650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18264Cu;
            // 0x182650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DC68u;
    if (runtime->hasFunction(0x16DC68u)) {
        auto targetFn = runtime->lookupFunction(0x16DC68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016DC68_0x16dc68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x182654u;
    // 0x182654: 0x0  nop
    ctx->pc = 0x182654u;
    // NOP
}
