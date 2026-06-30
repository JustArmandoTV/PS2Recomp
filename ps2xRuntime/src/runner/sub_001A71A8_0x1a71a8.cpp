#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A71A8
// Address: 0x1a71a8 - 0x1a72b0
void sub_001A71A8_0x1a71a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A71A8_0x1a71a8");
#endif

    switch (ctx->pc) {
        case 0x1a71e8u: goto label_1a71e8;
        case 0x1a71f0u: goto label_1a71f0;
        case 0x1a71fcu: goto label_1a71fc;
        case 0x1a7220u: goto label_1a7220;
        case 0x1a7250u: goto label_1a7250;
        case 0x1a7270u: goto label_1a7270;
        default: break;
    }

    ctx->pc = 0x1a71a8u;

    // 0x1a71a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a71a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a71ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a71acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a71b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a71b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a71b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a71b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a71b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a71bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a71c0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a71c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a71c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a71c8: 0x293b021  addu        $s6, $s4, $s3
    ctx->pc = 0x1a71c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1a71cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a71ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a71d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a71d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a71d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a71d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a71d8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1a71d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1a71dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a71dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a71e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A71E0u;
    {
        const bool branch_taken_0x1a71e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A71E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A71E0u;
            // 0x1a71e4: 0x8eb70010  lw          $s7, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71e0) {
            ctx->pc = 0x1A7208u;
            goto label_1a7208;
        }
    }
    ctx->pc = 0x1A71E8u;
label_1a71e8:
    // 0x1a71e8: 0xc069d8e  jal         func_1A7638
    ctx->pc = 0x1A71E8u;
    SET_GPR_U32(ctx, 31, 0x1A71F0u);
    ctx->pc = 0x1A7638u;
    if (runtime->hasFunction(0x1A7638u)) {
        auto targetFn = runtime->lookupFunction(0x1A7638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71F0u; }
        if (ctx->pc != 0x1A71F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7638_0x1a7638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71F0u; }
        if (ctx->pc != 0x1A71F0u) { return; }
    }
    ctx->pc = 0x1A71F0u;
label_1a71f0:
    // 0x1a71f0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A71F0u;
    {
        const bool branch_taken_0x1a71f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A71F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A71F0u;
            // 0x1a71f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71f0) {
            ctx->pc = 0x1A7284u;
            goto label_1a7284;
        }
    }
    ctx->pc = 0x1A71F8u;
    // 0x1a71f8: 0x2541023  subu        $v0, $s2, $s4
    ctx->pc = 0x1a71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1a71fc:
    // 0x1a71fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7200: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x1a7200u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a7204: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1a7204u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a7208:
    // 0x1a7208: 0x1a60001e  blez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A7208u;
    {
        const bool branch_taken_0x1a7208 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1A720Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7208u;
            // 0x1a720c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7208) {
            ctx->pc = 0x1A7284u;
            goto label_1a7284;
        }
    }
    ctx->pc = 0x1A7210u;
    // 0x1a7210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a7210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7214: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a7214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7218: 0xc069cac  jal         func_1A72B0
    ctx->pc = 0x1A7218u;
    SET_GPR_U32(ctx, 31, 0x1A7220u);
    ctx->pc = 0x1A721Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7218u;
            // 0x1a721c: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A72B0u;
    if (runtime->hasFunction(0x1A72B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A72B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7220u; }
        if (ctx->pc != 0x1A7220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A72B0_0x1a72b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7220u; }
        if (ctx->pc != 0x1A7220u) { return; }
    }
    ctx->pc = 0x1A7220u;
label_1a7220:
    // 0x1a7220: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a7220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7224: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7228: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A7228u;
    {
        const bool branch_taken_0x1a7228 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A722Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7228u;
            // 0x1a722c: 0x2d22823  subu        $a1, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7228) {
            ctx->pc = 0x1A7280u;
            goto label_1a7280;
        }
    }
    ctx->pc = 0x1A7230u;
    // 0x1a7230: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x1a7230u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1a7234: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1a7234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1a7238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a7238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a723c: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1a723cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a7240: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A7240u;
    {
        const bool branch_taken_0x1a7240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7240) {
            ctx->pc = 0x1A7244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7240u;
            // 0x1a7244: 0x2541023  subu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A71FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a71fc;
        }
    }
    ctx->pc = 0x1A7248u;
    // 0x1a7248: 0xc069cc6  jal         func_1A7318
    ctx->pc = 0x1A7248u;
    SET_GPR_U32(ctx, 31, 0x1A7250u);
    ctx->pc = 0x1A724Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7248u;
            // 0x1a724c: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7318u;
    if (runtime->hasFunction(0x1A7318u)) {
        auto targetFn = runtime->lookupFunction(0x1A7318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7250u; }
        if (ctx->pc != 0x1A7250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7318_0x1a7318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7250u; }
        if (ctx->pc != 0x1A7250u) { return; }
    }
    ctx->pc = 0x1A7250u;
label_1a7250:
    // 0x1a7250: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1a7250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7254: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a7254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7258: 0x2d11023  subu        $v0, $s6, $s1
    ctx->pc = 0x1a7258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1a725c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a725cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7260: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x1a7260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a7264: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1a7264u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1a7268: 0xc069ce6  jal         func_1A7398
    ctx->pc = 0x1A7268u;
    SET_GPR_U32(ctx, 31, 0x1A7270u);
    ctx->pc = 0x1A726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7268u;
            // 0x1a726c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7398u;
    if (runtime->hasFunction(0x1A7398u)) {
        auto targetFn = runtime->lookupFunction(0x1A7398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7270u; }
        if (ctx->pc != 0x1A7270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7398_0x1a7398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7270u; }
        if (ctx->pc != 0x1A7270u) { return; }
    }
    ctx->pc = 0x1A7270u;
label_1a7270:
    // 0x1a7270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7278: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1A7278u;
    {
        const bool branch_taken_0x1a7278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7278u;
            // 0x1a727c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7278) {
            ctx->pc = 0x1A71E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a71e8;
        }
    }
    ctx->pc = 0x1A7280u;
label_1a7280:
    // 0x1a7280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7284:
    // 0x1a7284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7288: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a728c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a728cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7290: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a7290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7294: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a7294u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a7298: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a7298u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a729c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1a729cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a72a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a72a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a72a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A72A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A72A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72A4u;
            // 0x1a72a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A72ACu;
    // 0x1a72ac: 0x0  nop
    ctx->pc = 0x1a72acu;
    // NOP
}
