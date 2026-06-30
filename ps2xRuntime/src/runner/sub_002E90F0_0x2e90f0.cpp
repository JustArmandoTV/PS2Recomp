#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E90F0
// Address: 0x2e90f0 - 0x2e91c0
void sub_002E90F0_0x2e90f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E90F0_0x2e90f0");
#endif

    switch (ctx->pc) {
        case 0x2e9130u: goto label_2e9130;
        case 0x2e9140u: goto label_2e9140;
        default: break;
    }

    ctx->pc = 0x2e90f0u;

    // 0x2e90f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e90f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e90f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e90f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e90f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e90f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e90fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e90fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9100: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e9100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9108: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e910c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2e910cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e9110: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e9110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9114: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2e9114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e9118: 0xa0820054  sb          $v0, 0x54($a0)
    ctx->pc = 0x2e9118u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e911c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x2e911cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2e9120: 0xa0820055  sb          $v0, 0x55($a0)
    ctx->pc = 0x2e9120u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9124: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2e9124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e9128: 0xc04a508  jal         func_129420
    ctx->pc = 0x2E9128u;
    SET_GPR_U32(ctx, 31, 0x2E9130u);
    ctx->pc = 0x2E912Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9128u;
            // 0x2e912c: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9130u; }
        if (ctx->pc != 0x2E9130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9130u; }
        if (ctx->pc != 0x2E9130u) { return; }
    }
    ctx->pc = 0x2E9130u;
label_2e9130:
    // 0x2e9130: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2e9130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x2e9134: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x2e9134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2e9138: 0xc04a508  jal         func_129420
    ctx->pc = 0x2E9138u;
    SET_GPR_U32(ctx, 31, 0x2E9140u);
    ctx->pc = 0x2E913Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9138u;
            // 0x2e913c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9140u; }
        if (ctx->pc != 0x2E9140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9140u; }
        if (ctx->pc != 0x2E9140u) { return; }
    }
    ctx->pc = 0x2E9140u;
label_2e9140:
    // 0x2e9140: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2e9140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e9144: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e9144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e9148: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x2e9148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
    // 0x2e914c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2e914cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e9150: 0x946514a8  lhu         $a1, 0x14A8($v1)
    ctx->pc = 0x2e9150u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 5288)));
    // 0x2e9154: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e9154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2e9158: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e9158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e915c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e915cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e9160: 0xa48514a8  sh          $a1, 0x14A8($a0)
    ctx->pc = 0x2e9160u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5288), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e9164: 0x946314a8  lhu         $v1, 0x14A8($v1)
    ctx->pc = 0x2e9164u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 5288)));
    // 0x2e9168: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9168u;
    {
        const bool branch_taken_0x2e9168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2e9168) {
            ctx->pc = 0x2E916Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9168u;
            // 0x2e916c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9180u;
            goto label_2e9180;
        }
    }
    ctx->pc = 0x2E9170u;
    // 0x2e9170: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2e9170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e9174: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e9174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e9178: 0xa46514a8  sh          $a1, 0x14A8($v1)
    ctx->pc = 0x2e9178u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5288), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e917c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2e917cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_2e9180:
    // 0x2e9180: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9180u;
    {
        const bool branch_taken_0x2e9180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9180) {
            ctx->pc = 0x2E9184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9180u;
            // 0x2e9184: 0xa625007c  sh          $a1, 0x7C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9198u;
            goto label_2e9198;
        }
    }
    ctx->pc = 0x2E9188u;
    // 0x2e9188: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2e9188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e918c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e918cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e9190: 0xa46514a8  sh          $a1, 0x14A8($v1)
    ctx->pc = 0x2e9190u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5288), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e9194: 0xa625007c  sh          $a1, 0x7C($s1)
    ctx->pc = 0x2e9194u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 5));
label_2e9198:
    // 0x2e9198: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x2e9198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e919c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e91a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e91a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e91a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e91a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e91a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e91a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e91ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E91ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E91B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91ACu;
            // 0x2e91b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E91B4u;
    // 0x2e91b4: 0x0  nop
    ctx->pc = 0x2e91b4u;
    // NOP
    // 0x2e91b8: 0x0  nop
    ctx->pc = 0x2e91b8u;
    // NOP
    // 0x2e91bc: 0x0  nop
    ctx->pc = 0x2e91bcu;
    // NOP
}
