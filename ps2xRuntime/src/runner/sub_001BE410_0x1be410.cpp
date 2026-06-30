#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE410
// Address: 0x1be410 - 0x1be5e0
void sub_001BE410_0x1be410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE410_0x1be410");
#endif

    switch (ctx->pc) {
        case 0x1be434u: goto label_1be434;
        case 0x1be444u: goto label_1be444;
        case 0x1be458u: goto label_1be458;
        case 0x1be47cu: goto label_1be47c;
        case 0x1be484u: goto label_1be484;
        case 0x1be48cu: goto label_1be48c;
        case 0x1be494u: goto label_1be494;
        case 0x1be4b0u: goto label_1be4b0;
        case 0x1be4c8u: goto label_1be4c8;
        case 0x1be4f8u: goto label_1be4f8;
        case 0x1be514u: goto label_1be514;
        case 0x1be538u: goto label_1be538;
        case 0x1be548u: goto label_1be548;
        case 0x1be550u: goto label_1be550;
        case 0x1be56cu: goto label_1be56c;
        case 0x1be594u: goto label_1be594;
        case 0x1be59cu: goto label_1be59c;
        default: break;
    }

    ctx->pc = 0x1be410u;

    // 0x1be410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be41c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1be41cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1be420: 0x26109d38  addiu       $s0, $s0, -0x62C8
    ctx->pc = 0x1be420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942008));
    // 0x1be424: 0x24060508  addiu       $a2, $zero, 0x508
    ctx->pc = 0x1be424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x1be428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1be428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1be42c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1BE42Cu;
    SET_GPR_U32(ctx, 31, 0x1BE434u);
    ctx->pc = 0x1BE430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE42Cu;
            // 0x1be430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE434u; }
        if (ctx->pc != 0x1BE434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE434u; }
        if (ctx->pc != 0x1BE434u) { return; }
    }
    ctx->pc = 0x1BE434u;
label_1be434:
    // 0x1be434: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1be434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be438: 0x0  nop
    ctx->pc = 0x1be438u;
    // NOP
    // 0x1be43c: 0xc06f9dc  jal         func_1BE770
    ctx->pc = 0x1BE43Cu;
    SET_GPR_U32(ctx, 31, 0x1BE444u);
    ctx->pc = 0x1BE440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE43Cu;
            // 0x1be440: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE770u;
    if (runtime->hasFunction(0x1BE770u)) {
        auto targetFn = runtime->lookupFunction(0x1BE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE444u; }
        if (ctx->pc != 0x1BE444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE770_0x1be770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE444u; }
        if (ctx->pc != 0x1BE444u) { return; }
    }
    ctx->pc = 0x1BE444u;
label_1be444:
    // 0x1be444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be448: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1be448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be44c: 0x80622ec  j           func_188BB0
    ctx->pc = 0x1BE44Cu;
    ctx->pc = 0x1BE450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE44Cu;
            // 0x1be450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188BB0u;
    {
        auto targetFn = runtime->lookupFunction(0x188BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BE454u;
    // 0x1be454: 0x0  nop
    ctx->pc = 0x1be454u;
    // NOP
label_1be458:
    // 0x1be458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be45c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1be45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1be460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be464: 0x24509d30  addiu       $s0, $v0, -0x62D0
    ctx->pc = 0x1be464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x1be468: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1be468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be46c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BE46Cu;
    {
        const bool branch_taken_0x1be46c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BE470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE46Cu;
            // 0x1be470: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be46c) {
            ctx->pc = 0x1BE4A0u;
            goto label_1be4a0;
        }
    }
    ctx->pc = 0x1BE474u;
    // 0x1be474: 0xc06fb5a  jal         func_1BED68
    ctx->pc = 0x1BE474u;
    SET_GPR_U32(ctx, 31, 0x1BE47Cu);
    ctx->pc = 0x1BED68u;
    if (runtime->hasFunction(0x1BED68u)) {
        auto targetFn = runtime->lookupFunction(0x1BED68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE47Cu; }
        if (ctx->pc != 0x1BE47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BED68_0x1bed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE47Cu; }
        if (ctx->pc != 0x1BE47Cu) { return; }
    }
    ctx->pc = 0x1BE47Cu;
label_1be47c:
    // 0x1be47c: 0xc06f4e8  jal         func_1BD3A0
    ctx->pc = 0x1BE47Cu;
    SET_GPR_U32(ctx, 31, 0x1BE484u);
    ctx->pc = 0x1BD3A0u;
    if (runtime->hasFunction(0x1BD3A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BD3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE484u; }
        if (ctx->pc != 0x1BE484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD3A0_0x1bd3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE484u; }
        if (ctx->pc != 0x1BE484u) { return; }
    }
    ctx->pc = 0x1BE484u;
label_1be484:
    // 0x1be484: 0xc06fb3e  jal         func_1BECF8
    ctx->pc = 0x1BE484u;
    SET_GPR_U32(ctx, 31, 0x1BE48Cu);
    ctx->pc = 0x1BECF8u;
    if (runtime->hasFunction(0x1BECF8u)) {
        auto targetFn = runtime->lookupFunction(0x1BECF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE48Cu; }
        if (ctx->pc != 0x1BE48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BECF8_0x1becf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE48Cu; }
        if (ctx->pc != 0x1BE48Cu) { return; }
    }
    ctx->pc = 0x1BE48Cu;
label_1be48c:
    // 0x1be48c: 0xc0622f6  jal         func_188BD8
    ctx->pc = 0x1BE48Cu;
    SET_GPR_U32(ctx, 31, 0x1BE494u);
    ctx->pc = 0x188BD8u;
    if (runtime->hasFunction(0x188BD8u)) {
        auto targetFn = runtime->lookupFunction(0x188BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE494u; }
        if (ctx->pc != 0x1BE494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188BD8_0x188bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE494u; }
        if (ctx->pc != 0x1BE494u) { return; }
    }
    ctx->pc = 0x1BE494u;
label_1be494:
    // 0x1be494: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1be494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be498: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1be498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1be49c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1be49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1be4a0:
    // 0x1be4a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be4a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1be4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE4A8u;
            // 0x1be4ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE4B0u;
label_1be4b0:
    // 0x1be4b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1be4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1be4b4: 0x24429d40  addiu       $v0, $v0, -0x62C0
    ctx->pc = 0x1be4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942016));
    // 0x1be4b8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1be4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1be4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE4BCu;
            // 0x1be4c0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE4C4u;
    // 0x1be4c4: 0x0  nop
    ctx->pc = 0x1be4c4u;
    // NOP
label_1be4c8:
    // 0x1be4c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be4cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be4d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1be4d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be4d8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1be4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1be4e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1be4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1be4e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1be4e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1be4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1be4ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1be4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1be4f0: 0xc06f978  jal         func_1BE5E0
    ctx->pc = 0x1BE4F0u;
    SET_GPR_U32(ctx, 31, 0x1BE4F8u);
    ctx->pc = 0x1BE4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE4F0u;
            // 0x1be4f4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE5E0u;
    if (runtime->hasFunction(0x1BE5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4F8u; }
        if (ctx->pc != 0x1BE4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE5E0_0x1be5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4F8u; }
        if (ctx->pc != 0x1BE4F8u) { return; }
    }
    ctx->pc = 0x1BE4F8u;
label_1be4f8:
    // 0x1be4f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1be4f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be504: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BE504u;
    {
        const bool branch_taken_0x1be504 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE504u;
            // 0x1be508: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be504) {
            ctx->pc = 0x1BE5BCu;
            goto label_1be5bc;
        }
    }
    ctx->pc = 0x1BE50Cu;
    // 0x1be50c: 0xc06f9b4  jal         func_1BE6D0
    ctx->pc = 0x1BE50Cu;
    SET_GPR_U32(ctx, 31, 0x1BE514u);
    ctx->pc = 0x1BE6D0u;
    if (runtime->hasFunction(0x1BE6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE514u; }
        if (ctx->pc != 0x1BE514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6D0_0x1be6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE514u; }
        if (ctx->pc != 0x1BE514u) { return; }
    }
    ctx->pc = 0x1BE514u;
label_1be514:
    // 0x1be514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be518: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1be518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be51c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1be51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be520: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE520u;
    {
        const bool branch_taken_0x1be520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BE524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE520u;
            // 0x1be524: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be520) {
            ctx->pc = 0x1BE540u;
            goto label_1be540;
        }
    }
    ctx->pc = 0x1BE528u;
    // 0x1be528: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1be528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1be52c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be530: 0xc06f9cc  jal         func_1BE730
    ctx->pc = 0x1BE530u;
    SET_GPR_U32(ctx, 31, 0x1BE538u);
    ctx->pc = 0x1BE534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE530u;
            // 0x1be534: 0x24c6b580  addiu       $a2, $a2, -0x4A80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE538u; }
        if (ctx->pc != 0x1BE538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE730_0x1be730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE538u; }
        if (ctx->pc != 0x1BE538u) { return; }
    }
    ctx->pc = 0x1BE538u;
label_1be538:
    // 0x1be538: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1BE538u;
    {
        const bool branch_taken_0x1be538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE538u;
            // 0x1be53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be538) {
            ctx->pc = 0x1BE5BCu;
            goto label_1be5bc;
        }
    }
    ctx->pc = 0x1BE540u;
label_1be540:
    // 0x1be540: 0xc06f98c  jal         func_1BE630
    ctx->pc = 0x1BE540u;
    SET_GPR_U32(ctx, 31, 0x1BE548u);
    ctx->pc = 0x1BE544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE540u;
            // 0x1be544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE630u;
    if (runtime->hasFunction(0x1BE630u)) {
        auto targetFn = runtime->lookupFunction(0x1BE630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE548u; }
        if (ctx->pc != 0x1BE548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE630_0x1be630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE548u; }
        if (ctx->pc != 0x1BE548u) { return; }
    }
    ctx->pc = 0x1BE548u;
label_1be548:
    // 0x1be548: 0xc06fb5c  jal         func_1BED70
    ctx->pc = 0x1BE548u;
    SET_GPR_U32(ctx, 31, 0x1BE550u);
    ctx->pc = 0x1BED70u;
    if (runtime->hasFunction(0x1BED70u)) {
        auto targetFn = runtime->lookupFunction(0x1BED70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE550u; }
        if (ctx->pc != 0x1BE550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BED70_0x1bed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE550u; }
        if (ctx->pc != 0x1BE550u) { return; }
    }
    ctx->pc = 0x1BE550u;
label_1be550:
    // 0x1be550: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1be550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1be554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be558: 0x24c6b5b0  addiu       $a2, $a2, -0x4A50
    ctx->pc = 0x1be558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948272));
    // 0x1be55c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE55Cu;
    {
        const bool branch_taken_0x1be55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE55Cu;
            // 0x1be560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be55c) {
            ctx->pc = 0x1BE58Cu;
            goto label_1be58c;
        }
    }
    ctx->pc = 0x1BE564u;
    // 0x1be564: 0xc06f4ea  jal         func_1BD3A8
    ctx->pc = 0x1BE564u;
    SET_GPR_U32(ctx, 31, 0x1BE56Cu);
    ctx->pc = 0x1BE568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE564u;
            // 0x1be568: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD3A8u;
    if (runtime->hasFunction(0x1BD3A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BD3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE56Cu; }
        if (ctx->pc != 0x1BE56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD3A8_0x1bd3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE56Cu; }
        if (ctx->pc != 0x1BE56Cu) { return; }
    }
    ctx->pc = 0x1BE56Cu;
label_1be56c:
    // 0x1be56c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1be56cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1be570: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1be570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be574: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1be574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1be578: 0x24489d38  addiu       $t0, $v0, -0x62C8
    ctx->pc = 0x1be578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942008));
    // 0x1be57c: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30
    ctx->pc = 0x1be57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
    // 0x1be580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be584: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE584u;
    {
        const bool branch_taken_0x1be584 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE584u;
            // 0x1be588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be584) {
            ctx->pc = 0x1BE5A8u;
            goto label_1be5a8;
        }
    }
    ctx->pc = 0x1BE58Cu;
label_1be58c:
    // 0x1be58c: 0xc06f9cc  jal         func_1BE730
    ctx->pc = 0x1BE58Cu;
    SET_GPR_U32(ctx, 31, 0x1BE594u);
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE594u; }
        if (ctx->pc != 0x1BE594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE730_0x1be730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE594u; }
        if (ctx->pc != 0x1BE594u) { return; }
    }
    ctx->pc = 0x1BE594u;
label_1be594:
    // 0x1be594: 0xc06f9b8  jal         func_1BE6E0
    ctx->pc = 0x1BE594u;
    SET_GPR_U32(ctx, 31, 0x1BE59Cu);
    ctx->pc = 0x1BE598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE594u;
            // 0x1be598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6E0u;
    if (runtime->hasFunction(0x1BE6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE59Cu; }
        if (ctx->pc != 0x1BE59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6E0_0x1be6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE59Cu; }
        if (ctx->pc != 0x1BE59Cu) { return; }
    }
    ctx->pc = 0x1BE59Cu;
label_1be59c:
    // 0x1be59c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE59Cu;
    {
        const bool branch_taken_0x1be59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE59Cu;
            // 0x1be5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be59c) {
            ctx->pc = 0x1BE5BCu;
            goto label_1be5bc;
        }
    }
    ctx->pc = 0x1BE5A4u;
    // 0x1be5a4: 0x0  nop
    ctx->pc = 0x1be5a4u;
    // NOP
label_1be5a8:
    // 0x1be5a8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1be5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1be5ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1be5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be5b0: 0xae470030  sw          $a3, 0x30($s2)
    ctx->pc = 0x1be5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 7));
    // 0x1be5b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1be5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1be5b8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1be5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_1be5bc:
    // 0x1be5bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be5c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be5c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be5c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be5c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be5c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1be5c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be5cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1be5ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be5d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1be5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1be5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE5D4u;
            // 0x1be5d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE5DCu;
    // 0x1be5dc: 0x0  nop
    ctx->pc = 0x1be5dcu;
    // NOP
}
