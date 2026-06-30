#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A6160
// Address: 0x2a6160 - 0x2a6230
void sub_002A6160_0x2a6160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6160_0x2a6160");
#endif

    switch (ctx->pc) {
        case 0x2a6180u: goto label_2a6180;
        case 0x2a61f4u: goto label_2a61f4;
        case 0x2a6218u: goto label_2a6218;
        default: break;
    }

    ctx->pc = 0x2a6160u;

    // 0x2a6160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a6160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a6164: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a6164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a6168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a616c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a6170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6174: 0x8c50e400  lw          $s0, -0x1C00($v0)
    ctx->pc = 0x2a6174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
    // 0x2a6178: 0xc040180  jal         func_100600
    ctx->pc = 0x2A6178u;
    SET_GPR_U32(ctx, 31, 0x2A6180u);
    ctx->pc = 0x2A617Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6178u;
            // 0x2a617c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6180u; }
        if (ctx->pc != 0x2A6180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6180u; }
        if (ctx->pc != 0x2A6180u) { return; }
    }
    ctx->pc = 0x2A6180u;
label_2a6180:
    // 0x2a6180: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A6180u;
    {
        const bool branch_taken_0x2a6180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6180u;
            // 0x2a6184: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6180) {
            ctx->pc = 0x2A61BCu;
            goto label_2a61bc;
        }
    }
    ctx->pc = 0x2A6188u;
    // 0x2a6188: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a6188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a618c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2a618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a6190: 0x2463fb70  addiu       $v1, $v1, -0x490
    ctx->pc = 0x2a6190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966128));
    // 0x2a6194: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a6194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a6198: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x2a6198u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a619c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2a619cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2a61a0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2a61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2a61a4: 0x24638800  addiu       $v1, $v1, -0x7800
    ctx->pc = 0x2a61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936576));
    // 0x2a61a8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2a61a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2a61ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a61acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a61b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a61b4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2a61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2a61b8: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x2a61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_2a61bc:
    // 0x2a61bc: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x2a61bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
    // 0x2a61c0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2a61c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a61c4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a61c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a61c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a61cc: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2a61ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2a61d0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a61d4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2a61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2a61d8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2a61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2a61dc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2a61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2a61e0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a61e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a61e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a61e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a61ec: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A61ECu;
    SET_GPR_U32(ctx, 31, 0x2A61F4u);
    ctx->pc = 0x2A61F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A61ECu;
            // 0x2a61f0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A61F4u; }
        if (ctx->pc != 0x2A61F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A61F4u; }
        if (ctx->pc != 0x2A61F4u) { return; }
    }
    ctx->pc = 0x2A61F4u;
label_2a61f4:
    // 0x2a61f4: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x2a61f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x2a61f8: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x2a61f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x2a61fc: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2a61fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2a6200: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6204: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2a6204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2a6208: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2a6208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2a620c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a620cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a6210: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A6210u;
    SET_GPR_U32(ctx, 31, 0x2A6218u);
    ctx->pc = 0x2A6214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6210u;
            // 0x2a6214: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6218u; }
        if (ctx->pc != 0x2A6218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6218u; }
        if (ctx->pc != 0x2A6218u) { return; }
    }
    ctx->pc = 0x2A6218u;
label_2a6218:
    // 0x2a6218: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a6218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a621c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a621cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6228: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6228u;
            // 0x2a622c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6230u;
}
