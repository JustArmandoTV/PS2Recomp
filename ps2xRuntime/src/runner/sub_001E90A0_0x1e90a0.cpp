#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E90A0
// Address: 0x1e90a0 - 0x1e93c0
void sub_001E90A0_0x1e90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E90A0_0x1e90a0");
#endif

    switch (ctx->pc) {
        case 0x1e90b4u: goto label_1e90b4;
        case 0x1e9128u: goto label_1e9128;
        case 0x1e9144u: goto label_1e9144;
        case 0x1e9160u: goto label_1e9160;
        case 0x1e917cu: goto label_1e917c;
        case 0x1e9240u: goto label_1e9240;
        case 0x1e929cu: goto label_1e929c;
        case 0x1e9340u: goto label_1e9340;
        case 0x1e939cu: goto label_1e939c;
        default: break;
    }

    ctx->pc = 0x1e90a0u;

label_1e90a0:
    // 0x1e90a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e90a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e90a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e90a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e90a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e90a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e90ac: 0xc079954  jal         func_1E6550
    ctx->pc = 0x1E90ACu;
    SET_GPR_U32(ctx, 31, 0x1E90B4u);
    ctx->pc = 0x1E90B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90ACu;
            // 0x1e90b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6550u;
    if (runtime->hasFunction(0x1E6550u)) {
        auto targetFn = runtime->lookupFunction(0x1E6550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90B4u; }
        if (ctx->pc != 0x1E90B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6550_0x1e6550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90B4u; }
        if (ctx->pc != 0x1E90B4u) { return; }
    }
    ctx->pc = 0x1E90B4u;
label_1e90b4:
    // 0x1e90b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e90b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e90b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90bc: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x1e90bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x1e90c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e90c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1e90c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e90c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e90c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e90c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e90cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E90CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E90D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90CCu;
            // 0x1e90d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E90D4u;
    // 0x1e90d4: 0x0  nop
    ctx->pc = 0x1e90d4u;
    // NOP
    // 0x1e90d8: 0x0  nop
    ctx->pc = 0x1e90d8u;
    // NOP
    // 0x1e90dc: 0x0  nop
    ctx->pc = 0x1e90dcu;
    // NOP
    // 0x1e90e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e90e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e90e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e90e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e90e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e90e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e90ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e90ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e90f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e90f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e90f8: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1e90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1e90fc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1e90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1e9100: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1e9100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1e9104: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1e9104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1e9108: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e9108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e910c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1E910Cu;
    {
        const bool branch_taken_0x1e910c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E910Cu;
            // 0x1e9110: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e910c) {
            ctx->pc = 0x1E914Cu;
            goto label_1e914c;
        }
    }
    ctx->pc = 0x1E9114u;
    // 0x1e9114: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e9114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e9118: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e9118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e911c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e911cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e9120: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x1E9120u;
    SET_GPR_U32(ctx, 31, 0x1E9128u);
    ctx->pc = 0x1E9124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9120u;
            // 0x1e9124: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9128u; }
        if (ctx->pc != 0x1E9128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9128u; }
        if (ctx->pc != 0x1E9128u) { return; }
    }
    ctx->pc = 0x1E9128u;
label_1e9128:
    // 0x1e9128: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1e9128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e912c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e912cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9130: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9130u;
    {
        const bool branch_taken_0x1e9130 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9130u;
            // 0x1e9134: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9130) {
            ctx->pc = 0x1E9144u;
            goto label_1e9144;
        }
    }
    ctx->pc = 0x1E9138u;
    // 0x1e9138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e9138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e913c: 0xc07a428  jal         func_1E90A0
    ctx->pc = 0x1E913Cu;
    SET_GPR_U32(ctx, 31, 0x1E9144u);
    ctx->pc = 0x1E9140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E913Cu;
            // 0x1e9140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E90A0u;
    goto label_1e90a0;
    ctx->pc = 0x1E9144u;
label_1e9144:
    // 0x1e9144: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E9144u;
    {
        const bool branch_taken_0x1e9144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9144u;
            // 0x1e9148: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9144) {
            ctx->pc = 0x1E9198u;
            goto label_1e9198;
        }
    }
    ctx->pc = 0x1E914Cu;
label_1e914c:
    // 0x1e914c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e9150: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e9150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e9154: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e9154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e9158: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x1E9158u;
    SET_GPR_U32(ctx, 31, 0x1E9160u);
    ctx->pc = 0x1E915Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9158u;
            // 0x1e915c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9160u; }
        if (ctx->pc != 0x1E9160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9160u; }
        if (ctx->pc != 0x1E9160u) { return; }
    }
    ctx->pc = 0x1E9160u;
label_1e9160:
    // 0x1e9160: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1e9160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e9164: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e9164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9168: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E9168u;
    {
        const bool branch_taken_0x1e9168 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E916Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9168u;
            // 0x1e916c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9168) {
            ctx->pc = 0x1E9194u;
            goto label_1e9194;
        }
    }
    ctx->pc = 0x1E9170u;
    // 0x1e9170: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e9170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9174: 0xc07a428  jal         func_1E90A0
    ctx->pc = 0x1E9174u;
    SET_GPR_U32(ctx, 31, 0x1E917Cu);
    ctx->pc = 0x1E9178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9174u;
            // 0x1e9178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E90A0u;
    goto label_1e90a0;
    ctx->pc = 0x1E917Cu;
label_1e917c:
    // 0x1e917c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e917cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e9180: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e9184: 0x2463d640  addiu       $v1, $v1, -0x29C0
    ctx->pc = 0x1e9184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956608));
    // 0x1e9188: 0x2442d600  addiu       $v0, $v0, -0x2A00
    ctx->pc = 0x1e9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x1e918c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e918cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1e9190: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e9190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e9194:
    // 0x1e9194: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e9194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9198:
    // 0x1e9198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e919c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e919cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e91a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e91a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e91a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E91A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E91A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91A4u;
            // 0x1e91a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E91ACu;
    // 0x1e91ac: 0x0  nop
    ctx->pc = 0x1e91acu;
    // NOP
    // 0x1e91b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e91b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e91b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e91b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e91b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e91bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e91bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e91c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e91c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91c4: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1E91C4u;
    {
        const bool branch_taken_0x1e91c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E91C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91C4u;
            // 0x1e91c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91c4) {
            ctx->pc = 0x1E929Cu;
            goto label_1e929c;
        }
    }
    ctx->pc = 0x1E91CCu;
    // 0x1e91cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e91ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e91d0: 0x2442d640  addiu       $v0, $v0, -0x29C0
    ctx->pc = 0x1e91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
    // 0x1e91d4: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E91D4u;
    {
        const bool branch_taken_0x1e91d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E91D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91D4u;
            // 0x1e91d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91d4) {
            ctx->pc = 0x1E9274u;
            goto label_1e9274;
        }
    }
    ctx->pc = 0x1E91DCu;
    // 0x1e91dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e91e0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x1e91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x1e91e4: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E91E4u;
    {
        const bool branch_taken_0x1e91e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E91E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91E4u;
            // 0x1e91e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91e4) {
            ctx->pc = 0x1E9274u;
            goto label_1e9274;
        }
    }
    ctx->pc = 0x1E91ECu;
    // 0x1e91ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e91ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e91f0: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1e91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1e91f4: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x1e91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x1e91f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E91F8u;
    {
        const bool branch_taken_0x1e91f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E91FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91F8u;
            // 0x1e91fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91f8) {
            ctx->pc = 0x1E9240u;
            goto label_1e9240;
        }
    }
    ctx->pc = 0x1E9200u;
    // 0x1e9200: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e9200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e9204: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1e9208: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e920c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E920Cu;
    {
        const bool branch_taken_0x1e920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e920c) {
            ctx->pc = 0x1E9240u;
            goto label_1e9240;
        }
    }
    ctx->pc = 0x1E9214u;
    // 0x1e9214: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e9214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e9218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e9218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e921c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e921cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e9220: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e9220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e9224: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e9224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e9228: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1e9228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1e922c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x1e922cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x1e9230: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e9234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9238: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E9238u;
    SET_GPR_U32(ctx, 31, 0x1E9240u);
    ctx->pc = 0x1E923Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9238u;
            // 0x1e923c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9240u; }
        if (ctx->pc != 0x1E9240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9240u; }
        if (ctx->pc != 0x1E9240u) { return; }
    }
    ctx->pc = 0x1E9240u;
label_1e9240:
    // 0x1e9240: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9240u;
    {
        const bool branch_taken_0x1e9240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9240) {
            ctx->pc = 0x1E9244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9240u;
            // 0x1e9244: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9278u;
            goto label_1e9278;
        }
    }
    ctx->pc = 0x1E9248u;
    // 0x1e9248: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e924c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1e9250: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9250u;
    {
        const bool branch_taken_0x1e9250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9250u;
            // 0x1e9254: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9250) {
            ctx->pc = 0x1E9274u;
            goto label_1e9274;
        }
    }
    ctx->pc = 0x1E9258u;
    // 0x1e9258: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e925c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1e9260: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9260u;
    {
        const bool branch_taken_0x1e9260 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9260u;
            // 0x1e9264: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9260) {
            ctx->pc = 0x1E9274u;
            goto label_1e9274;
        }
    }
    ctx->pc = 0x1E9268u;
    // 0x1e9268: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e926c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1e9270: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e9270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e9274:
    // 0x1e9274: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e9274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e9278:
    // 0x1e9278: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e9278u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e927c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E927Cu;
    {
        const bool branch_taken_0x1e927c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e927c) {
            ctx->pc = 0x1E9280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E927Cu;
            // 0x1e9280: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E92A0u;
            goto label_1e92a0;
        }
    }
    ctx->pc = 0x1E9284u;
    // 0x1e9284: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e9284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e9288: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1e9288u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e928c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e928cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e9290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9294: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E9294u;
    SET_GPR_U32(ctx, 31, 0x1E929Cu);
    ctx->pc = 0x1E9298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9294u;
            // 0x1e9298: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E929Cu; }
        if (ctx->pc != 0x1E929Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E929Cu; }
        if (ctx->pc != 0x1E929Cu) { return; }
    }
    ctx->pc = 0x1E929Cu;
label_1e929c:
    // 0x1e929c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e929cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e92a0:
    // 0x1e92a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e92a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e92a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e92a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e92a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e92a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e92ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E92ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E92B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92ACu;
            // 0x1e92b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E92B4u;
    // 0x1e92b4: 0x0  nop
    ctx->pc = 0x1e92b4u;
    // NOP
    // 0x1e92b8: 0x0  nop
    ctx->pc = 0x1e92b8u;
    // NOP
    // 0x1e92bc: 0x0  nop
    ctx->pc = 0x1e92bcu;
    // NOP
    // 0x1e92c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e92c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e92c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e92c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e92c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e92c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e92cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e92ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e92d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e92d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92d4: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E92D4u;
    {
        const bool branch_taken_0x1e92d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92D4u;
            // 0x1e92d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92d4) {
            ctx->pc = 0x1E939Cu;
            goto label_1e939c;
        }
    }
    ctx->pc = 0x1E92DCu;
    // 0x1e92dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e92e0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x1e92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x1e92e4: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E92E4u;
    {
        const bool branch_taken_0x1e92e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92E4u;
            // 0x1e92e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92e4) {
            ctx->pc = 0x1E9374u;
            goto label_1e9374;
        }
    }
    ctx->pc = 0x1E92ECu;
    // 0x1e92ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e92f0: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1e92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1e92f4: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x1e92f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x1e92f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E92F8u;
    {
        const bool branch_taken_0x1e92f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92F8u;
            // 0x1e92fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92f8) {
            ctx->pc = 0x1E9340u;
            goto label_1e9340;
        }
    }
    ctx->pc = 0x1E9300u;
    // 0x1e9300: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e9300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e9304: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e9304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1e9308: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e930c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E930Cu;
    {
        const bool branch_taken_0x1e930c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e930c) {
            ctx->pc = 0x1E9340u;
            goto label_1e9340;
        }
    }
    ctx->pc = 0x1E9314u;
    // 0x1e9314: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e9314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e9318: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e9318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e931c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e931cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e9320: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e9320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e9324: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e9324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e9328: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1e9328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1e932c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x1e932cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x1e9330: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e9330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e9334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9338: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E9338u;
    SET_GPR_U32(ctx, 31, 0x1E9340u);
    ctx->pc = 0x1E933Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9338u;
            // 0x1e933c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9340u; }
        if (ctx->pc != 0x1E9340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9340u; }
        if (ctx->pc != 0x1E9340u) { return; }
    }
    ctx->pc = 0x1E9340u;
label_1e9340:
    // 0x1e9340: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9340u;
    {
        const bool branch_taken_0x1e9340 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9340) {
            ctx->pc = 0x1E9344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9340u;
            // 0x1e9344: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9378u;
            goto label_1e9378;
        }
    }
    ctx->pc = 0x1E9348u;
    // 0x1e9348: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e934c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1e9350: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9350u;
    {
        const bool branch_taken_0x1e9350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9350u;
            // 0x1e9354: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9350) {
            ctx->pc = 0x1E9374u;
            goto label_1e9374;
        }
    }
    ctx->pc = 0x1E9358u;
    // 0x1e9358: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e935c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1e9360: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9360u;
    {
        const bool branch_taken_0x1e9360 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9360u;
            // 0x1e9364: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9360) {
            ctx->pc = 0x1E9374u;
            goto label_1e9374;
        }
    }
    ctx->pc = 0x1E9368u;
    // 0x1e9368: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e936c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1e9370: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e9370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e9374:
    // 0x1e9374: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e9374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e9378:
    // 0x1e9378: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e9378u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e937c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E937Cu;
    {
        const bool branch_taken_0x1e937c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e937c) {
            ctx->pc = 0x1E9380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E937Cu;
            // 0x1e9380: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E93A0u;
            goto label_1e93a0;
        }
    }
    ctx->pc = 0x1E9384u;
    // 0x1e9384: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e9384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e9388: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1e9388u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e938c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e938cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e9390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9394: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E9394u;
    SET_GPR_U32(ctx, 31, 0x1E939Cu);
    ctx->pc = 0x1E9398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9394u;
            // 0x1e9398: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E939Cu; }
        if (ctx->pc != 0x1E939Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E939Cu; }
        if (ctx->pc != 0x1E939Cu) { return; }
    }
    ctx->pc = 0x1E939Cu;
label_1e939c:
    // 0x1e939c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e939cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e93a0:
    // 0x1e93a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e93a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e93a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e93a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e93a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e93a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e93ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E93ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E93B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93ACu;
            // 0x1e93b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E93B4u;
    // 0x1e93b4: 0x0  nop
    ctx->pc = 0x1e93b4u;
    // NOP
    // 0x1e93b8: 0x0  nop
    ctx->pc = 0x1e93b8u;
    // NOP
    // 0x1e93bc: 0x0  nop
    ctx->pc = 0x1e93bcu;
    // NOP
}
