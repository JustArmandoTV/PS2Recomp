#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B91C0
// Address: 0x2b91c0 - 0x2b93e0
void sub_002B91C0_0x2b91c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B91C0_0x2b91c0");
#endif

    switch (ctx->pc) {
        case 0x2b91dcu: goto label_2b91dc;
        case 0x2b91fcu: goto label_2b91fc;
        case 0x2b924cu: goto label_2b924c;
        case 0x2b926cu: goto label_2b926c;
        case 0x2b92d0u: goto label_2b92d0;
        case 0x2b92ecu: goto label_2b92ec;
        case 0x2b9310u: goto label_2b9310;
        case 0x2b9370u: goto label_2b9370;
        case 0x2b937cu: goto label_2b937c;
        case 0x2b9388u: goto label_2b9388;
        case 0x2b9394u: goto label_2b9394;
        case 0x2b93a0u: goto label_2b93a0;
        case 0x2b93acu: goto label_2b93ac;
        case 0x2b93c4u: goto label_2b93c4;
        default: break;
    }

    ctx->pc = 0x2b91c0u;

    // 0x2b91c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b91c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b91c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b91c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b91c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b91cc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2b91ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2b91d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b91d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b91d4: 0xc0ae5f0  jal         func_2B97C0
    ctx->pc = 0x2B91D4u;
    SET_GPR_U32(ctx, 31, 0x2B91DCu);
    ctx->pc = 0x2B91D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B91D4u;
            // 0x2b91d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B97C0u;
    if (runtime->hasFunction(0x2B97C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B97C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91DCu; }
        if (ctx->pc != 0x2B91DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B97C0_0x2b97c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91DCu; }
        if (ctx->pc != 0x2B91DCu) { return; }
    }
    ctx->pc = 0x2B91DCu;
label_2b91dc:
    // 0x2b91dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b91e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b91e4: 0x24632740  addiu       $v1, $v1, 0x2740
    ctx->pc = 0x2b91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10048));
    // 0x2b91e8: 0x24422778  addiu       $v0, $v0, 0x2778
    ctx->pc = 0x2b91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10104));
    // 0x2b91ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b91f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b91f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91f4: 0xc0ae5ec  jal         func_2B97B0
    ctx->pc = 0x2B91F4u;
    SET_GPR_U32(ctx, 31, 0x2B91FCu);
    ctx->pc = 0x2B91F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B91F4u;
            // 0x2b91f8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B97B0u;
    if (runtime->hasFunction(0x2B97B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B97B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91FCu; }
        if (ctx->pc != 0x2B91FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B97B0_0x2b97b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91FCu; }
        if (ctx->pc != 0x2B91FCu) { return; }
    }
    ctx->pc = 0x2B91FCu;
label_2b91fc:
    // 0x2b91fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b91fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b9200: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2b9200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2b9204: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b9208: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b920c: 0x24422720  addiu       $v0, $v0, 0x2720
    ctx->pc = 0x2b920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10016));
    // 0x2b9210: 0x24847108  addiu       $a0, $a0, 0x7108
    ctx->pc = 0x2b9210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28936));
    // 0x2b9214: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x2b9214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x2b9218: 0x24637118  addiu       $v1, $v1, 0x7118
    ctx->pc = 0x2b9218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28952));
    // 0x2b921c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b921cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b9220: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2b9220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2b9224: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x2b9224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x2b9228: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x2b9228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x2b922c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b922cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b9230: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b9230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b9234: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x2b9234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x2b9238: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b9238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2b923c: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x2b923cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x2b9240: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2b9240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2b9244: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2B9244u;
    SET_GPR_U32(ctx, 31, 0x2B924Cu);
    ctx->pc = 0x2B9248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9244u;
            // 0x2b9248: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B924Cu; }
        if (ctx->pc != 0x2B924Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B924Cu; }
        if (ctx->pc != 0x2B924Cu) { return; }
    }
    ctx->pc = 0x2B924Cu;
label_2b924c:
    // 0x2b924c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b9250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9254: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9254u;
    {
        const bool branch_taken_0x2b9254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9254u;
            // 0x2b9258: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9254) {
            ctx->pc = 0x2B9270u;
            goto label_2b9270;
        }
    }
    ctx->pc = 0x2B925Cu;
    // 0x2b925c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2b925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2b9260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b9260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b9264: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x2B9264u;
    SET_GPR_U32(ctx, 31, 0x2B926Cu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B926Cu; }
        if (ctx->pc != 0x2B926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B926Cu; }
        if (ctx->pc != 0x2B926Cu) { return; }
    }
    ctx->pc = 0x2B926Cu;
label_2b926c:
    // 0x2b926c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9270:
    // 0x2b9270: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x2b9270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x2b9274: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b9274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b927c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b927cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9280: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9280u;
            // 0x2b9284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9288u;
    // 0x2b9288: 0x0  nop
    ctx->pc = 0x2b9288u;
    // NOP
    // 0x2b928c: 0x0  nop
    ctx->pc = 0x2b928cu;
    // NOP
    // 0x2b9290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b9294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b9298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b929c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b92a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b92a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b92a4: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B92A4u;
    {
        const bool branch_taken_0x2b92a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92A4u;
            // 0x2b92a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92a4) {
            ctx->pc = 0x2B92ECu;
            goto label_2b92ec;
        }
    }
    ctx->pc = 0x2B92ACu;
    // 0x2b92ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b92acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b92b0: 0x24422720  addiu       $v0, $v0, 0x2720
    ctx->pc = 0x2b92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10016));
    // 0x2b92b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b92b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b92b8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2b92b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2b92bc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B92BCu;
    {
        const bool branch_taken_0x2b92bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b92bc) {
            ctx->pc = 0x2B92C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92BCu;
            // 0x2b92c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B92D8u;
            goto label_2b92d8;
        }
    }
    ctx->pc = 0x2B92C4u;
    // 0x2b92c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b92c8: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2B92C8u;
    SET_GPR_U32(ctx, 31, 0x2B92D0u);
    ctx->pc = 0x2B92CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92C8u;
            // 0x2b92cc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B92D0u; }
        if (ctx->pc != 0x2B92D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B92D0u; }
        if (ctx->pc != 0x2B92D0u) { return; }
    }
    ctx->pc = 0x2B92D0u;
label_2b92d0:
    // 0x2b92d0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2b92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2b92d4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b92d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b92d8:
    // 0x2b92d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b92d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b92dc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B92DCu;
    {
        const bool branch_taken_0x2b92dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b92dc) {
            ctx->pc = 0x2B92E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92DCu;
            // 0x2b92e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B92F0u;
            goto label_2b92f0;
        }
    }
    ctx->pc = 0x2B92E4u;
    // 0x2b92e4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B92E4u;
    SET_GPR_U32(ctx, 31, 0x2B92ECu);
    ctx->pc = 0x2B92E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92E4u;
            // 0x2b92e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B92ECu; }
        if (ctx->pc != 0x2B92ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B92ECu; }
        if (ctx->pc != 0x2B92ECu) { return; }
    }
    ctx->pc = 0x2B92ECu;
label_2b92ec:
    // 0x2b92ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b92ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b92f0:
    // 0x2b92f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b92f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b92f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b92f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b92f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b92f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b92fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B92FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92FCu;
            // 0x2b9300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9304u;
    // 0x2b9304: 0x0  nop
    ctx->pc = 0x2b9304u;
    // NOP
    // 0x2b9308: 0x0  nop
    ctx->pc = 0x2b9308u;
    // NOP
    // 0x2b930c: 0x0  nop
    ctx->pc = 0x2b930cu;
    // NOP
label_2b9310:
    // 0x2b9310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b9314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b9318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b931c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b9320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9324: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B9324u;
    {
        const bool branch_taken_0x2b9324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9324u;
            // 0x2b9328: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9324) {
            ctx->pc = 0x2B93C4u;
            goto label_2b93c4;
        }
    }
    ctx->pc = 0x2B932Cu;
    // 0x2b932c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9330: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b9334: 0x24632740  addiu       $v1, $v1, 0x2740
    ctx->pc = 0x2b9334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10048));
    // 0x2b9338: 0x24422778  addiu       $v0, $v0, 0x2778
    ctx->pc = 0x2b9338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10104));
    // 0x2b933c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b933cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b9340: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B9340u;
    {
        const bool branch_taken_0x2b9340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9340u;
            // 0x2b9344: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9340) {
            ctx->pc = 0x2B93ACu;
            goto label_2b93ac;
        }
    }
    ctx->pc = 0x2B9348u;
    // 0x2b9348: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b934c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b9350: 0x246326d0  addiu       $v1, $v1, 0x26D0
    ctx->pc = 0x2b9350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9936));
    // 0x2b9354: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2b9354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2b9358: 0x24422708  addiu       $v0, $v0, 0x2708
    ctx->pc = 0x2b9358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9992));
    // 0x2b935c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b935cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b9360: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2b9360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2b9364: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2b9364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b9368: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2B9368u;
    SET_GPR_U32(ctx, 31, 0x2B9370u);
    ctx->pc = 0x2B936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9368u;
            // 0x2b936c: 0x24a594b0  addiu       $a1, $a1, -0x6B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9370u; }
        if (ctx->pc != 0x2B9370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9370u; }
        if (ctx->pc != 0x2B9370u) { return; }
    }
    ctx->pc = 0x2B9370u;
label_2b9370:
    // 0x2b9370: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2b9370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2b9374: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x2B9374u;
    SET_GPR_U32(ctx, 31, 0x2B937Cu);
    ctx->pc = 0x2B9378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9374u;
            // 0x2b9378: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B937Cu; }
        if (ctx->pc != 0x2B937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B937Cu; }
        if (ctx->pc != 0x2B937Cu) { return; }
    }
    ctx->pc = 0x2B937Cu;
label_2b937c:
    // 0x2b937c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2b937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2b9380: 0xc0ae510  jal         func_2B9440
    ctx->pc = 0x2B9380u;
    SET_GPR_U32(ctx, 31, 0x2B9388u);
    ctx->pc = 0x2B9384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9380u;
            // 0x2b9384: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9440u;
    if (runtime->hasFunction(0x2B9440u)) {
        auto targetFn = runtime->lookupFunction(0x2B9440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9388u; }
        if (ctx->pc != 0x2B9388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9440_0x2b9440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9388u; }
        if (ctx->pc != 0x2B9388u) { return; }
    }
    ctx->pc = 0x2B9388u;
label_2b9388:
    // 0x2b9388: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2b9388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2b938c: 0xc0ae510  jal         func_2B9440
    ctx->pc = 0x2B938Cu;
    SET_GPR_U32(ctx, 31, 0x2B9394u);
    ctx->pc = 0x2B9390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B938Cu;
            // 0x2b9390: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9440u;
    if (runtime->hasFunction(0x2B9440u)) {
        auto targetFn = runtime->lookupFunction(0x2B9440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9394u; }
        if (ctx->pc != 0x2B9394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9440_0x2b9440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9394u; }
        if (ctx->pc != 0x2B9394u) { return; }
    }
    ctx->pc = 0x2B9394u;
label_2b9394:
    // 0x2b9394: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2b9394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2b9398: 0xc0ae4f8  jal         func_2B93E0
    ctx->pc = 0x2B9398u;
    SET_GPR_U32(ctx, 31, 0x2B93A0u);
    ctx->pc = 0x2B939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9398u;
            // 0x2b939c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B93E0u;
    if (runtime->hasFunction(0x2B93E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B93E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93A0u; }
        if (ctx->pc != 0x2B93A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B93E0_0x2b93e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93A0u; }
        if (ctx->pc != 0x2B93A0u) { return; }
    }
    ctx->pc = 0x2B93A0u;
label_2b93a0:
    // 0x2b93a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b93a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93a4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2B93A4u;
    SET_GPR_U32(ctx, 31, 0x2B93ACu);
    ctx->pc = 0x2B93A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B93A4u;
            // 0x2b93a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93ACu; }
        if (ctx->pc != 0x2B93ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93ACu; }
        if (ctx->pc != 0x2B93ACu) { return; }
    }
    ctx->pc = 0x2B93ACu;
label_2b93ac:
    // 0x2b93ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2b93acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2b93b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b93b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b93b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B93B4u;
    {
        const bool branch_taken_0x2b93b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b93b4) {
            ctx->pc = 0x2B93B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B93B4u;
            // 0x2b93b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B93C8u;
            goto label_2b93c8;
        }
    }
    ctx->pc = 0x2B93BCu;
    // 0x2b93bc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B93BCu;
    SET_GPR_U32(ctx, 31, 0x2B93C4u);
    ctx->pc = 0x2B93C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B93BCu;
            // 0x2b93c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93C4u; }
        if (ctx->pc != 0x2B93C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93C4u; }
        if (ctx->pc != 0x2B93C4u) { return; }
    }
    ctx->pc = 0x2B93C4u;
label_2b93c4:
    // 0x2b93c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b93c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b93c8:
    // 0x2b93c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b93c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b93cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b93ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b93d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b93d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b93d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B93D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B93D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B93D4u;
            // 0x2b93d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B93DCu;
    // 0x2b93dc: 0x0  nop
    ctx->pc = 0x2b93dcu;
    // NOP
}
