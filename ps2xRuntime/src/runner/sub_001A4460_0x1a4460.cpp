#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4460
// Address: 0x1a4460 - 0x1a45e0
void sub_001A4460_0x1a4460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4460_0x1a4460");
#endif

    switch (ctx->pc) {
        case 0x1a4460u: goto label_1a4460;
        case 0x1a4464u: goto label_1a4464;
        case 0x1a4468u: goto label_1a4468;
        case 0x1a446cu: goto label_1a446c;
        case 0x1a4470u: goto label_1a4470;
        case 0x1a4474u: goto label_1a4474;
        case 0x1a4478u: goto label_1a4478;
        case 0x1a447cu: goto label_1a447c;
        case 0x1a4480u: goto label_1a4480;
        case 0x1a4484u: goto label_1a4484;
        case 0x1a4488u: goto label_1a4488;
        case 0x1a448cu: goto label_1a448c;
        case 0x1a4490u: goto label_1a4490;
        case 0x1a4494u: goto label_1a4494;
        case 0x1a4498u: goto label_1a4498;
        case 0x1a449cu: goto label_1a449c;
        case 0x1a44a0u: goto label_1a44a0;
        case 0x1a44a4u: goto label_1a44a4;
        case 0x1a44a8u: goto label_1a44a8;
        case 0x1a44acu: goto label_1a44ac;
        case 0x1a44b0u: goto label_1a44b0;
        case 0x1a44b4u: goto label_1a44b4;
        case 0x1a44b8u: goto label_1a44b8;
        case 0x1a44bcu: goto label_1a44bc;
        case 0x1a44c0u: goto label_1a44c0;
        case 0x1a44c4u: goto label_1a44c4;
        case 0x1a44c8u: goto label_1a44c8;
        case 0x1a44ccu: goto label_1a44cc;
        case 0x1a44d0u: goto label_1a44d0;
        case 0x1a44d4u: goto label_1a44d4;
        case 0x1a44d8u: goto label_1a44d8;
        case 0x1a44dcu: goto label_1a44dc;
        case 0x1a44e0u: goto label_1a44e0;
        case 0x1a44e4u: goto label_1a44e4;
        case 0x1a44e8u: goto label_1a44e8;
        case 0x1a44ecu: goto label_1a44ec;
        case 0x1a44f0u: goto label_1a44f0;
        case 0x1a44f4u: goto label_1a44f4;
        case 0x1a44f8u: goto label_1a44f8;
        case 0x1a44fcu: goto label_1a44fc;
        case 0x1a4500u: goto label_1a4500;
        case 0x1a4504u: goto label_1a4504;
        case 0x1a4508u: goto label_1a4508;
        case 0x1a450cu: goto label_1a450c;
        case 0x1a4510u: goto label_1a4510;
        case 0x1a4514u: goto label_1a4514;
        case 0x1a4518u: goto label_1a4518;
        case 0x1a451cu: goto label_1a451c;
        case 0x1a4520u: goto label_1a4520;
        case 0x1a4524u: goto label_1a4524;
        case 0x1a4528u: goto label_1a4528;
        case 0x1a452cu: goto label_1a452c;
        case 0x1a4530u: goto label_1a4530;
        case 0x1a4534u: goto label_1a4534;
        case 0x1a4538u: goto label_1a4538;
        case 0x1a453cu: goto label_1a453c;
        case 0x1a4540u: goto label_1a4540;
        case 0x1a4544u: goto label_1a4544;
        case 0x1a4548u: goto label_1a4548;
        case 0x1a454cu: goto label_1a454c;
        case 0x1a4550u: goto label_1a4550;
        case 0x1a4554u: goto label_1a4554;
        case 0x1a4558u: goto label_1a4558;
        case 0x1a455cu: goto label_1a455c;
        case 0x1a4560u: goto label_1a4560;
        case 0x1a4564u: goto label_1a4564;
        case 0x1a4568u: goto label_1a4568;
        case 0x1a456cu: goto label_1a456c;
        case 0x1a4570u: goto label_1a4570;
        case 0x1a4574u: goto label_1a4574;
        case 0x1a4578u: goto label_1a4578;
        case 0x1a457cu: goto label_1a457c;
        case 0x1a4580u: goto label_1a4580;
        case 0x1a4584u: goto label_1a4584;
        case 0x1a4588u: goto label_1a4588;
        case 0x1a458cu: goto label_1a458c;
        case 0x1a4590u: goto label_1a4590;
        case 0x1a4594u: goto label_1a4594;
        case 0x1a4598u: goto label_1a4598;
        case 0x1a459cu: goto label_1a459c;
        case 0x1a45a0u: goto label_1a45a0;
        case 0x1a45a4u: goto label_1a45a4;
        case 0x1a45a8u: goto label_1a45a8;
        case 0x1a45acu: goto label_1a45ac;
        case 0x1a45b0u: goto label_1a45b0;
        case 0x1a45b4u: goto label_1a45b4;
        case 0x1a45b8u: goto label_1a45b8;
        case 0x1a45bcu: goto label_1a45bc;
        case 0x1a45c0u: goto label_1a45c0;
        case 0x1a45c4u: goto label_1a45c4;
        case 0x1a45c8u: goto label_1a45c8;
        case 0x1a45ccu: goto label_1a45cc;
        case 0x1a45d0u: goto label_1a45d0;
        case 0x1a45d4u: goto label_1a45d4;
        case 0x1a45d8u: goto label_1a45d8;
        case 0x1a45dcu: goto label_1a45dc;
        default: break;
    }

    ctx->pc = 0x1a4460u;

label_1a4460:
    // 0x1a4460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a4460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a4464:
    // 0x1a4464: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a4464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a4468:
    // 0x1a4468: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a4468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a446c:
    // 0x1a446c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1a446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_1a4470:
    // 0x1a4470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4474:
    // 0x1a4474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4478:
    // 0x1a4478: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1a4478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1a447c:
    // 0x1a447c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1a447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_1a4480:
    // 0x1a4480: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a4480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a4484:
    // 0x1a4484: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a4484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a4488:
    // 0x1a4488: 0xc05ccc0  jal         func_173300
label_1a448c:
    if (ctx->pc == 0x1A448Cu) {
        ctx->pc = 0x1A448Cu;
            // 0x1a448c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4490u;
        goto label_1a4490;
    }
    ctx->pc = 0x1A4488u;
    SET_GPR_U32(ctx, 31, 0x1A4490u);
    ctx->pc = 0x1A448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4488u;
            // 0x1a448c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4490u; }
        if (ctx->pc != 0x1A4490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173300_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4490u; }
        if (ctx->pc != 0x1A4490u) { return; }
    }
    ctx->pc = 0x1A4490u;
label_1a4490:
    // 0x1a4490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4494:
    // 0x1a4494: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a4494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a4498:
    // 0x1a4498: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x1a4498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1a449c:
    // 0x1a449c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a449cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1a44a0:
    // 0x1a44a0: 0xc05cda0  jal         func_173680
label_1a44a4:
    if (ctx->pc == 0x1A44A4u) {
        ctx->pc = 0x1A44A4u;
            // 0x1a44a4: 0xac629960  sw          $v0, -0x66A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941024), GPR_U32(ctx, 2));
        ctx->pc = 0x1A44A8u;
        goto label_1a44a8;
    }
    ctx->pc = 0x1A44A0u;
    SET_GPR_U32(ctx, 31, 0x1A44A8u);
    ctx->pc = 0x1A44A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A44A0u;
            // 0x1a44a4: 0xac629960  sw          $v0, -0x66A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173680u;
    if (runtime->hasFunction(0x173680u)) {
        auto targetFn = runtime->lookupFunction(0x173680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44A8u; }
        if (ctx->pc != 0x1A44A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173680_0x173680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44A8u; }
        if (ctx->pc != 0x1A44A8u) { return; }
    }
    ctx->pc = 0x1A44A8u;
label_1a44a8:
    // 0x1a44a8: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1a44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1a44ac:
    // 0x1a44ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a44b0:
    // 0x1a44b0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1a44b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1a44b4:
    // 0x1a44b4: 0xc070136  jal         func_1C04D8
label_1a44b8:
    if (ctx->pc == 0x1A44B8u) {
        ctx->pc = 0x1A44B8u;
            // 0x1a44b8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x1A44BCu;
        goto label_1a44bc;
    }
    ctx->pc = 0x1A44B4u;
    SET_GPR_U32(ctx, 31, 0x1A44BCu);
    ctx->pc = 0x1A44B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A44B4u;
            // 0x1a44b8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C04D8u;
    if (runtime->hasFunction(0x1C04D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C04D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44BCu; }
        if (ctx->pc != 0x1A44BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C04D8_0x1c04d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44BCu; }
        if (ctx->pc != 0x1A44BCu) { return; }
    }
    ctx->pc = 0x1A44BCu;
label_1a44bc:
    // 0x1a44bc: 0xc07018a  jal         func_1C0628
label_1a44c0:
    if (ctx->pc == 0x1A44C0u) {
        ctx->pc = 0x1A44C0u;
            // 0x1a44c0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->pc = 0x1A44C4u;
        goto label_1a44c4;
    }
    ctx->pc = 0x1A44BCu;
    SET_GPR_U32(ctx, 31, 0x1A44C4u);
    ctx->pc = 0x1A44C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A44BCu;
            // 0x1a44c0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0628u;
    if (runtime->hasFunction(0x1C0628u)) {
        auto targetFn = runtime->lookupFunction(0x1C0628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44C4u; }
        if (ctx->pc != 0x1A44C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0628_0x1c0628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44C4u; }
        if (ctx->pc != 0x1A44C4u) { return; }
    }
    ctx->pc = 0x1A44C4u;
label_1a44c4:
    // 0x1a44c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a44c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a44c8:
    // 0x1a44c8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1a44c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a44cc:
    // 0x1a44cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a44ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a44d0:
    // 0x1a44d0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1a44d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a44d4:
    // 0x1a44d4: 0xc06e410  jal         func_1B9040
label_1a44d8:
    if (ctx->pc == 0x1A44D8u) {
        ctx->pc = 0x1A44D8u;
            // 0x1a44d8: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->pc = 0x1A44DCu;
        goto label_1a44dc;
    }
    ctx->pc = 0x1A44D4u;
    SET_GPR_U32(ctx, 31, 0x1A44DCu);
    ctx->pc = 0x1A44D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A44D4u;
            // 0x1a44d8: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (runtime->hasFunction(0x1B9040u)) {
        auto targetFn = runtime->lookupFunction(0x1B9040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44DCu; }
        if (ctx->pc != 0x1A44DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9040_0x1b9040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44DCu; }
        if (ctx->pc != 0x1A44DCu) { return; }
    }
    ctx->pc = 0x1A44DCu;
label_1a44dc:
    // 0x1a44dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a44e0:
    // 0x1a44e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a44e4:
    // 0x1a44e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a44e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1a44e8:
    // 0x1a44e8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a44e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a44ec:
    // 0x1a44ec: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1a44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1a44f0:
    // 0x1a44f0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1a44f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a44f4:
    // 0x1a44f4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1a44f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a44f8:
    // 0x1a44f8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1a44f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1a44fc:
    // 0x1a44fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a44fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a4500:
    // 0x1a4500: 0x3e00008  jr          $ra
label_1a4504:
    if (ctx->pc == 0x1A4504u) {
        ctx->pc = 0x1A4504u;
            // 0x1a4504: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1A4508u;
        goto label_1a4508;
    }
    ctx->pc = 0x1A4500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4500u;
            // 0x1a4504: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4508u;
label_1a4508:
    // 0x1a4508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a450c:
    // 0x1a450c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a450cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4510:
    // 0x1a4510: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4514:
    // 0x1a4514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4518:
    // 0x1a4518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a451c:
    // 0x1a451c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a4520:
    // 0x1a4520: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a4520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a4524:
    // 0x1a4524: 0x8e232074  lw          $v1, 0x2074($s1)
    ctx->pc = 0x1a4524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8308)));
label_1a4528:
    // 0x1a4528: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1a4528u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a452c:
    // 0x1a452c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_1a4530:
    if (ctx->pc == 0x1A4530u) {
        ctx->pc = 0x1A4530u;
            // 0x1a4530: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x1A4534u;
        goto label_1a4534;
    }
    ctx->pc = 0x1A452Cu;
    {
        const bool branch_taken_0x1a452c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A452Cu;
            // 0x1a4530: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a452c) {
            ctx->pc = 0x1A45C8u;
            goto label_1a45c8;
        }
    }
    ctx->pc = 0x1A4534u;
label_1a4534:
    // 0x1a4534: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1a4534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
label_1a4538:
    // 0x1a4538: 0x2447be90  addiu       $a3, $v0, -0x4170
    ctx->pc = 0x1a4538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950544));
label_1a453c:
    // 0x1a453c: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x1a453cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a4540:
    // 0x1a4540: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x1a4540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a4544:
    // 0x1a4544: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x1a4544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a4548:
    // 0x1a4548: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x1a4548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a454c:
    // 0x1a454c: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x1a454cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a4550:
    // 0x1a4550: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x1a4550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a4554:
    // 0x1a4554: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x1a4554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4558:
    // 0x1a4558: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x1a4558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a455c:
    // 0x1a455c: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x1a455cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4560:
    // 0x1a4560: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x1a4560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4564:
    // 0x1a4564: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x1a4564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4568:
    // 0x1a4568: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x1a4568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a456c:
    // 0x1a456c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x1a456cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a4570:
    // 0x1a4570: 0xc06cf70  jal         func_1B3DC0
label_1a4574:
    if (ctx->pc == 0x1A4574u) {
        ctx->pc = 0x1A4574u;
            // 0x1a4574: 0xace40018  sw          $a0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
        ctx->pc = 0x1A4578u;
        goto label_1a4578;
    }
    ctx->pc = 0x1A4570u;
    SET_GPR_U32(ctx, 31, 0x1A4578u);
    ctx->pc = 0x1A4574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4570u;
            // 0x1a4574: 0xace40018  sw          $a0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DC0u;
    if (runtime->hasFunction(0x1B3DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4578u; }
        if (ctx->pc != 0x1A4578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DC0_0x1b3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4578u; }
        if (ctx->pc != 0x1A4578u) { return; }
    }
    ctx->pc = 0x1A4578u;
label_1a4578:
    // 0x1a4578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a457c:
    // 0x1a457c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1a4580:
    if (ctx->pc == 0x1A4580u) {
        ctx->pc = 0x1A4580u;
            // 0x1a4580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4584u;
        goto label_1a4584;
    }
    ctx->pc = 0x1A457Cu;
    {
        const bool branch_taken_0x1a457c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A4580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A457Cu;
            // 0x1a4580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a457c) {
            ctx->pc = 0x1A4598u;
            goto label_1a4598;
        }
    }
    ctx->pc = 0x1A4584u;
label_1a4584:
    // 0x1a4584: 0xc069178  jal         func_1A45E0
label_1a4588:
    if (ctx->pc == 0x1A4588u) {
        ctx->pc = 0x1A4588u;
            // 0x1a4588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A458Cu;
        goto label_1a458c;
    }
    ctx->pc = 0x1A4584u;
    SET_GPR_U32(ctx, 31, 0x1A458Cu);
    ctx->pc = 0x1A4588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4584u;
            // 0x1a4588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A45E0u;
    if (runtime->hasFunction(0x1A45E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A45E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A458Cu; }
        if (ctx->pc != 0x1A458Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A45E0_0x1a45e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A458Cu; }
        if (ctx->pc != 0x1A458Cu) { return; }
    }
    ctx->pc = 0x1A458Cu;
label_1a458c:
    // 0x1a458c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4590:
    if (ctx->pc == 0x1A4590u) {
        ctx->pc = 0x1A4590u;
            // 0x1a4590: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4594u;
        goto label_1a4594;
    }
    ctx->pc = 0x1A458Cu;
    {
        const bool branch_taken_0x1a458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A458Cu;
            // 0x1a4590: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a458c) {
            ctx->pc = 0x1A45ACu;
            goto label_1a45ac;
        }
    }
    ctx->pc = 0x1A4594u;
label_1a4594:
    // 0x1a4594: 0x0  nop
    ctx->pc = 0x1a4594u;
    // NOP
label_1a4598:
    // 0x1a4598: 0xc06918e  jal         func_1A4638
label_1a459c:
    if (ctx->pc == 0x1A459Cu) {
        ctx->pc = 0x1A45A0u;
        goto label_1a45a0;
    }
    ctx->pc = 0x1A4598u;
    SET_GPR_U32(ctx, 31, 0x1A45A0u);
    ctx->pc = 0x1A4638u;
    if (runtime->hasFunction(0x1A4638u)) {
        auto targetFn = runtime->lookupFunction(0x1A4638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45A0u; }
        if (ctx->pc != 0x1A45A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4638_0x1a4638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45A0u; }
        if (ctx->pc != 0x1A45A0u) { return; }
    }
    ctx->pc = 0x1A45A0u;
label_1a45a0:
    // 0x1a45a0: 0xc069180  jal         func_1A4600
label_1a45a4:
    if (ctx->pc == 0x1A45A4u) {
        ctx->pc = 0x1A45A4u;
            // 0x1a45a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A45A8u;
        goto label_1a45a8;
    }
    ctx->pc = 0x1A45A0u;
    SET_GPR_U32(ctx, 31, 0x1A45A8u);
    ctx->pc = 0x1A45A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A45A0u;
            // 0x1a45a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4600u;
    if (runtime->hasFunction(0x1A4600u)) {
        auto targetFn = runtime->lookupFunction(0x1A4600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45A8u; }
        if (ctx->pc != 0x1A45A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4600_0x1a4600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45A8u; }
        if (ctx->pc != 0x1A45A8u) { return; }
    }
    ctx->pc = 0x1A45A8u;
label_1a45a8:
    // 0x1a45a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a45a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a45ac:
    // 0x1a45ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a45acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a45b0:
    // 0x1a45b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a45b4:
    // 0x1a45b4: 0x40f809  jalr        $v0
label_1a45b8:
    if (ctx->pc == 0x1A45B8u) {
        ctx->pc = 0x1A45B8u;
            // 0x1a45b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A45BCu;
        goto label_1a45bc;
    }
    ctx->pc = 0x1A45B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A45BCu);
        ctx->pc = 0x1A45B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A45B4u;
            // 0x1a45b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A45BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A45BCu; }
            if (ctx->pc != 0x1A45BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A45BCu;
label_1a45bc:
    // 0x1a45bc: 0xc07011a  jal         func_1C0468
label_1a45c0:
    if (ctx->pc == 0x1A45C0u) {
        ctx->pc = 0x1A45C4u;
        goto label_1a45c4;
    }
    ctx->pc = 0x1A45BCu;
    SET_GPR_U32(ctx, 31, 0x1A45C4u);
    ctx->pc = 0x1C0468u;
    if (runtime->hasFunction(0x1C0468u)) {
        auto targetFn = runtime->lookupFunction(0x1C0468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45C4u; }
        if (ctx->pc != 0x1A45C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0468_0x1c0468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45C4u; }
        if (ctx->pc != 0x1A45C4u) { return; }
    }
    ctx->pc = 0x1A45C4u;
label_1a45c4:
    // 0x1a45c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a45c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a45c8:
    // 0x1a45c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a45c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a45cc:
    // 0x1a45cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a45ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a45d0:
    // 0x1a45d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a45d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a45d4:
    // 0x1a45d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a45d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a45d8:
    // 0x1a45d8: 0x3e00008  jr          $ra
label_1a45dc:
    if (ctx->pc == 0x1A45DCu) {
        ctx->pc = 0x1A45DCu;
            // 0x1a45dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A45E0u;
        goto label_fallthrough_0x1a45d8;
    }
    ctx->pc = 0x1A45D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A45DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A45D8u;
            // 0x1a45dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a45d8:
    ctx->pc = 0x1A45E0u;
}
