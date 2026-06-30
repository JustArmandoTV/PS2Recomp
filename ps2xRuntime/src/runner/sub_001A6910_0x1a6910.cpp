#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6910
// Address: 0x1a6910 - 0x1a6a50
void sub_001A6910_0x1a6910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6910_0x1a6910");
#endif

    switch (ctx->pc) {
        case 0x1a6938u: goto label_1a6938;
        case 0x1a6980u: goto label_1a6980;
        case 0x1a6998u: goto label_1a6998;
        case 0x1a69d0u: goto label_1a69d0;
        case 0x1a6a2cu: goto label_1a6a2c;
        default: break;
    }

    ctx->pc = 0x1a6910u;

    // 0x1a6910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6914: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a6918: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a6918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a691c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a691cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a6920: 0x26500d88  addiu       $s0, $s2, 0xD88
    ctx->pc = 0x1a6920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3464));
    // 0x1a6924: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a6924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6928: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a6928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a692c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a692cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a6930: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A6930u;
    SET_GPR_U32(ctx, 31, 0x1A6938u);
    ctx->pc = 0x1A6934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6930u;
            // 0x1a6934: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6938u; }
        if (ctx->pc != 0x1A6938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6938u; }
        if (ctx->pc != 0x1A6938u) { return; }
    }
    ctx->pc = 0x1A6938u;
label_1a6938:
    // 0x1a6938: 0x8e060164  lw          $a2, 0x164($s0)
    ctx->pc = 0x1a6938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1a693c: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x1a693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1a6940: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a6940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6944: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x1a6944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1a6948: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a6948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a694c: 0xae060164  sw          $a2, 0x164($s0)
    ctx->pc = 0x1a694cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 6));
    // 0x1a6950: 0x2467001f  addiu       $a3, $v1, 0x1F
    ctx->pc = 0x1a6950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1a6954: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x1a6954u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a6958: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a6958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a695c: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x1a695cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1a6960: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1a6960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1a6964: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a6964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a6968: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1a6968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a696c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a696cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6970: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a6970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a6974: 0xac460ef4  sw          $a2, 0xEF4($v0)
    ctx->pc = 0x1a6974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3828), GPR_U32(ctx, 6));
    // 0x1a6978: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A6978u;
    SET_GPR_U32(ctx, 31, 0x1A6980u);
    ctx->pc = 0x1A697Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6978u;
            // 0x1a697c: 0xae030168  sw          $v1, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6980u; }
        if (ctx->pc != 0x1A6980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6980u; }
        if (ctx->pc != 0x1A6980u) { return; }
    }
    ctx->pc = 0x1A6980u;
label_1a6980:
    // 0x1a6980: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a6980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6984: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a6984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6988: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a698c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a698cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a6990: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6990u;
            // 0x1a6994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6998u;
label_1a6998:
    // 0x1a6998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a699c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a69a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a69a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a69a8: 0x26300d88  addiu       $s0, $s1, 0xD88
    ctx->pc = 0x1a69a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
    // 0x1a69ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a69acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a69b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a69b4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a69b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a69b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a69b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a69bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a69c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a69c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69c4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a69c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a69c8: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A69C8u;
    SET_GPR_U32(ctx, 31, 0x1A69D0u);
    ctx->pc = 0x1A69CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69C8u;
            // 0x1a69cc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69D0u; }
        if (ctx->pc != 0x1A69D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69D0u; }
        if (ctx->pc != 0x1A69D0u) { return; }
    }
    ctx->pc = 0x1A69D0u;
label_1a69d0:
    // 0x1a69d0: 0x8e0701f4  lw          $a3, 0x1F4($s0)
    ctx->pc = 0x1a69d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1a69d4: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x1a69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x1a69d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a69d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69dc: 0x24e6001f  addiu       $a2, $a3, 0x1F
    ctx->pc = 0x1a69dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x1a69e0: 0x28e50000  slti        $a1, $a3, 0x0
    ctx->pc = 0x1a69e0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a69e4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1a69e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69e8: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a69ec: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1a69ecu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1a69f0: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x1a69f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a69f4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A69F4u;
    {
        const bool branch_taken_0x1a69f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69F4u;
            // 0x1a69f8: 0x21143  sra         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69f4) {
            ctx->pc = 0x1A6A24u;
            goto label_1a6a24;
        }
    }
    ctx->pc = 0x1A69FCu;
    // 0x1a69fc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a6a00: 0xae1201ec  sw          $s2, 0x1EC($s0)
    ctx->pc = 0x1a6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 18));
    // 0x1a6a04: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x1a6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a6a08: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a6a08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6a0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6a10: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a6a14: 0xac530f84  sw          $s3, 0xF84($v0)
    ctx->pc = 0x1a6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3972), GPR_U32(ctx, 19));
    // 0x1a6a18: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x1a6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1a6a1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a6a20: 0xae0301f4  sw          $v1, 0x1F4($s0)
    ctx->pc = 0x1a6a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 3));
label_1a6a24:
    // 0x1a6a24: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A6A24u;
    SET_GPR_U32(ctx, 31, 0x1A6A2Cu);
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A2Cu; }
        if (ctx->pc != 0x1A6A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A2Cu; }
        if (ctx->pc != 0x1A6A2Cu) { return; }
    }
    ctx->pc = 0x1A6A2Cu;
label_1a6a2c:
    // 0x1a6a2c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a6a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a6a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6a34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a6a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6a38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6a3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a6a3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a6a40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a6a40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6a44: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a6a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a6a48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A48u;
            // 0x1a6a4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6A50u;
}
