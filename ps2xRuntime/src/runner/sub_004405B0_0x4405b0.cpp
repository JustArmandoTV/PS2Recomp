#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004405B0
// Address: 0x4405b0 - 0x440700
void sub_004405B0_0x4405b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004405B0_0x4405b0");
#endif

    switch (ctx->pc) {
        case 0x4405b0u: goto label_4405b0;
        case 0x4405b4u: goto label_4405b4;
        case 0x4405b8u: goto label_4405b8;
        case 0x4405bcu: goto label_4405bc;
        case 0x4405c0u: goto label_4405c0;
        case 0x4405c4u: goto label_4405c4;
        case 0x4405c8u: goto label_4405c8;
        case 0x4405ccu: goto label_4405cc;
        case 0x4405d0u: goto label_4405d0;
        case 0x4405d4u: goto label_4405d4;
        case 0x4405d8u: goto label_4405d8;
        case 0x4405dcu: goto label_4405dc;
        case 0x4405e0u: goto label_4405e0;
        case 0x4405e4u: goto label_4405e4;
        case 0x4405e8u: goto label_4405e8;
        case 0x4405ecu: goto label_4405ec;
        case 0x4405f0u: goto label_4405f0;
        case 0x4405f4u: goto label_4405f4;
        case 0x4405f8u: goto label_4405f8;
        case 0x4405fcu: goto label_4405fc;
        case 0x440600u: goto label_440600;
        case 0x440604u: goto label_440604;
        case 0x440608u: goto label_440608;
        case 0x44060cu: goto label_44060c;
        case 0x440610u: goto label_440610;
        case 0x440614u: goto label_440614;
        case 0x440618u: goto label_440618;
        case 0x44061cu: goto label_44061c;
        case 0x440620u: goto label_440620;
        case 0x440624u: goto label_440624;
        case 0x440628u: goto label_440628;
        case 0x44062cu: goto label_44062c;
        case 0x440630u: goto label_440630;
        case 0x440634u: goto label_440634;
        case 0x440638u: goto label_440638;
        case 0x44063cu: goto label_44063c;
        case 0x440640u: goto label_440640;
        case 0x440644u: goto label_440644;
        case 0x440648u: goto label_440648;
        case 0x44064cu: goto label_44064c;
        case 0x440650u: goto label_440650;
        case 0x440654u: goto label_440654;
        case 0x440658u: goto label_440658;
        case 0x44065cu: goto label_44065c;
        case 0x440660u: goto label_440660;
        case 0x440664u: goto label_440664;
        case 0x440668u: goto label_440668;
        case 0x44066cu: goto label_44066c;
        case 0x440670u: goto label_440670;
        case 0x440674u: goto label_440674;
        case 0x440678u: goto label_440678;
        case 0x44067cu: goto label_44067c;
        case 0x440680u: goto label_440680;
        case 0x440684u: goto label_440684;
        case 0x440688u: goto label_440688;
        case 0x44068cu: goto label_44068c;
        case 0x440690u: goto label_440690;
        case 0x440694u: goto label_440694;
        case 0x440698u: goto label_440698;
        case 0x44069cu: goto label_44069c;
        case 0x4406a0u: goto label_4406a0;
        case 0x4406a4u: goto label_4406a4;
        case 0x4406a8u: goto label_4406a8;
        case 0x4406acu: goto label_4406ac;
        case 0x4406b0u: goto label_4406b0;
        case 0x4406b4u: goto label_4406b4;
        case 0x4406b8u: goto label_4406b8;
        case 0x4406bcu: goto label_4406bc;
        case 0x4406c0u: goto label_4406c0;
        case 0x4406c4u: goto label_4406c4;
        case 0x4406c8u: goto label_4406c8;
        case 0x4406ccu: goto label_4406cc;
        case 0x4406d0u: goto label_4406d0;
        case 0x4406d4u: goto label_4406d4;
        case 0x4406d8u: goto label_4406d8;
        case 0x4406dcu: goto label_4406dc;
        case 0x4406e0u: goto label_4406e0;
        case 0x4406e4u: goto label_4406e4;
        case 0x4406e8u: goto label_4406e8;
        case 0x4406ecu: goto label_4406ec;
        case 0x4406f0u: goto label_4406f0;
        case 0x4406f4u: goto label_4406f4;
        case 0x4406f8u: goto label_4406f8;
        case 0x4406fcu: goto label_4406fc;
        default: break;
    }

    ctx->pc = 0x4405b0u;

label_4405b0:
    // 0x4405b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4405b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4405b4:
    // 0x4405b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4405b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4405b8:
    // 0x4405b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4405b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4405bc:
    // 0x4405bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4405bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4405c0:
    // 0x4405c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4405c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4405c4:
    // 0x4405c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4405c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4405c8:
    // 0x4405c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4405c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4405cc:
    // 0x4405cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4405ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4405d0:
    // 0x4405d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4405d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4405d4:
    // 0x4405d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4405d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4405d8:
    // 0x4405d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4405d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4405dc:
    // 0x4405dc: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x4405dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4405e0:
    // 0x4405e0: 0xc0a8734  jal         func_2A1CD0
label_4405e4:
    if (ctx->pc == 0x4405E4u) {
        ctx->pc = 0x4405E4u;
            // 0x4405e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4405E8u;
        goto label_4405e8;
    }
    ctx->pc = 0x4405E0u;
    SET_GPR_U32(ctx, 31, 0x4405E8u);
    ctx->pc = 0x4405E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4405E0u;
            // 0x4405e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1CD0u;
    if (runtime->hasFunction(0x2A1CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A1CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4405E8u; }
        if (ctx->pc != 0x4405E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1CD0_0x2a1cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4405E8u; }
        if (ctx->pc != 0x4405E8u) { return; }
    }
    ctx->pc = 0x4405E8u;
label_4405e8:
    // 0x4405e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4405e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4405ec:
    // 0x4405ec: 0xc0a87a8  jal         func_2A1EA0
label_4405f0:
    if (ctx->pc == 0x4405F0u) {
        ctx->pc = 0x4405F0u;
            // 0x4405f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4405F4u;
        goto label_4405f4;
    }
    ctx->pc = 0x4405ECu;
    SET_GPR_U32(ctx, 31, 0x4405F4u);
    ctx->pc = 0x4405F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4405ECu;
            // 0x4405f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1EA0u;
    if (runtime->hasFunction(0x2A1EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2A1EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4405F4u; }
        if (ctx->pc != 0x4405F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1EA0_0x2a1ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4405F4u; }
        if (ctx->pc != 0x4405F4u) { return; }
    }
    ctx->pc = 0x4405F4u;
label_4405f4:
    // 0x4405f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4405f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4405f8:
    // 0x4405f8: 0x8c440eb0  lw          $a0, 0xEB0($v0)
    ctx->pc = 0x4405f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3760)));
label_4405fc:
    // 0x4405fc: 0xc0506ac  jal         func_141AB0
label_440600:
    if (ctx->pc == 0x440600u) {
        ctx->pc = 0x440600u;
            // 0x440600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x440604u;
        goto label_440604;
    }
    ctx->pc = 0x4405FCu;
    SET_GPR_U32(ctx, 31, 0x440604u);
    ctx->pc = 0x440600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4405FCu;
            // 0x440600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440604u; }
        if (ctx->pc != 0x440604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440604u; }
        if (ctx->pc != 0x440604u) { return; }
    }
    ctx->pc = 0x440604u;
label_440604:
    // 0x440604: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x440604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_440608:
    // 0x440608: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x440608u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_44060c:
    // 0x44060c: 0x8c508a08  lw          $s0, -0x75F8($v0)
    ctx->pc = 0x44060cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_440610:
    // 0x440610: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x440610u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440614:
    // 0x440614: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x440614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440618:
    // 0x440618: 0x2652eb70  addiu       $s2, $s2, -0x1490
    ctx->pc = 0x440618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962032));
label_44061c:
    // 0x44061c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44061cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440620:
    // 0x440620: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x440620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_440624:
    // 0x440624: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x440624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_440628:
    // 0x440628: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x440628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_44062c:
    // 0x44062c: 0x8c4589f0  lw          $a1, -0x7610($v0)
    ctx->pc = 0x44062cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_440630:
    // 0x440630: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x440630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_440634:
    // 0x440634: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x440634u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440638:
    // 0x440638: 0x24e7eb70  addiu       $a3, $a3, -0x1490
    ctx->pc = 0x440638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962032));
label_44063c:
    // 0x44063c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44063cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_440640:
    // 0x440640: 0x24c6e7b0  addiu       $a2, $a2, -0x1850
    ctx->pc = 0x440640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961072));
label_440644:
    // 0x440644: 0x90a80029  lbu         $t0, 0x29($a1)
    ctx->pc = 0x440644u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
label_440648:
    // 0x440648: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x440648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44064c:
    // 0x44064c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x44064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_440650:
    // 0x440650: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x440650u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_440654:
    // 0x440654: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x440654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_440658:
    // 0x440658: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x440658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_44065c:
    // 0x44065c: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x44065cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_440660:
    // 0x440660: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x440660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_440664:
    // 0x440664: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x440664u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_440668:
    // 0x440668: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x440668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_44066c:
    // 0x44066c: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x44066cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
label_440670:
    // 0x440670: 0xae670050  sw          $a3, 0x50($s3)
    ctx->pc = 0x440670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 7));
label_440674:
    // 0x440674: 0xae720064  sw          $s2, 0x64($s3)
    ctx->pc = 0x440674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 18));
label_440678:
    // 0x440678: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x440678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_44067c:
    // 0x44067c: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x44067cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
label_440680:
    // 0x440680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x440680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_440684:
    // 0x440684: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x440684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_440688:
    // 0x440688: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x440688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_44068c:
    // 0x44068c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x44068cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_440690:
    // 0x440690: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x440690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_440694:
    // 0x440694: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x440694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_440698:
    // 0x440698: 0xc0575cc  jal         func_15D730
label_44069c:
    if (ctx->pc == 0x44069Cu) {
        ctx->pc = 0x44069Cu;
            // 0x44069c: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x4406A0u;
        goto label_4406a0;
    }
    ctx->pc = 0x440698u;
    SET_GPR_U32(ctx, 31, 0x4406A0u);
    ctx->pc = 0x44069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440698u;
            // 0x44069c: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4406A0u; }
        if (ctx->pc != 0x4406A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4406A0u; }
        if (ctx->pc != 0x4406A0u) { return; }
    }
    ctx->pc = 0x4406A0u;
label_4406a0:
    // 0x4406a0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4406a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4406a4:
    // 0x4406a4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x4406a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_4406a8:
    // 0x4406a8: 0x2ea20005  sltiu       $v0, $s5, 0x5
    ctx->pc = 0x4406a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4406ac:
    // 0x4406ac: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4406acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4406b0:
    // 0x4406b0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x4406b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4406b4:
    // 0x4406b4: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_4406b8:
    if (ctx->pc == 0x4406B8u) {
        ctx->pc = 0x4406B8u;
            // 0x4406b8: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x4406BCu;
        goto label_4406bc;
    }
    ctx->pc = 0x4406B4u;
    {
        const bool branch_taken_0x4406b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4406B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4406B4u;
            // 0x4406b8: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4406b4) {
            ctx->pc = 0x440624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_440624;
        }
    }
    ctx->pc = 0x4406BCu;
label_4406bc:
    // 0x4406bc: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x4406bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4406c0:
    // 0x4406c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4406c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4406c4:
    // 0x4406c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4406c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4406c8:
    // 0x4406c8: 0x320f809  jalr        $t9
label_4406cc:
    if (ctx->pc == 0x4406CCu) {
        ctx->pc = 0x4406CCu;
            // 0x4406cc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4406D0u;
        goto label_4406d0;
    }
    ctx->pc = 0x4406C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4406D0u);
        ctx->pc = 0x4406CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4406C8u;
            // 0x4406cc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4406D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4406D0u; }
            if (ctx->pc != 0x4406D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4406D0u;
label_4406d0:
    // 0x4406d0: 0xa6c00060  sh          $zero, 0x60($s6)
    ctx->pc = 0x4406d0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 96), (uint16_t)GPR_U32(ctx, 0));
label_4406d4:
    // 0x4406d4: 0xa2c00062  sb          $zero, 0x62($s6)
    ctx->pc = 0x4406d4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 98), (uint8_t)GPR_U32(ctx, 0));
label_4406d8:
    // 0x4406d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4406d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4406dc:
    // 0x4406dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4406dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4406e0:
    // 0x4406e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4406e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4406e4:
    // 0x4406e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4406e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4406e8:
    // 0x4406e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4406e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4406ec:
    // 0x4406ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4406ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4406f0:
    // 0x4406f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4406f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4406f4:
    // 0x4406f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4406f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4406f8:
    // 0x4406f8: 0x3e00008  jr          $ra
label_4406fc:
    if (ctx->pc == 0x4406FCu) {
        ctx->pc = 0x4406FCu;
            // 0x4406fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x440700u;
        goto label_fallthrough_0x4406f8;
    }
    ctx->pc = 0x4406F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4406FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4406F8u;
            // 0x4406fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4406f8:
    ctx->pc = 0x440700u;
}
