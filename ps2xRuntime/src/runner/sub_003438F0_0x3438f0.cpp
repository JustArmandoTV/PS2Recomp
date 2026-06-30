#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003438F0
// Address: 0x3438f0 - 0x343ab0
void sub_003438F0_0x3438f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003438F0_0x3438f0");
#endif

    switch (ctx->pc) {
        case 0x34392cu: goto label_34392c;
        case 0x34398cu: goto label_34398c;
        case 0x343994u: goto label_343994;
        case 0x3439a8u: goto label_3439a8;
        case 0x3439c8u: goto label_3439c8;
        case 0x3439e4u: goto label_3439e4;
        case 0x343a0cu: goto label_343a0c;
        case 0x343a34u: goto label_343a34;
        case 0x343a60u: goto label_343a60;
        case 0x343a80u: goto label_343a80;
        default: break;
    }

    ctx->pc = 0x3438f0u;

    // 0x3438f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3438f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3438f4: 0x24050350  addiu       $a1, $zero, 0x350
    ctx->pc = 0x3438f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
    // 0x3438f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3438f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3438fc: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x3438fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x343900: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x343900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x343904: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x343904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x343908: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x343908u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34390c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x343910: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x343910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x343914: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x343914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x343918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x343918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34391c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x343920: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x343920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x343924: 0xc05750c  jal         func_15D430
    ctx->pc = 0x343924u;
    SET_GPR_U32(ctx, 31, 0x34392Cu);
    ctx->pc = 0x343928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343924u;
            // 0x343928: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34392Cu; }
        if (ctx->pc != 0x34392Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34392Cu; }
        if (ctx->pc != 0x34392Cu) { return; }
    }
    ctx->pc = 0x34392Cu;
label_34392c:
    // 0x34392c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x34392cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343930: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x343930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x343934: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x343934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x343938: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x343938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x34393c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x343940: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x343940u;
    {
        const bool branch_taken_0x343940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343940u;
            // 0x343944: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343940) {
            ctx->pc = 0x34395Cu;
            goto label_34395c;
        }
    }
    ctx->pc = 0x343948u;
    // 0x343948: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x343948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x34394c: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x34394cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x343950: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x343950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x343954: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x343954u;
    {
        const bool branch_taken_0x343954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343954u;
            // 0x343958: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343954) {
            ctx->pc = 0x34396Cu;
            goto label_34396c;
        }
    }
    ctx->pc = 0x34395Cu;
label_34395c:
    // 0x34395c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x343960: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x343960u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x343964: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x343964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x343968: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x343968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_34396c:
    // 0x34396c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x34396cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x343970: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x343970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343974: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x343974u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x343978: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x343978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34397c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x34397cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x343980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343984: 0xc057540  jal         func_15D500
    ctx->pc = 0x343984u;
    SET_GPR_U32(ctx, 31, 0x34398Cu);
    ctx->pc = 0x343988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343984u;
            // 0x343988: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34398Cu; }
        if (ctx->pc != 0x34398Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34398Cu; }
        if (ctx->pc != 0x34398Cu) { return; }
    }
    ctx->pc = 0x34398Cu;
label_34398c:
    // 0x34398c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x34398cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343990: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x343990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_343994:
    // 0x343994: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x343994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343998: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x343998u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34399c: 0xde070008  ld          $a3, 0x8($s0)
    ctx->pc = 0x34399cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3439a0: 0xc057540  jal         func_15D500
    ctx->pc = 0x3439A0u;
    SET_GPR_U32(ctx, 31, 0x3439A8u);
    ctx->pc = 0x3439A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3439A0u;
            // 0x3439a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3439A8u; }
        if (ctx->pc != 0x3439A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3439A8u; }
        if (ctx->pc != 0x3439A8u) { return; }
    }
    ctx->pc = 0x3439A8u;
label_3439a8:
    // 0x3439a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3439a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3439ac: 0x2e82000c  sltiu       $v0, $s4, 0xC
    ctx->pc = 0x3439acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3439b0: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3439B0u;
    {
        const bool branch_taken_0x3439b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3439b0) {
            ctx->pc = 0x3439B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3439B0u;
            // 0x3439b4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343994;
        }
    }
    ctx->pc = 0x3439B8u;
    // 0x3439b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3439b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439bc: 0x24120200  addiu       $s2, $zero, 0x200
    ctx->pc = 0x3439bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3439c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3439c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439c4: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x3439c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3439c8:
    // 0x3439c8: 0x11383c  dsll32      $a3, $s1, 0
    ctx->pc = 0x3439c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3439cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3439ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439d0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x3439d0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x3439d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3439d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439d8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3439d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3439dc: 0xc057540  jal         func_15D500
    ctx->pc = 0x3439DCu;
    SET_GPR_U32(ctx, 31, 0x3439E4u);
    ctx->pc = 0x3439E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3439DCu;
            // 0x3439e0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3439E4u; }
        if (ctx->pc != 0x3439E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3439E4u; }
        if (ctx->pc != 0x3439E4u) { return; }
    }
    ctx->pc = 0x3439E4u;
label_3439e4:
    // 0x3439e4: 0x26627600  addiu       $v0, $s3, 0x7600
    ctx->pc = 0x3439e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30208));
    // 0x3439e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3439e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3439ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3439f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3439f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3439f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3439f8: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x3439f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x3439fc: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x3439fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x343a00: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x343a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x343a04: 0xc057540  jal         func_15D500
    ctx->pc = 0x343A04u;
    SET_GPR_U32(ctx, 31, 0x343A0Cu);
    ctx->pc = 0x343A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343A04u;
            // 0x343a08: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A0Cu; }
        if (ctx->pc != 0x343A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A0Cu; }
        if (ctx->pc != 0x343A0Cu) { return; }
    }
    ctx->pc = 0x343A0Cu;
label_343a0c:
    // 0x343a0c: 0x9ec3006c  lwu         $v1, 0x6C($s6)
    ctx->pc = 0x343a0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x343a10: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x343a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x343a14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x343a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x343a18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x343a1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x343a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a20: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x343a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x343a24: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x343a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x343a28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x343a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x343a2c: 0xc057540  jal         func_15D500
    ctx->pc = 0x343A2Cu;
    SET_GPR_U32(ctx, 31, 0x343A34u);
    ctx->pc = 0x343A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343A2Cu;
            // 0x343a30: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A34u; }
        if (ctx->pc != 0x343A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A34u; }
        if (ctx->pc != 0x343A34u) { return; }
    }
    ctx->pc = 0x343A34u;
label_343a34:
    // 0x343a34: 0x9ec30070  lwu         $v1, 0x70($s6)
    ctx->pc = 0x343a34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x343a38: 0x26427600  addiu       $v0, $s2, 0x7600
    ctx->pc = 0x343a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 30208));
    // 0x343a3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x343a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343a40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x343a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a44: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x343a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x343a48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x343a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x343a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x343a50: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x343a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x343a54: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x343a54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x343a58: 0xc057540  jal         func_15D500
    ctx->pc = 0x343A58u;
    SET_GPR_U32(ctx, 31, 0x343A60u);
    ctx->pc = 0x343A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343A58u;
            // 0x343a5c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A60u; }
        if (ctx->pc != 0x343A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A60u; }
        if (ctx->pc != 0x343A60u) { return; }
    }
    ctx->pc = 0x343A60u;
label_343a60:
    // 0x343a60: 0x26520200  addiu       $s2, $s2, 0x200
    ctx->pc = 0x343a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x343a64: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x343a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x343a68: 0x2a411401  slti        $at, $s2, 0x1401
    ctx->pc = 0x343a68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5121) ? 1 : 0);
    // 0x343a6c: 0x26730200  addiu       $s3, $s3, 0x200
    ctx->pc = 0x343a6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x343a70: 0x1420ffd5  bnez        $at, . + 4 + (-0x2B << 2)
    ctx->pc = 0x343A70u;
    {
        const bool branch_taken_0x343a70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x343A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343A70u;
            // 0x343a74: 0x26100400  addiu       $s0, $s0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a70) {
            ctx->pc = 0x3439C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3439c8;
        }
    }
    ctx->pc = 0x343A78u;
    // 0x343a78: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x343A78u;
    SET_GPR_U32(ctx, 31, 0x343A80u);
    ctx->pc = 0x343A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343A78u;
            // 0x343a7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A80u; }
        if (ctx->pc != 0x343A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A80u; }
        if (ctx->pc != 0x343A80u) { return; }
    }
    ctx->pc = 0x343A80u;
label_343a80:
    // 0x343a80: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x343a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x343a84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x343a84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x343a88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x343a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x343a8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x343a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x343a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x343a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x343a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x343a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x343a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x343a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x343AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343AA0u;
            // 0x343aa4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x343AA8u;
    // 0x343aa8: 0x0  nop
    ctx->pc = 0x343aa8u;
    // NOP
    // 0x343aac: 0x0  nop
    ctx->pc = 0x343aacu;
    // NOP
}
