#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001770B8
// Address: 0x1770b8 - 0x177238
void sub_001770B8_0x1770b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001770B8_0x1770b8");
#endif

    switch (ctx->pc) {
        case 0x1770b8u: goto label_1770b8;
        case 0x1770bcu: goto label_1770bc;
        case 0x1770c0u: goto label_1770c0;
        case 0x1770c4u: goto label_1770c4;
        case 0x1770c8u: goto label_1770c8;
        case 0x1770ccu: goto label_1770cc;
        case 0x1770d0u: goto label_1770d0;
        case 0x1770d4u: goto label_1770d4;
        case 0x1770d8u: goto label_1770d8;
        case 0x1770dcu: goto label_1770dc;
        case 0x1770e0u: goto label_1770e0;
        case 0x1770e4u: goto label_1770e4;
        case 0x1770e8u: goto label_1770e8;
        case 0x1770ecu: goto label_1770ec;
        case 0x1770f0u: goto label_1770f0;
        case 0x1770f4u: goto label_1770f4;
        case 0x1770f8u: goto label_1770f8;
        case 0x1770fcu: goto label_1770fc;
        case 0x177100u: goto label_177100;
        case 0x177104u: goto label_177104;
        case 0x177108u: goto label_177108;
        case 0x17710cu: goto label_17710c;
        case 0x177110u: goto label_177110;
        case 0x177114u: goto label_177114;
        case 0x177118u: goto label_177118;
        case 0x17711cu: goto label_17711c;
        case 0x177120u: goto label_177120;
        case 0x177124u: goto label_177124;
        case 0x177128u: goto label_177128;
        case 0x17712cu: goto label_17712c;
        case 0x177130u: goto label_177130;
        case 0x177134u: goto label_177134;
        case 0x177138u: goto label_177138;
        case 0x17713cu: goto label_17713c;
        case 0x177140u: goto label_177140;
        case 0x177144u: goto label_177144;
        case 0x177148u: goto label_177148;
        case 0x17714cu: goto label_17714c;
        case 0x177150u: goto label_177150;
        case 0x177154u: goto label_177154;
        case 0x177158u: goto label_177158;
        case 0x17715cu: goto label_17715c;
        case 0x177160u: goto label_177160;
        case 0x177164u: goto label_177164;
        case 0x177168u: goto label_177168;
        case 0x17716cu: goto label_17716c;
        case 0x177170u: goto label_177170;
        case 0x177174u: goto label_177174;
        case 0x177178u: goto label_177178;
        case 0x17717cu: goto label_17717c;
        case 0x177180u: goto label_177180;
        case 0x177184u: goto label_177184;
        case 0x177188u: goto label_177188;
        case 0x17718cu: goto label_17718c;
        case 0x177190u: goto label_177190;
        case 0x177194u: goto label_177194;
        case 0x177198u: goto label_177198;
        case 0x17719cu: goto label_17719c;
        case 0x1771a0u: goto label_1771a0;
        case 0x1771a4u: goto label_1771a4;
        case 0x1771a8u: goto label_1771a8;
        case 0x1771acu: goto label_1771ac;
        case 0x1771b0u: goto label_1771b0;
        case 0x1771b4u: goto label_1771b4;
        case 0x1771b8u: goto label_1771b8;
        case 0x1771bcu: goto label_1771bc;
        case 0x1771c0u: goto label_1771c0;
        case 0x1771c4u: goto label_1771c4;
        case 0x1771c8u: goto label_1771c8;
        case 0x1771ccu: goto label_1771cc;
        case 0x1771d0u: goto label_1771d0;
        case 0x1771d4u: goto label_1771d4;
        case 0x1771d8u: goto label_1771d8;
        case 0x1771dcu: goto label_1771dc;
        case 0x1771e0u: goto label_1771e0;
        case 0x1771e4u: goto label_1771e4;
        case 0x1771e8u: goto label_1771e8;
        case 0x1771ecu: goto label_1771ec;
        case 0x1771f0u: goto label_1771f0;
        case 0x1771f4u: goto label_1771f4;
        case 0x1771f8u: goto label_1771f8;
        case 0x1771fcu: goto label_1771fc;
        case 0x177200u: goto label_177200;
        case 0x177204u: goto label_177204;
        case 0x177208u: goto label_177208;
        case 0x17720cu: goto label_17720c;
        case 0x177210u: goto label_177210;
        case 0x177214u: goto label_177214;
        case 0x177218u: goto label_177218;
        case 0x17721cu: goto label_17721c;
        case 0x177220u: goto label_177220;
        case 0x177224u: goto label_177224;
        case 0x177228u: goto label_177228;
        case 0x17722cu: goto label_17722c;
        case 0x177230u: goto label_177230;
        case 0x177234u: goto label_177234;
        default: break;
    }

    ctx->pc = 0x1770b8u;

label_1770b8:
    // 0x1770b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1770b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1770bc:
    // 0x1770bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1770bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1770c0:
    // 0x1770c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1770c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1770c4:
    // 0x1770c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1770c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1770c8:
    // 0x1770c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1770c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1770cc:
    // 0x1770cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1770ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1770d0:
    // 0x1770d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1770d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1770d4:
    // 0x1770d4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1770d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1770d8:
    // 0x1770d8: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x1770d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1770dc:
    // 0x1770dc: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x1770dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1770e0:
    // 0x1770e0: 0xc05ba82  jal         func_16EA08
label_1770e4:
    if (ctx->pc == 0x1770E4u) {
        ctx->pc = 0x1770E4u;
            // 0x1770e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1770E8u;
        goto label_1770e8;
    }
    ctx->pc = 0x1770E0u;
    SET_GPR_U32(ctx, 31, 0x1770E8u);
    ctx->pc = 0x1770E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1770E0u;
            // 0x1770e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EA08u;
    if (runtime->hasFunction(0x16EA08u)) {
        auto targetFn = runtime->lookupFunction(0x16EA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770E8u; }
        if (ctx->pc != 0x1770E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EA08_0x16ea08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770E8u; }
        if (ctx->pc != 0x1770E8u) { return; }
    }
    ctx->pc = 0x1770E8u;
label_1770e8:
    // 0x1770e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1770e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1770ec:
    // 0x1770ec: 0xc05ba88  jal         func_16EA20
label_1770f0:
    if (ctx->pc == 0x1770F0u) {
        ctx->pc = 0x1770F0u;
            // 0x1770f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1770F4u;
        goto label_1770f4;
    }
    ctx->pc = 0x1770ECu;
    SET_GPR_U32(ctx, 31, 0x1770F4u);
    ctx->pc = 0x1770F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1770ECu;
            // 0x1770f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EA20u;
    if (runtime->hasFunction(0x16EA20u)) {
        auto targetFn = runtime->lookupFunction(0x16EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770F4u; }
        if (ctx->pc != 0x1770F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EA20_0x16ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770F4u; }
        if (ctx->pc != 0x1770F4u) { return; }
    }
    ctx->pc = 0x1770F4u;
label_1770f4:
    // 0x1770f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1770f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1770f8:
    // 0x1770f8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1770f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1770fc:
    // 0x1770fc: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x1770fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_177100:
    // 0x177100: 0x28432001  slti        $v1, $v0, 0x2001
    ctx->pc = 0x177100u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8193) ? 1 : 0);
label_177104:
    // 0x177104: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x177104u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_177108:
    // 0x177108: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x177108u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_17710c:
    // 0x17710c: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_177110:
    if (ctx->pc == 0x177110u) {
        ctx->pc = 0x177110u;
            // 0x177110: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x177114u;
        goto label_177114;
    }
    ctx->pc = 0x17710Cu;
    {
        const bool branch_taken_0x17710c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17710c) {
            ctx->pc = 0x177110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17710Cu;
            // 0x177110: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177140u;
            goto label_177140;
        }
    }
    ctx->pc = 0x177114u;
label_177114:
    // 0x177114: 0xc05c058  jal         func_170160
label_177118:
    if (ctx->pc == 0x177118u) {
        ctx->pc = 0x177118u;
            // 0x177118: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17711Cu;
        goto label_17711c;
    }
    ctx->pc = 0x177114u;
    SET_GPR_U32(ctx, 31, 0x17711Cu);
    ctx->pc = 0x177118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177114u;
            // 0x177118: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170160u;
    if (runtime->hasFunction(0x170160u)) {
        auto targetFn = runtime->lookupFunction(0x170160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17711Cu; }
        if (ctx->pc != 0x17711Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170160_0x170160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17711Cu; }
        if (ctx->pc != 0x17711Cu) { return; }
    }
    ctx->pc = 0x17711Cu;
label_17711c:
    // 0x17711c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x17711cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_177120:
    // 0x177120: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_177124:
    if (ctx->pc == 0x177124u) {
        ctx->pc = 0x177124u;
            // 0x177124: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x177128u;
        goto label_177128;
    }
    ctx->pc = 0x177120u;
    {
        const bool branch_taken_0x177120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177120) {
            ctx->pc = 0x177124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177120u;
            // 0x177124: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177140u;
            goto label_177140;
        }
    }
    ctx->pc = 0x177128u;
label_177128:
    // 0x177128: 0xc05bbd0  jal         func_16EF40
label_17712c:
    if (ctx->pc == 0x17712Cu) {
        ctx->pc = 0x17712Cu;
            // 0x17712c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x177130u;
        goto label_177130;
    }
    ctx->pc = 0x177128u;
    SET_GPR_U32(ctx, 31, 0x177130u);
    ctx->pc = 0x17712Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177128u;
            // 0x17712c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EF40u;
    if (runtime->hasFunction(0x16EF40u)) {
        auto targetFn = runtime->lookupFunction(0x16EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177130u; }
        if (ctx->pc != 0x177130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF40_0x16ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177130u; }
        if (ctx->pc != 0x177130u) { return; }
    }
    ctx->pc = 0x177130u;
label_177130:
    // 0x177130: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x177130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_177134:
    // 0x177134: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_177138:
    if (ctx->pc == 0x177138u) {
        ctx->pc = 0x17713Cu;
        goto label_17713c;
    }
    ctx->pc = 0x177134u;
    {
        const bool branch_taken_0x177134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x177134) {
            ctx->pc = 0x177184u;
            goto label_177184;
        }
    }
    ctx->pc = 0x17713Cu;
label_17713c:
    // 0x17713c: 0x82220070  lb          $v0, 0x70($s1)
    ctx->pc = 0x17713cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_177140:
    // 0x177140: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_177144:
    if (ctx->pc == 0x177144u) {
        ctx->pc = 0x177144u;
            // 0x177144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x177148u;
        goto label_177148;
    }
    ctx->pc = 0x177140u;
    {
        const bool branch_taken_0x177140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177140u;
            // 0x177144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177140) {
            ctx->pc = 0x177180u;
            goto label_177180;
        }
    }
    ctx->pc = 0x177148u;
label_177148:
    // 0x177148: 0x82220072  lb          $v0, 0x72($s1)
    ctx->pc = 0x177148u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_17714c:
    // 0x17714c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_177150:
    if (ctx->pc == 0x177150u) {
        ctx->pc = 0x177150u;
            // 0x177150: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x177154u;
        goto label_177154;
    }
    ctx->pc = 0x17714Cu;
    {
        const bool branch_taken_0x17714c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17714c) {
            ctx->pc = 0x177150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17714Cu;
            // 0x177150: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177178u;
            goto label_177178;
        }
    }
    ctx->pc = 0x177154u;
label_177154:
    // 0x177154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_177158:
    // 0x177158: 0xc05ba76  jal         func_16E9D8
label_17715c:
    if (ctx->pc == 0x17715Cu) {
        ctx->pc = 0x17715Cu;
            // 0x17715c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x177160u;
        goto label_177160;
    }
    ctx->pc = 0x177158u;
    SET_GPR_U32(ctx, 31, 0x177160u);
    ctx->pc = 0x17715Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177158u;
            // 0x17715c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D8u;
    if (runtime->hasFunction(0x16E9D8u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177160u; }
        if (ctx->pc != 0x177160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9D8_0x16e9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177160u; }
        if (ctx->pc != 0x177160u) { return; }
    }
    ctx->pc = 0x177160u;
label_177160:
    // 0x177160: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x177160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_177164:
    // 0x177164: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x177164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_177168:
    // 0x177168: 0x24429d88  addiu       $v0, $v0, -0x6278
    ctx->pc = 0x177168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942088));
label_17716c:
    // 0x17716c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_177170:
    // 0x177170: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x177170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_177174:
    // 0x177174: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x177174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_177178:
    // 0x177178: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x177178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_17717c:
    // 0x17717c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177180:
    // 0x177180: 0xa2220071  sb          $v0, 0x71($s1)
    ctx->pc = 0x177180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 2));
label_177184:
    // 0x177184: 0xc05bbd0  jal         func_16EF40
label_177188:
    if (ctx->pc == 0x177188u) {
        ctx->pc = 0x177188u;
            // 0x177188: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x17718Cu;
        goto label_17718c;
    }
    ctx->pc = 0x177184u;
    SET_GPR_U32(ctx, 31, 0x17718Cu);
    ctx->pc = 0x177188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177184u;
            // 0x177188: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EF40u;
    if (runtime->hasFunction(0x16EF40u)) {
        auto targetFn = runtime->lookupFunction(0x16EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17718Cu; }
        if (ctx->pc != 0x17718Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF40_0x16ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17718Cu; }
        if (ctx->pc != 0x17718Cu) { return; }
    }
    ctx->pc = 0x17718Cu;
label_17718c:
    // 0x17718c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_177190:
    // 0x177190: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_177194:
    if (ctx->pc == 0x177194u) {
        ctx->pc = 0x177194u;
            // 0x177194: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x177198u;
        goto label_177198;
    }
    ctx->pc = 0x177190u;
    {
        const bool branch_taken_0x177190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x177194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177190u;
            // 0x177194: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177190) {
            ctx->pc = 0x177218u;
            goto label_177218;
        }
    }
    ctx->pc = 0x177198u;
label_177198:
    // 0x177198: 0xc05ced8  jal         func_173B60
label_17719c:
    if (ctx->pc == 0x17719Cu) {
        ctx->pc = 0x17719Cu;
            // 0x17719c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1771A0u;
        goto label_1771a0;
    }
    ctx->pc = 0x177198u;
    SET_GPR_U32(ctx, 31, 0x1771A0u);
    ctx->pc = 0x17719Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177198u;
            // 0x17719c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B60u;
    if (runtime->hasFunction(0x173B60u)) {
        auto targetFn = runtime->lookupFunction(0x173B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771A0u; }
        if (ctx->pc != 0x1771A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B60_0x173b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771A0u; }
        if (ctx->pc != 0x1771A0u) { return; }
    }
    ctx->pc = 0x1771A0u;
label_1771a0:
    // 0x1771a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1771a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1771a4:
    // 0x1771a4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1771a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1771a8:
    // 0x1771a8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1771a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1771ac:
    // 0x1771ac: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
label_1771b0:
    if (ctx->pc == 0x1771B0u) {
        ctx->pc = 0x1771B0u;
            // 0x1771b0: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1771B4u;
        goto label_1771b4;
    }
    ctx->pc = 0x1771ACu;
    {
        const bool branch_taken_0x1771ac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1771B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1771ACu;
            // 0x1771b0: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771ac) {
            ctx->pc = 0x177214u;
            goto label_177214;
        }
    }
    ctx->pc = 0x1771B4u;
label_1771b4:
    // 0x1771b4: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x1771b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1771b8:
    // 0x1771b8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1771b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1771bc:
    // 0x1771bc: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1771bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1771c0:
    // 0x1771c0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1771c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1771c4:
    // 0x1771c4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1771c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1771c8:
    // 0x1771c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1771c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1771cc:
    // 0x1771cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1771ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1771d0:
    // 0x1771d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1771d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1771d4:
    // 0x1771d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1771d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1771d8:
    // 0x1771d8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1771d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1771dc:
    // 0x1771dc: 0x40f809  jalr        $v0
label_1771e0:
    if (ctx->pc == 0x1771E0u) {
        ctx->pc = 0x1771E0u;
            // 0x1771e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1771E4u;
        goto label_1771e4;
    }
    ctx->pc = 0x1771DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1771E4u);
        ctx->pc = 0x1771E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1771DCu;
            // 0x1771e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1771E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1771E4u; }
            if (ctx->pc != 0x1771E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1771E4u;
label_1771e4:
    // 0x1771e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1771e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1771e8:
    // 0x1771e8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1771e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1771ec:
    // 0x1771ec: 0xc04a576  jal         func_1295D8
label_1771f0:
    if (ctx->pc == 0x1771F0u) {
        ctx->pc = 0x1771F0u;
            // 0x1771f0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1771F4u;
        goto label_1771f4;
    }
    ctx->pc = 0x1771ECu;
    SET_GPR_U32(ctx, 31, 0x1771F4u);
    ctx->pc = 0x1771F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1771ECu;
            // 0x1771f0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771F4u; }
        if (ctx->pc != 0x1771F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771F4u; }
        if (ctx->pc != 0x1771F4u) { return; }
    }
    ctx->pc = 0x1771F4u;
label_1771f4:
    // 0x1771f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1771f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1771f8:
    // 0x1771f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1771f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1771fc:
    // 0x1771fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1771fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177200:
    // 0x177200: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x177200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_177204:
    // 0x177204: 0x40f809  jalr        $v0
label_177208:
    if (ctx->pc == 0x177208u) {
        ctx->pc = 0x177208u;
            // 0x177208: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17720Cu;
        goto label_17720c;
    }
    ctx->pc = 0x177204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17720Cu);
        ctx->pc = 0x177208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177204u;
            // 0x177208: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17720Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17720Cu; }
            if (ctx->pc != 0x17720Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17720Cu;
label_17720c:
    // 0x17720c: 0x5620ffec  bnel        $s1, $zero, . + 4 + (-0x14 << 2)
label_177210:
    if (ctx->pc == 0x177210u) {
        ctx->pc = 0x177210u;
            // 0x177210: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x177214u;
        goto label_177214;
    }
    ctx->pc = 0x17720Cu;
    {
        const bool branch_taken_0x17720c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17720c) {
            ctx->pc = 0x177210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17720Cu;
            // 0x177210: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1771C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1771c0;
        }
    }
    ctx->pc = 0x177214u;
label_177214:
    // 0x177214: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x177214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_177218:
    // 0x177218: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x177218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17721c:
    // 0x17721c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17721cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_177220:
    // 0x177220: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x177220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_177224:
    // 0x177224: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x177224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_177228:
    // 0x177228: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x177228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_17722c:
    // 0x17722c: 0x3e00008  jr          $ra
label_177230:
    if (ctx->pc == 0x177230u) {
        ctx->pc = 0x177230u;
            // 0x177230: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x177234u;
        goto label_177234;
    }
    ctx->pc = 0x17722Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17722Cu;
            // 0x177230: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177234u;
label_177234:
    // 0x177234: 0x0  nop
    ctx->pc = 0x177234u;
    // NOP
}
