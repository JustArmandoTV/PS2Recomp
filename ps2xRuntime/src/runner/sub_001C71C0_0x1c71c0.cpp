#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C71C0
// Address: 0x1c71c0 - 0x1c73a8
void sub_001C71C0_0x1c71c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C71C0_0x1c71c0");
#endif

    switch (ctx->pc) {
        case 0x1c71f8u: goto label_1c71f8;
        case 0x1c721cu: goto label_1c721c;
        case 0x1c7228u: goto label_1c7228;
        case 0x1c7250u: goto label_1c7250;
        case 0x1c72b8u: goto label_1c72b8;
        case 0x1c72c0u: goto label_1c72c0;
        case 0x1c72e4u: goto label_1c72e4;
        case 0x1c7300u: goto label_1c7300;
        default: break;
    }

    ctx->pc = 0x1c71c0u;

    // 0x1c71c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c71c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c71c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c71c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c71c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c71c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c71ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c71d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c71d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c71d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c71d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c71d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c71dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c71e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1c71e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c71e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c71e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c71e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c71ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c71ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c71f0: 0xc071716  jal         func_1C5C58
    ctx->pc = 0x1C71F0u;
    SET_GPR_U32(ctx, 31, 0x1C71F8u);
    ctx->pc = 0x1C71F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71F0u;
            // 0x1c71f4: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5C58u;
    if (runtime->hasFunction(0x1C5C58u)) {
        auto targetFn = runtime->lookupFunction(0x1C5C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71F8u; }
        if (ctx->pc != 0x1C71F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5C58_0x1c5c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71F8u; }
        if (ctx->pc != 0x1C71F8u) { return; }
    }
    ctx->pc = 0x1C71F8u;
label_1c71f8:
    // 0x1c71f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c71f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c71fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7200: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7204: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c7204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7208: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c7208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c720c: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C720Cu;
    {
        const bool branch_taken_0x1c720c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C720Cu;
            // 0x1c7210: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c720c) {
            ctx->pc = 0x1C7220u;
            goto label_1c7220;
        }
    }
    ctx->pc = 0x1C7214u;
    // 0x1c7214: 0xc071ba2  jal         func_1C6E88
    ctx->pc = 0x1C7214u;
    SET_GPR_U32(ctx, 31, 0x1C721Cu);
    ctx->pc = 0x1C6E88u;
    if (runtime->hasFunction(0x1C6E88u)) {
        auto targetFn = runtime->lookupFunction(0x1C6E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C721Cu; }
        if (ctx->pc != 0x1C721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6E88_0x1c6e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C721Cu; }
        if (ctx->pc != 0x1C721Cu) { return; }
    }
    ctx->pc = 0x1C721Cu;
label_1c721c:
    // 0x1c721c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c721cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7220:
    // 0x1c7220: 0xc07172a  jal         func_1C5CA8
    ctx->pc = 0x1C7220u;
    SET_GPR_U32(ctx, 31, 0x1C7228u);
    ctx->pc = 0x1C5CA8u;
    if (runtime->hasFunction(0x1C5CA8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7228u; }
        if (ctx->pc != 0x1C7228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5CA8_0x1c5ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7228u; }
        if (ctx->pc != 0x1C7228u) { return; }
    }
    ctx->pc = 0x1C7228u;
label_1c7228:
    // 0x1c7228: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1c7228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c722c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c722cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7234: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c7234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7238: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c7238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c723c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c723cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7240: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c7240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c7244: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c7244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7248: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C724Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7248u;
            // 0x1c724c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7250u;
label_1c7250:
    // 0x1c7250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c7250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c7254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c725c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c725cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7260: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c7260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c7264: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1c7264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7268: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c7268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c726c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c726cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7270: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c7270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c7274: 0x24150800  addiu       $s5, $zero, 0x800
    ctx->pc = 0x1c7274u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1c7278: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1c7278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1c727c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1c727cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7280: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1c7280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1c7284: 0x5f2c0  sll         $fp, $a1, 11
    ctx->pc = 0x1c7284u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x1c7288: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c7288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c728c: 0x26f20018  addiu       $s2, $s7, 0x18
    ctx->pc = 0x1c728cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x1c7290: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1c7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1c7294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c7294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7298: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1c7298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1c729c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c729cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72a0: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x1c72a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
    // 0x1c72a4: 0x8ef60004  lw          $s6, 0x4($s7)
    ctx->pc = 0x1c72a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1c72a8: 0x163040  sll         $a2, $s6, 1
    ctx->pc = 0x1c72a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1c72ac: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x1c72acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x1c72b0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C72B0u;
    SET_GPR_U32(ctx, 31, 0x1C72B8u);
    ctx->pc = 0x1C72B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72B0u;
            // 0x1c72b4: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72B8u; }
        if (ctx->pc != 0x1C72B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72B8u; }
        if (ctx->pc != 0x1C72B8u) { return; }
    }
    ctx->pc = 0x1C72B8u;
label_1c72b8:
    // 0x1c72b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C72B8u;
    {
        const bool branch_taken_0x1c72b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72B8u;
            // 0x1c72bc: 0x296982a  slt         $s3, $s4, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72b8) {
            ctx->pc = 0x1C72E4u;
            goto label_1c72e4;
        }
    }
    ctx->pc = 0x1C72C0u;
label_1c72c0:
    // 0x1c72c0: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C72C0u;
    {
        const bool branch_taken_0x1c72c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c72c0) {
            ctx->pc = 0x1C72C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72C0u;
            // 0x1c72c4: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C72C8u;
            goto label_1c72c8;
        }
    }
    ctx->pc = 0x1C72C8u;
label_1c72c8:
    // 0x1c72c8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1c72c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c72cc: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x1c72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1c72d0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c72d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c72d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c72d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c72d8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C72D8u;
    {
        const bool branch_taken_0x1c72d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72D8u;
            // 0x1c72dc: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72d8) {
            ctx->pc = 0x1C7340u;
            goto label_1c7340;
        }
    }
    ctx->pc = 0x1C72E0u;
    // 0x1c72e0: 0x296982a  slt         $s3, $s4, $s6
    ctx->pc = 0x1c72e0u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1c72e4:
    // 0x1c72e4: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C72E4u;
    {
        const bool branch_taken_0x1c72e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72E4u;
            // 0x1c72e8: 0x23e1021  addu        $v0, $s1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72e4) {
            ctx->pc = 0x1C7340u;
            goto label_1c7340;
        }
    }
    ctx->pc = 0x1C72ECu;
    // 0x1c72ec: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1c72ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1c72f0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C72F0u;
    {
        const bool branch_taken_0x1c72f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C72F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72F0u;
            // 0x1c72f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72f0) {
            ctx->pc = 0x1C7340u;
            goto label_1c7340;
        }
    }
    ctx->pc = 0x1C72F8u;
    // 0x1c72f8: 0xc071b5e  jal         func_1C6D78
    ctx->pc = 0x1C72F8u;
    SET_GPR_U32(ctx, 31, 0x1C7300u);
    ctx->pc = 0x1C72FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72F8u;
            // 0x1c72fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6D78u;
    if (runtime->hasFunction(0x1C6D78u)) {
        auto targetFn = runtime->lookupFunction(0x1C6D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7300u; }
        if (ctx->pc != 0x1C7300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6D78_0x1c6d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7300u; }
        if (ctx->pc != 0x1C7300u) { return; }
    }
    ctx->pc = 0x1C7300u;
label_1c7300:
    // 0x1c7300: 0x2353021  addu        $a2, $s1, $s5
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1c7304: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c7304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7308: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1c7308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1c730c: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x1c730cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x1c7310: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7314: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1c7314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c7318: 0x1c60ffe9  bgtz        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C7318u;
    {
        const bool branch_taken_0x1c7318 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C731Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7318u;
            // 0x1c731c: 0x24440800  addiu       $a0, $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7318) {
            ctx->pc = 0x1C72C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c72c0;
        }
    }
    ctx->pc = 0x1C7320u;
    // 0x1c7320: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7320u;
    {
        const bool branch_taken_0x1c7320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c7320) {
            ctx->pc = 0x1C7340u;
            goto label_1c7340;
        }
    }
    ctx->pc = 0x1C7328u;
    // 0x1c7328: 0x2248021  addu        $s0, $s1, $a0
    ctx->pc = 0x1c7328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1c732c: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x1c732cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c7330: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7330u;
    {
        const bool branch_taken_0x1c7330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7330) {
            ctx->pc = 0x1C7340u;
            goto label_1c7340;
        }
    }
    ctx->pc = 0x1C7338u;
    // 0x1c7338: 0x16a4ffea  bne         $s5, $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C7338u;
    {
        const bool branch_taken_0x1c7338 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c7338) {
            ctx->pc = 0x1C72E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c72e4;
        }
    }
    ctx->pc = 0x1C7340u;
label_1c7340:
    // 0x1c7340: 0x16960008  bne         $s4, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7340u;
    {
        const bool branch_taken_0x1c7340 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        ctx->pc = 0x1C7344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7340u;
            // 0x1c7344: 0xaef40000  sw          $s4, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7340) {
            ctx->pc = 0x1C7364u;
            goto label_1c7364;
        }
    }
    ctx->pc = 0x1C7348u;
    // 0x1c7348: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x1c7348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1c734c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c734cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c7350: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7350u;
    {
        const bool branch_taken_0x1c7350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7350u;
            // 0x1c7354: 0x23e1821  addu        $v1, $s1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7350) {
            ctx->pc = 0x1C7368u;
            goto label_1c7368;
        }
    }
    ctx->pc = 0x1C7358u;
    // 0x1c7358: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1c7358u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c735c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C735Cu;
    {
        const bool branch_taken_0x1c735c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C735Cu;
            // 0x1c7360: 0x2402ff93  addiu       $v0, $zero, -0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c735c) {
            ctx->pc = 0x1C7374u;
            goto label_1c7374;
        }
    }
    ctx->pc = 0x1C7364u;
label_1c7364:
    // 0x1c7364: 0x23e1821  addu        $v1, $s1, $fp
    ctx->pc = 0x1c7364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_1c7368:
    // 0x1c7368: 0x2402ff92  addiu       $v0, $zero, -0x6E
    ctx->pc = 0x1c7368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967186));
    // 0x1c736c: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x1c736cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1c7370: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1c7370u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1c7374:
    // 0x1c7374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c737c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c737cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7380: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c7380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7384: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c7384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7388: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c7388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c738c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1c738cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7390: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1c7390u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c7394: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1c7394u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7398: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1c7398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c739c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C739Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C73A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C739Cu;
            // 0x1c73a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C73A4u;
    // 0x1c73a4: 0x0  nop
    ctx->pc = 0x1c73a4u;
    // NOP
}
