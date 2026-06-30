#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131530
// Address: 0x131530 - 0x131760
void sub_00131530_0x131530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131530_0x131530");
#endif

    switch (ctx->pc) {
        case 0x1315ccu: goto label_1315cc;
        case 0x13163cu: goto label_13163c;
        case 0x131684u: goto label_131684;
        case 0x131694u: goto label_131694;
        case 0x1316d8u: goto label_1316d8;
        case 0x13173cu: goto label_13173c;
        default: break;
    }

    ctx->pc = 0x131530u;

    // 0x131530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x131530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x131534: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x131534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x131538: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x131538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13153c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x131540: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x131540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x131544: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x131544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131548: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x131548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13154c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x131550: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x131550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x131554: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x131554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x131558: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x131558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13155c: 0xaf848090  sw          $a0, -0x7F70($gp)
    ctx->pc = 0x13155cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934672), GPR_U32(ctx, 4));
    // 0x131560: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x131560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x131564: 0xaf858094  sw          $a1, -0x7F6C($gp)
    ctx->pc = 0x131564u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934676), GPR_U32(ctx, 5));
    // 0x131568: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x131568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13156c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131570: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x131570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x131574: 0x30830401  andi        $v1, $a0, 0x401
    ctx->pc = 0x131574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1025);
    // 0x131578: 0x14600070  bnez        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x131578u;
    {
        const bool branch_taken_0x131578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131578u;
            // 0x13157c: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131578) {
            ctx->pc = 0x13173Cu;
            goto label_13173c;
        }
    }
    ctx->pc = 0x131580u;
    // 0x131580: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x131580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131584: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x131584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x131588: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x131588u;
    {
        const bool branch_taken_0x131588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131588) {
            ctx->pc = 0x13158Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131588u;
            // 0x13158c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13159Cu;
            goto label_13159c;
        }
    }
    ctx->pc = 0x131590u;
    // 0x131590: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x131590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x131594: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x131594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x131598: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x131598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13159c:
    // 0x13159c: 0x30a30020  andi        $v1, $a1, 0x20
    ctx->pc = 0x13159cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x1315a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1315A0u;
    {
        const bool branch_taken_0x1315a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315a0) {
            ctx->pc = 0x1315D4u;
            goto label_1315d4;
        }
    }
    ctx->pc = 0x1315A8u;
    // 0x1315a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1315a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1315ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1315acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1315b0: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1315b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1315b4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1315b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1315b8: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x1315b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1315bc: 0x50830060  beql        $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1315BCu;
    {
        const bool branch_taken_0x1315bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1315bc) {
            ctx->pc = 0x1315C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1315BCu;
            // 0x1315c0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131740u;
            goto label_131740;
        }
    }
    ctx->pc = 0x1315C4u;
    // 0x1315c4: 0xc04c5d8  jal         func_131760
    ctx->pc = 0x1315C4u;
    SET_GPR_U32(ctx, 31, 0x1315CCu);
    ctx->pc = 0x1315C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1315C4u;
            // 0x1315c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131760u;
    if (runtime->hasFunction(0x131760u)) {
        auto targetFn = runtime->lookupFunction(0x131760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1315CCu; }
        if (ctx->pc != 0x1315CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131760_0x131760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1315CCu; }
        if (ctx->pc != 0x1315CCu) { return; }
    }
    ctx->pc = 0x1315CCu;
label_1315cc:
    // 0x1315cc: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1315CCu;
    {
        const bool branch_taken_0x1315cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315cc) {
            ctx->pc = 0x13173Cu;
            goto label_13173c;
        }
    }
    ctx->pc = 0x1315D4u;
label_1315d4:
    // 0x1315d4: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x1315D4u;
    {
        const bool branch_taken_0x1315d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315d4) {
            ctx->pc = 0x13173Cu;
            goto label_13173c;
        }
    }
    ctx->pc = 0x1315DCu;
    // 0x1315dc: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x1315dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1315e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1315e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1315e4: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1315E4u;
    {
        const bool branch_taken_0x1315e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1315e4) {
            ctx->pc = 0x1315E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1315E4u;
            // 0x1315e8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1315FCu;
            goto label_1315fc;
        }
    }
    ctx->pc = 0x1315ECu;
    // 0x1315ec: 0x32430008  andi        $v1, $s2, 0x8
    ctx->pc = 0x1315ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x1315f0: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x1315F0u;
    {
        const bool branch_taken_0x1315f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315f0) {
            ctx->pc = 0x13173Cu;
            goto label_13173c;
        }
    }
    ctx->pc = 0x1315F8u;
    // 0x1315f8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1315f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1315fc:
    // 0x1315fc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1315fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x131600: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x131600u;
    {
        const bool branch_taken_0x131600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131600) {
            ctx->pc = 0x131604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131600u;
            // 0x131604: 0x32430010  andi        $v1, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x131650u;
            goto label_131650;
        }
    }
    ctx->pc = 0x131608u;
    // 0x131608: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x131608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x13160c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x13160cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x131610: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x131610u;
    {
        const bool branch_taken_0x131610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131610) {
            ctx->pc = 0x13164Cu;
            goto label_13164c;
        }
    }
    ctx->pc = 0x131618u;
    // 0x131618: 0x32430020  andi        $v1, $s2, 0x20
    ctx->pc = 0x131618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x13161c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x13161Cu;
    {
        const bool branch_taken_0x13161c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13161c) {
            ctx->pc = 0x13164Cu;
            goto label_13164c;
        }
    }
    ctx->pc = 0x131624u;
    // 0x131624: 0xc60c0084  lwc1        $f12, 0x84($s0)
    ctx->pc = 0x131624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x131628: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x131628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13162c: 0xc60d0088  lwc1        $f13, 0x88($s0)
    ctx->pc = 0x13162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x131630: 0xc60e008c  lwc1        $f14, 0x8C($s0)
    ctx->pc = 0x131630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x131634: 0xc04c1c8  jal         func_130720
    ctx->pc = 0x131634u;
    SET_GPR_U32(ctx, 31, 0x13163Cu);
    ctx->pc = 0x131638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131634u;
            // 0x131638: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130720u;
    if (runtime->hasFunction(0x130720u)) {
        auto targetFn = runtime->lookupFunction(0x130720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13163Cu; }
        if (ctx->pc != 0x13163Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130720_0x130720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13163Cu; }
        if (ctx->pc != 0x13163Cu) { return; }
    }
    ctx->pc = 0x13163Cu;
label_13163c:
    // 0x13163c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131640: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x131640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x131644: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x131644u;
    {
        const bool branch_taken_0x131644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131644u;
            // 0x131648: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131644) {
            ctx->pc = 0x1316E8u;
            goto label_1316e8;
        }
    }
    ctx->pc = 0x13164Cu;
label_13164c:
    // 0x13164c: 0x32430010  andi        $v1, $s2, 0x10
    ctx->pc = 0x13164cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
label_131650:
    // 0x131650: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x131650u;
    {
        const bool branch_taken_0x131650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131650) {
            ctx->pc = 0x131654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131650u;
            // 0x131654: 0xc601007c  lwc1        $f1, 0x7C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1316ACu;
            goto label_1316ac;
        }
    }
    ctx->pc = 0x131658u;
    // 0x131658: 0xc614007c  lwc1        $f20, 0x7C($s0)
    ctx->pc = 0x131658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13165c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13165cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131660: 0x0  nop
    ctx->pc = 0x131660u;
    // NOP
    // 0x131664: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x131664u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131668: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x131668u;
    {
        const bool branch_taken_0x131668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131668) {
            ctx->pc = 0x13166Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131668u;
            // 0x13166c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13167Cu;
            goto label_13167c;
        }
    }
    ctx->pc = 0x131670u;
    // 0x131670: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x131670u;
    {
        const bool branch_taken_0x131670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131670u;
            // 0x131674: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131670) {
            ctx->pc = 0x131698u;
            goto label_131698;
        }
    }
    ctx->pc = 0x131678u;
    // 0x131678: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x131678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13167c:
    // 0x13167c: 0xc04c6ac  jal         func_131AB0
    ctx->pc = 0x13167Cu;
    SET_GPR_U32(ctx, 31, 0x131684u);
    ctx->pc = 0x131AB0u;
    if (runtime->hasFunction(0x131AB0u)) {
        auto targetFn = runtime->lookupFunction(0x131AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131684u; }
        if (ctx->pc != 0x131684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131AB0_0x131ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131684u; }
        if (ctx->pc != 0x131684u) { return; }
    }
    ctx->pc = 0x131684u;
label_131684:
    // 0x131684: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x131684u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x131688: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x131688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13168c: 0xc04c408  jal         func_131020
    ctx->pc = 0x13168Cu;
    SET_GPR_U32(ctx, 31, 0x131694u);
    ctx->pc = 0x131690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13168Cu;
            // 0x131690: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131020u;
    if (runtime->hasFunction(0x131020u)) {
        auto targetFn = runtime->lookupFunction(0x131020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131694u; }
        if (ctx->pc != 0x131694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131020_0x131020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131694u; }
        if (ctx->pc != 0x131694u) { return; }
    }
    ctx->pc = 0x131694u;
label_131694:
    // 0x131694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131698:
    // 0x131698: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x131698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13169c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13169cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1316a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1316A0u;
    {
        const bool branch_taken_0x1316a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1316A0u;
            // 0x1316a4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316a0) {
            ctx->pc = 0x1316E8u;
            goto label_1316e8;
        }
    }
    ctx->pc = 0x1316A8u;
    // 0x1316a8: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x1316a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1316ac:
    // 0x1316ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1316acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1316b0: 0x0  nop
    ctx->pc = 0x1316b0u;
    // NOP
    // 0x1316b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1316b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1316b8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1316B8u;
    {
        const bool branch_taken_0x1316b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1316b8) {
            ctx->pc = 0x1316BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1316B8u;
            // 0x1316bc: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1316CCu;
            goto label_1316cc;
        }
    }
    ctx->pc = 0x1316C0u;
    // 0x1316c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1316C0u;
    {
        const bool branch_taken_0x1316c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1316C0u;
            // 0x1316c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316c0) {
            ctx->pc = 0x1316DCu;
            goto label_1316dc;
        }
    }
    ctx->pc = 0x1316C8u;
    // 0x1316c8: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x1316c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_1316cc:
    // 0x1316cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1316ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1316d0: 0xc04c408  jal         func_131020
    ctx->pc = 0x1316D0u;
    SET_GPR_U32(ctx, 31, 0x1316D8u);
    ctx->pc = 0x1316D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1316D0u;
            // 0x1316d4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131020u;
    if (runtime->hasFunction(0x131020u)) {
        auto targetFn = runtime->lookupFunction(0x131020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1316D8u; }
        if (ctx->pc != 0x1316D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131020_0x131020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1316D8u; }
        if (ctx->pc != 0x1316D8u) { return; }
    }
    ctx->pc = 0x1316D8u;
label_1316d8:
    // 0x1316d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1316d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1316dc:
    // 0x1316dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1316dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1316e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1316e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1316e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1316e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1316e8:
    // 0x1316e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1316e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1316ec: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1316ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1316f0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1316F0u;
    {
        const bool branch_taken_0x1316f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1316f0) {
            ctx->pc = 0x13173Cu;
            goto label_13173c;
        }
    }
    ctx->pc = 0x1316F8u;
    // 0x1316f8: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x1316f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x1316fc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1316FCu;
    {
        const bool branch_taken_0x1316fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1316fc) {
            ctx->pc = 0x131700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1316FCu;
            // 0x131700: 0x34830001  ori         $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x131714u;
            goto label_131714;
        }
    }
    ctx->pc = 0x131704u;
    // 0x131704: 0x34830400  ori         $v1, $a0, 0x400
    ctx->pc = 0x131704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
    // 0x131708: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x131708u;
    {
        const bool branch_taken_0x131708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13170Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131708u;
            // 0x13170c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131708) {
            ctx->pc = 0x131718u;
            goto label_131718;
        }
    }
    ctx->pc = 0x131710u;
    // 0x131710: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x131710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_131714:
    // 0x131714: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x131714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_131718:
    // 0x131718: 0x32430008  andi        $v1, $s2, 0x8
    ctx->pc = 0x131718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x13171c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13171Cu;
    {
        const bool branch_taken_0x13171c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13171c) {
            ctx->pc = 0x13173Cu;
            goto label_13173c;
        }
    }
    ctx->pc = 0x131724u;
    // 0x131724: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x131724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x131728: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x131728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13172c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13172Cu;
    {
        const bool branch_taken_0x13172c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13172c) {
            ctx->pc = 0x13173Cu;
            goto label_13173c;
        }
    }
    ctx->pc = 0x131734u;
    // 0x131734: 0xc04c5d8  jal         func_131760
    ctx->pc = 0x131734u;
    SET_GPR_U32(ctx, 31, 0x13173Cu);
    ctx->pc = 0x131738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131734u;
            // 0x131738: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131760u;
    if (runtime->hasFunction(0x131760u)) {
        auto targetFn = runtime->lookupFunction(0x131760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13173Cu; }
        if (ctx->pc != 0x13173Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131760_0x131760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13173Cu; }
        if (ctx->pc != 0x13173Cu) { return; }
    }
    ctx->pc = 0x13173Cu;
label_13173c:
    // 0x13173c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13173cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_131740:
    // 0x131740: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x131740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131744: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x131744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131748: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x131748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13174c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13174cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131750: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x131750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131754: 0x3e00008  jr          $ra
    ctx->pc = 0x131754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131754u;
            // 0x131758: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13175Cu;
    // 0x13175c: 0x0  nop
    ctx->pc = 0x13175cu;
    // NOP
}
