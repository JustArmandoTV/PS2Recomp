#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C57D0
// Address: 0x2c57d0 - 0x2c5950
void sub_002C57D0_0x2c57d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C57D0_0x2c57d0");
#endif

    switch (ctx->pc) {
        case 0x2c57d0u: goto label_2c57d0;
        case 0x2c57d4u: goto label_2c57d4;
        case 0x2c57d8u: goto label_2c57d8;
        case 0x2c57dcu: goto label_2c57dc;
        case 0x2c57e0u: goto label_2c57e0;
        case 0x2c57e4u: goto label_2c57e4;
        case 0x2c57e8u: goto label_2c57e8;
        case 0x2c57ecu: goto label_2c57ec;
        case 0x2c57f0u: goto label_2c57f0;
        case 0x2c57f4u: goto label_2c57f4;
        case 0x2c57f8u: goto label_2c57f8;
        case 0x2c57fcu: goto label_2c57fc;
        case 0x2c5800u: goto label_2c5800;
        case 0x2c5804u: goto label_2c5804;
        case 0x2c5808u: goto label_2c5808;
        case 0x2c580cu: goto label_2c580c;
        case 0x2c5810u: goto label_2c5810;
        case 0x2c5814u: goto label_2c5814;
        case 0x2c5818u: goto label_2c5818;
        case 0x2c581cu: goto label_2c581c;
        case 0x2c5820u: goto label_2c5820;
        case 0x2c5824u: goto label_2c5824;
        case 0x2c5828u: goto label_2c5828;
        case 0x2c582cu: goto label_2c582c;
        case 0x2c5830u: goto label_2c5830;
        case 0x2c5834u: goto label_2c5834;
        case 0x2c5838u: goto label_2c5838;
        case 0x2c583cu: goto label_2c583c;
        case 0x2c5840u: goto label_2c5840;
        case 0x2c5844u: goto label_2c5844;
        case 0x2c5848u: goto label_2c5848;
        case 0x2c584cu: goto label_2c584c;
        case 0x2c5850u: goto label_2c5850;
        case 0x2c5854u: goto label_2c5854;
        case 0x2c5858u: goto label_2c5858;
        case 0x2c585cu: goto label_2c585c;
        case 0x2c5860u: goto label_2c5860;
        case 0x2c5864u: goto label_2c5864;
        case 0x2c5868u: goto label_2c5868;
        case 0x2c586cu: goto label_2c586c;
        case 0x2c5870u: goto label_2c5870;
        case 0x2c5874u: goto label_2c5874;
        case 0x2c5878u: goto label_2c5878;
        case 0x2c587cu: goto label_2c587c;
        case 0x2c5880u: goto label_2c5880;
        case 0x2c5884u: goto label_2c5884;
        case 0x2c5888u: goto label_2c5888;
        case 0x2c588cu: goto label_2c588c;
        case 0x2c5890u: goto label_2c5890;
        case 0x2c5894u: goto label_2c5894;
        case 0x2c5898u: goto label_2c5898;
        case 0x2c589cu: goto label_2c589c;
        case 0x2c58a0u: goto label_2c58a0;
        case 0x2c58a4u: goto label_2c58a4;
        case 0x2c58a8u: goto label_2c58a8;
        case 0x2c58acu: goto label_2c58ac;
        case 0x2c58b0u: goto label_2c58b0;
        case 0x2c58b4u: goto label_2c58b4;
        case 0x2c58b8u: goto label_2c58b8;
        case 0x2c58bcu: goto label_2c58bc;
        case 0x2c58c0u: goto label_2c58c0;
        case 0x2c58c4u: goto label_2c58c4;
        case 0x2c58c8u: goto label_2c58c8;
        case 0x2c58ccu: goto label_2c58cc;
        case 0x2c58d0u: goto label_2c58d0;
        case 0x2c58d4u: goto label_2c58d4;
        case 0x2c58d8u: goto label_2c58d8;
        case 0x2c58dcu: goto label_2c58dc;
        case 0x2c58e0u: goto label_2c58e0;
        case 0x2c58e4u: goto label_2c58e4;
        case 0x2c58e8u: goto label_2c58e8;
        case 0x2c58ecu: goto label_2c58ec;
        case 0x2c58f0u: goto label_2c58f0;
        case 0x2c58f4u: goto label_2c58f4;
        case 0x2c58f8u: goto label_2c58f8;
        case 0x2c58fcu: goto label_2c58fc;
        case 0x2c5900u: goto label_2c5900;
        case 0x2c5904u: goto label_2c5904;
        case 0x2c5908u: goto label_2c5908;
        case 0x2c590cu: goto label_2c590c;
        case 0x2c5910u: goto label_2c5910;
        case 0x2c5914u: goto label_2c5914;
        case 0x2c5918u: goto label_2c5918;
        case 0x2c591cu: goto label_2c591c;
        case 0x2c5920u: goto label_2c5920;
        case 0x2c5924u: goto label_2c5924;
        case 0x2c5928u: goto label_2c5928;
        case 0x2c592cu: goto label_2c592c;
        case 0x2c5930u: goto label_2c5930;
        case 0x2c5934u: goto label_2c5934;
        case 0x2c5938u: goto label_2c5938;
        case 0x2c593cu: goto label_2c593c;
        case 0x2c5940u: goto label_2c5940;
        case 0x2c5944u: goto label_2c5944;
        case 0x2c5948u: goto label_2c5948;
        case 0x2c594cu: goto label_2c594c;
        default: break;
    }

    ctx->pc = 0x2c57d0u;

label_2c57d0:
    // 0x2c57d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c57d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c57d4:
    // 0x2c57d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c57d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c57d8:
    // 0x2c57d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c57d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c57dc:
    // 0x2c57dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c57dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c57e0:
    // 0x2c57e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c57e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c57e4:
    // 0x2c57e4: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2c57e8:
    if (ctx->pc == 0x2C57E8u) {
        ctx->pc = 0x2C57E8u;
            // 0x2c57e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C57ECu;
        goto label_2c57ec;
    }
    ctx->pc = 0x2C57E4u;
    {
        const bool branch_taken_0x2c57e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C57E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57E4u;
            // 0x2c57e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57e4) {
            ctx->pc = 0x2C592Cu;
            goto label_2c592c;
        }
    }
    ctx->pc = 0x2C57ECu;
label_2c57ec:
    // 0x2c57ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c57ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c57f0:
    // 0x2c57f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c57f4:
    // 0x2c57f4: 0x24630d00  addiu       $v1, $v1, 0xD00
    ctx->pc = 0x2c57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
label_2c57f8:
    // 0x2c57f8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c57fc:
    // 0x2c57fc: 0x24420d38  addiu       $v0, $v0, 0xD38
    ctx->pc = 0x2c57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3384));
label_2c5800:
    // 0x2c5800: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c5800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c5804:
    // 0x2c5804: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c5804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c5808:
    // 0x2c5808: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c5808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c580c:
    // 0x2c580c: 0xc0407c0  jal         func_101F00
label_2c5810:
    if (ctx->pc == 0x2C5810u) {
        ctx->pc = 0x2C5810u;
            // 0x2c5810: 0x24a54cc0  addiu       $a1, $a1, 0x4CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19648));
        ctx->pc = 0x2C5814u;
        goto label_2c5814;
    }
    ctx->pc = 0x2C580Cu;
    SET_GPR_U32(ctx, 31, 0x2C5814u);
    ctx->pc = 0x2C5810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C580Cu;
            // 0x2c5810: 0x24a54cc0  addiu       $a1, $a1, 0x4CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5814u; }
        if (ctx->pc != 0x2C5814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5814u; }
        if (ctx->pc != 0x2C5814u) { return; }
    }
    ctx->pc = 0x2C5814u;
label_2c5814:
    // 0x2c5814: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c5814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c5818:
    // 0x2c5818: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c581c:
    if (ctx->pc == 0x2C581Cu) {
        ctx->pc = 0x2C581Cu;
            // 0x2c581c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C5820u;
        goto label_2c5820;
    }
    ctx->pc = 0x2C5818u;
    {
        const bool branch_taken_0x2c5818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5818) {
            ctx->pc = 0x2C581Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5818u;
            // 0x2c581c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5840u;
            goto label_2c5840;
        }
    }
    ctx->pc = 0x2C5820u;
label_2c5820:
    // 0x2c5820: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2c5820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2c5824:
    // 0x2c5824: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c5828:
    if (ctx->pc == 0x2C5828u) {
        ctx->pc = 0x2C5828u;
            // 0x2c5828: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2C582Cu;
        goto label_2c582c;
    }
    ctx->pc = 0x2C5824u;
    {
        const bool branch_taken_0x2c5824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5824) {
            ctx->pc = 0x2C5828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5824u;
            // 0x2c5828: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C583Cu;
            goto label_2c583c;
        }
    }
    ctx->pc = 0x2C582Cu;
label_2c582c:
    // 0x2c582c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c582cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c5830:
    // 0x2c5830: 0xc0407c0  jal         func_101F00
label_2c5834:
    if (ctx->pc == 0x2C5834u) {
        ctx->pc = 0x2C5834u;
            // 0x2c5834: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x2C5838u;
        goto label_2c5838;
    }
    ctx->pc = 0x2C5830u;
    SET_GPR_U32(ctx, 31, 0x2C5838u);
    ctx->pc = 0x2C5834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5830u;
            // 0x2c5834: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5838u; }
        if (ctx->pc != 0x2C5838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5838u; }
        if (ctx->pc != 0x2C5838u) { return; }
    }
    ctx->pc = 0x2C5838u;
label_2c5838:
    // 0x2c5838: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2c5838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2c583c:
    // 0x2c583c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c5840:
    // 0x2c5840: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c5844:
    if (ctx->pc == 0x2C5844u) {
        ctx->pc = 0x2C5844u;
            // 0x2c5844: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C5848u;
        goto label_2c5848;
    }
    ctx->pc = 0x2C5840u;
    {
        const bool branch_taken_0x2c5840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5840) {
            ctx->pc = 0x2C5844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5840u;
            // 0x2c5844: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5870u;
            goto label_2c5870;
        }
    }
    ctx->pc = 0x2C5848u;
label_2c5848:
    // 0x2c5848: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c584c:
    if (ctx->pc == 0x2C584Cu) {
        ctx->pc = 0x2C5850u;
        goto label_2c5850;
    }
    ctx->pc = 0x2C5848u;
    {
        const bool branch_taken_0x2c5848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5848) {
            ctx->pc = 0x2C586Cu;
            goto label_2c586c;
        }
    }
    ctx->pc = 0x2C5850u;
label_2c5850:
    // 0x2c5850: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c5854:
    if (ctx->pc == 0x2C5854u) {
        ctx->pc = 0x2C5858u;
        goto label_2c5858;
    }
    ctx->pc = 0x2C5850u;
    {
        const bool branch_taken_0x2c5850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5850) {
            ctx->pc = 0x2C586Cu;
            goto label_2c586c;
        }
    }
    ctx->pc = 0x2C5858u;
label_2c5858:
    // 0x2c5858: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c5858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c585c:
    // 0x2c585c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c5860:
    if (ctx->pc == 0x2C5860u) {
        ctx->pc = 0x2C5864u;
        goto label_2c5864;
    }
    ctx->pc = 0x2C585Cu;
    {
        const bool branch_taken_0x2c585c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c585c) {
            ctx->pc = 0x2C586Cu;
            goto label_2c586c;
        }
    }
    ctx->pc = 0x2C5864u;
label_2c5864:
    // 0x2c5864: 0xc0400a8  jal         func_1002A0
label_2c5868:
    if (ctx->pc == 0x2C5868u) {
        ctx->pc = 0x2C586Cu;
        goto label_2c586c;
    }
    ctx->pc = 0x2C5864u;
    SET_GPR_U32(ctx, 31, 0x2C586Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C586Cu; }
        if (ctx->pc != 0x2C586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C586Cu; }
        if (ctx->pc != 0x2C586Cu) { return; }
    }
    ctx->pc = 0x2C586Cu;
label_2c586c:
    // 0x2c586c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c5870:
    // 0x2c5870: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c5874:
    if (ctx->pc == 0x2C5874u) {
        ctx->pc = 0x2C5874u;
            // 0x2c5874: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C5878u;
        goto label_2c5878;
    }
    ctx->pc = 0x2C5870u;
    {
        const bool branch_taken_0x2c5870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5870) {
            ctx->pc = 0x2C5874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5870u;
            // 0x2c5874: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C58A0u;
            goto label_2c58a0;
        }
    }
    ctx->pc = 0x2C5878u;
label_2c5878:
    // 0x2c5878: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c587c:
    if (ctx->pc == 0x2C587Cu) {
        ctx->pc = 0x2C5880u;
        goto label_2c5880;
    }
    ctx->pc = 0x2C5878u;
    {
        const bool branch_taken_0x2c5878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5878) {
            ctx->pc = 0x2C589Cu;
            goto label_2c589c;
        }
    }
    ctx->pc = 0x2C5880u;
label_2c5880:
    // 0x2c5880: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c5884:
    if (ctx->pc == 0x2C5884u) {
        ctx->pc = 0x2C5888u;
        goto label_2c5888;
    }
    ctx->pc = 0x2C5880u;
    {
        const bool branch_taken_0x2c5880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5880) {
            ctx->pc = 0x2C589Cu;
            goto label_2c589c;
        }
    }
    ctx->pc = 0x2C5888u;
label_2c5888:
    // 0x2c5888: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c5888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c588c:
    // 0x2c588c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c5890:
    if (ctx->pc == 0x2C5890u) {
        ctx->pc = 0x2C5894u;
        goto label_2c5894;
    }
    ctx->pc = 0x2C588Cu;
    {
        const bool branch_taken_0x2c588c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c588c) {
            ctx->pc = 0x2C589Cu;
            goto label_2c589c;
        }
    }
    ctx->pc = 0x2C5894u;
label_2c5894:
    // 0x2c5894: 0xc0400a8  jal         func_1002A0
label_2c5898:
    if (ctx->pc == 0x2C5898u) {
        ctx->pc = 0x2C589Cu;
        goto label_2c589c;
    }
    ctx->pc = 0x2C5894u;
    SET_GPR_U32(ctx, 31, 0x2C589Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C589Cu; }
        if (ctx->pc != 0x2C589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C589Cu; }
        if (ctx->pc != 0x2C589Cu) { return; }
    }
    ctx->pc = 0x2C589Cu;
label_2c589c:
    // 0x2c589c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c58a0:
    // 0x2c58a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c58a4:
    if (ctx->pc == 0x2C58A4u) {
        ctx->pc = 0x2C58A8u;
        goto label_2c58a8;
    }
    ctx->pc = 0x2C58A0u;
    {
        const bool branch_taken_0x2c58a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c58a0) {
            ctx->pc = 0x2C58BCu;
            goto label_2c58bc;
        }
    }
    ctx->pc = 0x2C58A8u;
label_2c58a8:
    // 0x2c58a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c58a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c58ac:
    // 0x2c58ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c58acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c58b0:
    // 0x2c58b0: 0x24630ce8  addiu       $v1, $v1, 0xCE8
    ctx->pc = 0x2c58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3304));
label_2c58b4:
    // 0x2c58b4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c58b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c58b8:
    // 0x2c58b8: 0xac400de0  sw          $zero, 0xDE0($v0)
    ctx->pc = 0x2c58b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3552), GPR_U32(ctx, 0));
label_2c58bc:
    // 0x2c58bc: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c58c0:
    if (ctx->pc == 0x2C58C0u) {
        ctx->pc = 0x2C58C0u;
            // 0x2c58c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C58C4u;
        goto label_2c58c4;
    }
    ctx->pc = 0x2C58BCu;
    {
        const bool branch_taken_0x2c58bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c58bc) {
            ctx->pc = 0x2C58C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58BCu;
            // 0x2c58c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5918u;
            goto label_2c5918;
        }
    }
    ctx->pc = 0x2C58C4u;
label_2c58c4:
    // 0x2c58c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c58c8:
    // 0x2c58c8: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c58cc:
    // 0x2c58cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c58d0:
    // 0x2c58d0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c58d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c58d4:
    // 0x2c58d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c58d8:
    if (ctx->pc == 0x2C58D8u) {
        ctx->pc = 0x2C58D8u;
            // 0x2c58d8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C58DCu;
        goto label_2c58dc;
    }
    ctx->pc = 0x2C58D4u;
    {
        const bool branch_taken_0x2c58d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c58d4) {
            ctx->pc = 0x2C58D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58D4u;
            // 0x2c58d8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C58F0u;
            goto label_2c58f0;
        }
    }
    ctx->pc = 0x2C58DCu;
label_2c58dc:
    // 0x2c58dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c58dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c58e0:
    // 0x2c58e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c58e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c58e4:
    // 0x2c58e4: 0x320f809  jalr        $t9
label_2c58e8:
    if (ctx->pc == 0x2C58E8u) {
        ctx->pc = 0x2C58E8u;
            // 0x2c58e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C58ECu;
        goto label_2c58ec;
    }
    ctx->pc = 0x2C58E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C58ECu);
        ctx->pc = 0x2C58E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58E4u;
            // 0x2c58e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C58ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C58ECu; }
            if (ctx->pc != 0x2C58ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2C58ECu;
label_2c58ec:
    // 0x2c58ec: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c58f0:
    // 0x2c58f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c58f4:
    if (ctx->pc == 0x2C58F4u) {
        ctx->pc = 0x2C58F4u;
            // 0x2c58f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C58F8u;
        goto label_2c58f8;
    }
    ctx->pc = 0x2C58F0u;
    {
        const bool branch_taken_0x2c58f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c58f0) {
            ctx->pc = 0x2C58F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58F0u;
            // 0x2c58f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C590Cu;
            goto label_2c590c;
        }
    }
    ctx->pc = 0x2C58F8u;
label_2c58f8:
    // 0x2c58f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c58f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c58fc:
    // 0x2c58fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c58fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c5900:
    // 0x2c5900: 0x320f809  jalr        $t9
label_2c5904:
    if (ctx->pc == 0x2C5904u) {
        ctx->pc = 0x2C5904u;
            // 0x2c5904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C5908u;
        goto label_2c5908;
    }
    ctx->pc = 0x2C5900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C5908u);
        ctx->pc = 0x2C5904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5900u;
            // 0x2c5904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C5908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C5908u; }
            if (ctx->pc != 0x2C5908u) { return; }
        }
        }
    }
    ctx->pc = 0x2C5908u;
label_2c5908:
    // 0x2c5908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c590c:
    // 0x2c590c: 0xc075bf8  jal         func_1D6FE0
label_2c5910:
    if (ctx->pc == 0x2C5910u) {
        ctx->pc = 0x2C5910u;
            // 0x2c5910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5914u;
        goto label_2c5914;
    }
    ctx->pc = 0x2C590Cu;
    SET_GPR_U32(ctx, 31, 0x2C5914u);
    ctx->pc = 0x2C5910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C590Cu;
            // 0x2c5910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5914u; }
        if (ctx->pc != 0x2C5914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5914u; }
        if (ctx->pc != 0x2C5914u) { return; }
    }
    ctx->pc = 0x2C5914u;
label_2c5914:
    // 0x2c5914: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c5914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c5918:
    // 0x2c5918: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c591c:
    // 0x2c591c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c5920:
    if (ctx->pc == 0x2C5920u) {
        ctx->pc = 0x2C5920u;
            // 0x2c5920: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5924u;
        goto label_2c5924;
    }
    ctx->pc = 0x2C591Cu;
    {
        const bool branch_taken_0x2c591c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c591c) {
            ctx->pc = 0x2C5920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C591Cu;
            // 0x2c5920: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5930u;
            goto label_2c5930;
        }
    }
    ctx->pc = 0x2C5924u;
label_2c5924:
    // 0x2c5924: 0xc0400a8  jal         func_1002A0
label_2c5928:
    if (ctx->pc == 0x2C5928u) {
        ctx->pc = 0x2C5928u;
            // 0x2c5928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C592Cu;
        goto label_2c592c;
    }
    ctx->pc = 0x2C5924u;
    SET_GPR_U32(ctx, 31, 0x2C592Cu);
    ctx->pc = 0x2C5928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5924u;
            // 0x2c5928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C592Cu; }
        if (ctx->pc != 0x2C592Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C592Cu; }
        if (ctx->pc != 0x2C592Cu) { return; }
    }
    ctx->pc = 0x2C592Cu;
label_2c592c:
    // 0x2c592c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c592cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c5930:
    // 0x2c5930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c5934:
    // 0x2c5934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5938:
    // 0x2c5938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c593c:
    // 0x2c593c: 0x3e00008  jr          $ra
label_2c5940:
    if (ctx->pc == 0x2C5940u) {
        ctx->pc = 0x2C5940u;
            // 0x2c5940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C5944u;
        goto label_2c5944;
    }
    ctx->pc = 0x2C593Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C593Cu;
            // 0x2c5940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5944u;
label_2c5944:
    // 0x2c5944: 0x0  nop
    ctx->pc = 0x2c5944u;
    // NOP
label_2c5948:
    // 0x2c5948: 0x0  nop
    ctx->pc = 0x2c5948u;
    // NOP
label_2c594c:
    // 0x2c594c: 0x0  nop
    ctx->pc = 0x2c594cu;
    // NOP
}
