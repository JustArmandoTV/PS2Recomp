#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B760
// Address: 0x22b760 - 0x22b820
void sub_0022B760_0x22b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B760_0x22b760");
#endif

    switch (ctx->pc) {
        case 0x22b760u: goto label_22b760;
        case 0x22b764u: goto label_22b764;
        case 0x22b768u: goto label_22b768;
        case 0x22b76cu: goto label_22b76c;
        case 0x22b770u: goto label_22b770;
        case 0x22b774u: goto label_22b774;
        case 0x22b778u: goto label_22b778;
        case 0x22b77cu: goto label_22b77c;
        case 0x22b780u: goto label_22b780;
        case 0x22b784u: goto label_22b784;
        case 0x22b788u: goto label_22b788;
        case 0x22b78cu: goto label_22b78c;
        case 0x22b790u: goto label_22b790;
        case 0x22b794u: goto label_22b794;
        case 0x22b798u: goto label_22b798;
        case 0x22b79cu: goto label_22b79c;
        case 0x22b7a0u: goto label_22b7a0;
        case 0x22b7a4u: goto label_22b7a4;
        case 0x22b7a8u: goto label_22b7a8;
        case 0x22b7acu: goto label_22b7ac;
        case 0x22b7b0u: goto label_22b7b0;
        case 0x22b7b4u: goto label_22b7b4;
        case 0x22b7b8u: goto label_22b7b8;
        case 0x22b7bcu: goto label_22b7bc;
        case 0x22b7c0u: goto label_22b7c0;
        case 0x22b7c4u: goto label_22b7c4;
        case 0x22b7c8u: goto label_22b7c8;
        case 0x22b7ccu: goto label_22b7cc;
        case 0x22b7d0u: goto label_22b7d0;
        case 0x22b7d4u: goto label_22b7d4;
        case 0x22b7d8u: goto label_22b7d8;
        case 0x22b7dcu: goto label_22b7dc;
        case 0x22b7e0u: goto label_22b7e0;
        case 0x22b7e4u: goto label_22b7e4;
        case 0x22b7e8u: goto label_22b7e8;
        case 0x22b7ecu: goto label_22b7ec;
        case 0x22b7f0u: goto label_22b7f0;
        case 0x22b7f4u: goto label_22b7f4;
        case 0x22b7f8u: goto label_22b7f8;
        case 0x22b7fcu: goto label_22b7fc;
        case 0x22b800u: goto label_22b800;
        case 0x22b804u: goto label_22b804;
        case 0x22b808u: goto label_22b808;
        case 0x22b80cu: goto label_22b80c;
        case 0x22b810u: goto label_22b810;
        case 0x22b814u: goto label_22b814;
        case 0x22b818u: goto label_22b818;
        case 0x22b81cu: goto label_22b81c;
        default: break;
    }

    ctx->pc = 0x22b760u;

label_22b760:
    // 0x22b760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22b764:
    // 0x22b764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22b768:
    // 0x22b768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22b76c:
    // 0x22b76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22b770:
    // 0x22b770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b774:
    // 0x22b774: 0xc08d3d4  jal         func_234F50
label_22b778:
    if (ctx->pc == 0x22B778u) {
        ctx->pc = 0x22B778u;
            // 0x22b778: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B77Cu;
        goto label_22b77c;
    }
    ctx->pc = 0x22B774u;
    SET_GPR_U32(ctx, 31, 0x22B77Cu);
    ctx->pc = 0x22B778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B774u;
            // 0x22b778: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234F50u;
    if (runtime->hasFunction(0x234F50u)) {
        auto targetFn = runtime->lookupFunction(0x234F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B77Cu; }
        if (ctx->pc != 0x22B77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234F50_0x234f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B77Cu; }
        if (ctx->pc != 0x22B77Cu) { return; }
    }
    ctx->pc = 0x22B77Cu;
label_22b77c:
    // 0x22b77c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x22b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_22b780:
    // 0x22b780: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22b780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22b784:
    // 0x22b784: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22b788:
    // 0x22b788: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_22b78c:
    if (ctx->pc == 0x22B78Cu) {
        ctx->pc = 0x22B78Cu;
            // 0x22b78c: 0x8e24006c  lw          $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x22B790u;
        goto label_22b790;
    }
    ctx->pc = 0x22B788u;
    {
        const bool branch_taken_0x22b788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b788) {
            ctx->pc = 0x22B78Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B788u;
            // 0x22b78c: 0x8e24006c  lw          $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B7C8u;
            goto label_22b7c8;
        }
    }
    ctx->pc = 0x22B790u;
label_22b790:
    // 0x22b790: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x22b790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b794:
    // 0x22b794: 0x410bc  dsll32      $v0, $a0, 2
    ctx->pc = 0x22b794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
label_22b798:
    // 0x22b798: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x22b798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_22b79c:
    // 0x22b79c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22b79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22b7a0:
    // 0x22b7a0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22b7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22b7a4:
    // 0x22b7a4: 0x8e270058  lw          $a3, 0x58($s1)
    ctx->pc = 0x22b7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_22b7a8:
    // 0x22b7a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22b7a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22b7ac:
    // 0x22b7ac: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x22b7acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22b7b0:
    // 0x22b7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b7b4:
    // 0x22b7b4: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x22b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
label_22b7b8:
    // 0x22b7b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22b7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22b7bc:
    // 0x22b7bc: 0x320f809  jalr        $t9
label_22b7c0:
    if (ctx->pc == 0x22B7C0u) {
        ctx->pc = 0x22B7C0u;
            // 0x22b7c0: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x22B7C4u;
        goto label_22b7c4;
    }
    ctx->pc = 0x22B7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B7C4u);
        ctx->pc = 0x22B7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B7BCu;
            // 0x22b7c0: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B7C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B7C4u; }
            if (ctx->pc != 0x22B7C4u) { return; }
        }
        }
    }
    ctx->pc = 0x22B7C4u;
label_22b7c4:
    // 0x22b7c4: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x22b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_22b7c8:
    // 0x22b7c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22b7cc:
    // 0x22b7cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22b7d0:
    // 0x22b7d0: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_22b7d4:
    if (ctx->pc == 0x22B7D4u) {
        ctx->pc = 0x22B7D4u;
            // 0x22b7d4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x22B7D8u;
        goto label_22b7d8;
    }
    ctx->pc = 0x22B7D0u;
    {
        const bool branch_taken_0x22b7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b7d0) {
            ctx->pc = 0x22B7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B7D0u;
            // 0x22b7d4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B810u;
            goto label_22b810;
        }
    }
    ctx->pc = 0x22B7D8u;
label_22b7d8:
    // 0x22b7d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x22b7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b7dc:
    // 0x22b7dc: 0x410bc  dsll32      $v0, $a0, 2
    ctx->pc = 0x22b7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
label_22b7e0:
    // 0x22b7e0: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x22b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_22b7e4:
    // 0x22b7e4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22b7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22b7e8:
    // 0x22b7e8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22b7ec:
    // 0x22b7ec: 0x8e270064  lw          $a3, 0x64($s1)
    ctx->pc = 0x22b7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_22b7f0:
    // 0x22b7f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22b7f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22b7f4:
    // 0x22b7f4: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x22b7f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22b7f8:
    // 0x22b7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b7fc:
    // 0x22b7fc: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x22b7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22b800:
    // 0x22b800: 0x24a5c698  addiu       $a1, $a1, -0x3968
    ctx->pc = 0x22b800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952600));
label_22b804:
    // 0x22b804: 0x320f809  jalr        $t9
label_22b808:
    if (ctx->pc == 0x22B808u) {
        ctx->pc = 0x22B808u;
            // 0x22b808: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22B80Cu;
        goto label_22b80c;
    }
    ctx->pc = 0x22B804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B80Cu);
        ctx->pc = 0x22B808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B804u;
            // 0x22b808: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B80Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B80Cu; }
            if (ctx->pc != 0x22B80Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22B80Cu;
label_22b80c:
    // 0x22b80c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22b80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22b810:
    // 0x22b810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b814:
    // 0x22b814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22b818:
    // 0x22b818: 0x3e00008  jr          $ra
label_22b81c:
    if (ctx->pc == 0x22B81Cu) {
        ctx->pc = 0x22B81Cu;
            // 0x22b81c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x22B820u;
        goto label_fallthrough_0x22b818;
    }
    ctx->pc = 0x22B818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B818u;
            // 0x22b81c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22b818:
    ctx->pc = 0x22B820u;
}
