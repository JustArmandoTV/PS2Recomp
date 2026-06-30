#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143730
// Address: 0x143730 - 0x1439f0
void sub_00143730_0x143730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143730_0x143730");
#endif

    switch (ctx->pc) {
        case 0x14375cu: goto label_14375c;
        case 0x143788u: goto label_143788;
        case 0x1437acu: goto label_1437ac;
        case 0x1437c8u: goto label_1437c8;
        case 0x1437f8u: goto label_1437f8;
        case 0x143808u: goto label_143808;
        case 0x14381cu: goto label_14381c;
        case 0x143834u: goto label_143834;
        case 0x143840u: goto label_143840;
        case 0x14399cu: goto label_14399c;
        case 0x1439b8u: goto label_1439b8;
        case 0x1439c0u: goto label_1439c0;
        default: break;
    }

    ctx->pc = 0x143730u;

    // 0x143730: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x143730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x143734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x143734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x143738: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14373c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143740: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x143740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143744: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143748: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x143748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14374c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143750: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x143750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143754: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x143754u;
    SET_GPR_U32(ctx, 31, 0x14375Cu);
    ctx->pc = 0x143758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143754u;
            // 0x143758: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14375Cu; }
        if (ctx->pc != 0x14375Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14375Cu; }
        if (ctx->pc != 0x14375Cu) { return; }
    }
    ctx->pc = 0x14375Cu;
label_14375c:
    // 0x14375c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14375cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143760: 0x1663000b  bne         $s3, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x143760u;
    {
        const bool branch_taken_0x143760 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x143764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143760u;
            // 0x143764: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143760) {
            ctx->pc = 0x143790u;
            goto label_143790;
        }
    }
    ctx->pc = 0x143768u;
    // 0x143768: 0xdf878048  ld          $a3, -0x7FB8($gp)
    ctx->pc = 0x143768u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294934600)));
    // 0x14376c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x14376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x143770: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143774: 0xaf828298  sw          $v0, -0x7D68($gp)
    ctx->pc = 0x143774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935192), GPR_U32(ctx, 2));
    // 0x143778: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x143778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14377c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143780: 0xc057540  jal         func_15D500
    ctx->pc = 0x143780u;
    SET_GPR_U32(ctx, 31, 0x143788u);
    ctx->pc = 0x143784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143780u;
            // 0x143784: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143788u; }
        if (ctx->pc != 0x143788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143788u; }
        if (ctx->pc != 0x143788u) { return; }
    }
    ctx->pc = 0x143788u;
label_143788:
    // 0x143788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143788u;
    {
        const bool branch_taken_0x143788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143788u;
            // 0x14378c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143788) {
            ctx->pc = 0x143798u;
            goto label_143798;
        }
    }
    ctx->pc = 0x143790u;
label_143790:
    // 0x143790: 0xaf808298  sw          $zero, -0x7D68($gp)
    ctx->pc = 0x143790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935192), GPR_U32(ctx, 0));
    // 0x143794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143798:
    // 0x143798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x143798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14379c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x14379cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1437a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1437a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437a4: 0xc057540  jal         func_15D500
    ctx->pc = 0x1437A4u;
    SET_GPR_U32(ctx, 31, 0x1437ACu);
    ctx->pc = 0x1437A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1437A4u;
            // 0x1437a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1437ACu; }
        if (ctx->pc != 0x1437ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1437ACu; }
        if (ctx->pc != 0x1437ACu) { return; }
    }
    ctx->pc = 0x1437ACu;
label_1437ac:
    // 0x1437ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1437acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1437b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1437b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437b4: 0xdc472058  ld          $a3, 0x2058($v0)
    ctx->pc = 0x1437b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x1437b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1437b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437bc: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x1437bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1437c0: 0xc057540  jal         func_15D500
    ctx->pc = 0x1437C0u;
    SET_GPR_U32(ctx, 31, 0x1437C8u);
    ctx->pc = 0x1437C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1437C0u;
            // 0x1437c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1437C8u; }
        if (ctx->pc != 0x1437C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1437C8u; }
        if (ctx->pc != 0x1437C8u) { return; }
    }
    ctx->pc = 0x1437C8u;
label_1437c8:
    // 0x1437c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1437c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1437cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1437ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437d0: 0x8c432034  lw          $v1, 0x2034($v0)
    ctx->pc = 0x1437d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8244)));
    // 0x1437d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1437d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437d8: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1437d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1437dc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1437dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1437e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1437e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1437e4: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x1437e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x1437e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1437e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1437ec: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x1437ecu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1437f0: 0xc057540  jal         func_15D500
    ctx->pc = 0x1437F0u;
    SET_GPR_U32(ctx, 31, 0x1437F8u);
    ctx->pc = 0x1437F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1437F0u;
            // 0x1437f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1437F8u; }
        if (ctx->pc != 0x1437F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1437F8u; }
        if (ctx->pc != 0x1437F8u) { return; }
    }
    ctx->pc = 0x1437F8u;
label_1437f8:
    // 0x1437f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1437f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1437fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x143800: 0xc05750c  jal         func_15D430
    ctx->pc = 0x143800u;
    SET_GPR_U32(ctx, 31, 0x143808u);
    ctx->pc = 0x143804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143800u;
            // 0x143804: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143808u; }
        if (ctx->pc != 0x143808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143808u; }
        if (ctx->pc != 0x143808u) { return; }
    }
    ctx->pc = 0x143808u;
label_143808:
    // 0x143808: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x143808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14380c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x14380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x143810: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x143810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x143814: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x143814u;
    SET_GPR_U32(ctx, 31, 0x14381Cu);
    ctx->pc = 0x143818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143814u;
            // 0x143818: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14381Cu; }
        if (ctx->pc != 0x14381Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14381Cu; }
        if (ctx->pc != 0x14381Cu) { return; }
    }
    ctx->pc = 0x14381Cu;
label_14381c:
    // 0x14381c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14381cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x143820: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x143820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x143824: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x143824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x143828: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x143828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
    // 0x14382c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x14382Cu;
    SET_GPR_U32(ctx, 31, 0x143834u);
    ctx->pc = 0x143830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14382Cu;
            // 0x143830: 0x24c65a30  addiu       $a2, $a2, 0x5A30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143834u; }
        if (ctx->pc != 0x143834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143834u; }
        if (ctx->pc != 0x143834u) { return; }
    }
    ctx->pc = 0x143834u;
label_143834:
    // 0x143834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x143834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143838: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x143838u;
    SET_GPR_U32(ctx, 31, 0x143840u);
    ctx->pc = 0x14383Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143838u;
            // 0x14383c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143840u; }
        if (ctx->pc != 0x143840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143840u; }
        if (ctx->pc != 0x143840u) { return; }
    }
    ctx->pc = 0x143840u;
label_143840:
    // 0x143840: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x143840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143844: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x143844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x143848: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x143848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14384c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x143850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143854: 0x0  nop
    ctx->pc = 0x143854u;
    // NOP
    // 0x143858: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x143858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14385c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14385cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143860: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143860u;
    {
        const bool branch_taken_0x143860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143860) {
            ctx->pc = 0x143864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143860u;
            // 0x143864: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143878u;
            goto label_143878;
        }
    }
    ctx->pc = 0x143868u;
    // 0x143868: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143868u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14386c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14386cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x143870: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143870u;
    {
        const bool branch_taken_0x143870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143870) {
            ctx->pc = 0x14388Cu;
            goto label_14388c;
        }
    }
    ctx->pc = 0x143878u;
label_143878:
    // 0x143878: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14387c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14387cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143880: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x143880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x143884: 0x0  nop
    ctx->pc = 0x143884u;
    // NOP
    // 0x143888: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x143888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_14388c:
    // 0x14388c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x143890: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x143890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x143894: 0xac445b20  sw          $a0, 0x5B20($v0)
    ctx->pc = 0x143894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23328), GPR_U32(ctx, 4));
    // 0x143898: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x143898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14389c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x14389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1438a0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1438a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1438a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1438a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1438a8: 0x0  nop
    ctx->pc = 0x1438a8u;
    // NOP
    // 0x1438ac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1438acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1438b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1438b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1438b4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1438B4u;
    {
        const bool branch_taken_0x1438b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1438b4) {
            ctx->pc = 0x1438B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1438B4u;
            // 0x1438b8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1438CCu;
            goto label_1438cc;
        }
    }
    ctx->pc = 0x1438BCu;
    // 0x1438bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1438bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1438c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1438c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1438c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1438C4u;
    {
        const bool branch_taken_0x1438c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1438c4) {
            ctx->pc = 0x1438E0u;
            goto label_1438e0;
        }
    }
    ctx->pc = 0x1438CCu;
label_1438cc:
    // 0x1438cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1438ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1438d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1438d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1438d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1438d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1438d8: 0x0  nop
    ctx->pc = 0x1438d8u;
    // NOP
    // 0x1438dc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1438dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1438e0:
    // 0x1438e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1438e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1438e4: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1438e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1438e8: 0xac445b24  sw          $a0, 0x5B24($v0)
    ctx->pc = 0x1438e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23332), GPR_U32(ctx, 4));
    // 0x1438ec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1438ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1438f0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1438f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1438f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1438f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1438f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1438f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1438fc: 0x0  nop
    ctx->pc = 0x1438fcu;
    // NOP
    // 0x143900: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x143900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x143904: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x143904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143908: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143908u;
    {
        const bool branch_taken_0x143908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143908) {
            ctx->pc = 0x14390Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143908u;
            // 0x14390c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143920u;
            goto label_143920;
        }
    }
    ctx->pc = 0x143910u;
    // 0x143910: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143910u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143914: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x143914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x143918: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143918u;
    {
        const bool branch_taken_0x143918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143918) {
            ctx->pc = 0x143934u;
            goto label_143934;
        }
    }
    ctx->pc = 0x143920u;
label_143920:
    // 0x143920: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143924: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143928: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x143928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14392c: 0x0  nop
    ctx->pc = 0x14392cu;
    // NOP
    // 0x143930: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x143930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_143934:
    // 0x143934: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x143934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x143938: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x143938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x14393c: 0xac445b28  sw          $a0, 0x5B28($v0)
    ctx->pc = 0x14393cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23336), GPR_U32(ctx, 4));
    // 0x143940: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x143940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143944: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x143944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143948: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14394c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14394cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143950: 0x0  nop
    ctx->pc = 0x143950u;
    // NOP
    // 0x143954: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x143954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x143958: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x143958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14395c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14395Cu;
    {
        const bool branch_taken_0x14395c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14395c) {
            ctx->pc = 0x143960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14395Cu;
            // 0x143960: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143974u;
            goto label_143974;
        }
    }
    ctx->pc = 0x143964u;
    // 0x143964: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143964u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143968: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x143968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14396c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14396Cu;
    {
        const bool branch_taken_0x14396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14396c) {
            ctx->pc = 0x143988u;
            goto label_143988;
        }
    }
    ctx->pc = 0x143974u;
label_143974:
    // 0x143974: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143978: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14397c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14397cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x143980: 0x0  nop
    ctx->pc = 0x143980u;
    // NOP
    // 0x143984: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x143984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_143988:
    // 0x143988: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x143988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14398c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14398cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x143990: 0xac445b2c  sw          $a0, 0x5B2C($v0)
    ctx->pc = 0x143990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23340), GPR_U32(ctx, 4));
    // 0x143994: 0xc057548  jal         func_15D520
    ctx->pc = 0x143994u;
    SET_GPR_U32(ctx, 31, 0x14399Cu);
    ctx->pc = 0x143998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143994u;
            // 0x143998: 0x3464001c  ori         $a0, $v1, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (runtime->hasFunction(0x15D520u)) {
        auto targetFn = runtime->lookupFunction(0x15D520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14399Cu; }
        if (ctx->pc != 0x14399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D520_0x15d520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14399Cu; }
        if (ctx->pc != 0x14399Cu) { return; }
    }
    ctx->pc = 0x14399Cu;
label_14399c:
    // 0x14399c: 0x8f838298  lw          $v1, -0x7D68($gp)
    ctx->pc = 0x14399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935192)));
    // 0x1439a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1439a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1439a4: 0x8f8282f0  lw          $v0, -0x7D10($gp)
    ctx->pc = 0x1439a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x1439a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1439a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439ac: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1439acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1439b0: 0xc057240  jal         func_15C900
    ctx->pc = 0x1439B0u;
    SET_GPR_U32(ctx, 31, 0x1439B8u);
    ctx->pc = 0x1439B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1439B0u;
            // 0x1439b4: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C900u;
    if (runtime->hasFunction(0x15C900u)) {
        auto targetFn = runtime->lookupFunction(0x15C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1439B8u; }
        if (ctx->pc != 0x1439B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C900_0x15c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1439B8u; }
        if (ctx->pc != 0x1439B8u) { return; }
    }
    ctx->pc = 0x1439B8u;
label_1439b8:
    // 0x1439b8: 0xc05724c  jal         func_15C930
    ctx->pc = 0x1439B8u;
    SET_GPR_U32(ctx, 31, 0x1439C0u);
    ctx->pc = 0x1439BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1439B8u;
            // 0x1439bc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C930u;
    if (runtime->hasFunction(0x15C930u)) {
        auto targetFn = runtime->lookupFunction(0x15C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1439C0u; }
        if (ctx->pc != 0x1439C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C930_0x15c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1439C0u; }
        if (ctx->pc != 0x1439C0u) { return; }
    }
    ctx->pc = 0x1439C0u;
label_1439c0:
    // 0x1439c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1439c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1439c4: 0xaf8082b0  sw          $zero, -0x7D50($gp)
    ctx->pc = 0x1439c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935216), GPR_U32(ctx, 0));
    // 0x1439c8: 0xaf8382a8  sw          $v1, -0x7D58($gp)
    ctx->pc = 0x1439c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935208), GPR_U32(ctx, 3));
    // 0x1439cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1439ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1439d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1439d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1439d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1439d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1439d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1439d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1439dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1439dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1439e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1439E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1439E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1439E0u;
            // 0x1439e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1439E8u;
    // 0x1439e8: 0x0  nop
    ctx->pc = 0x1439e8u;
    // NOP
    // 0x1439ec: 0x0  nop
    ctx->pc = 0x1439ecu;
    // NOP
}
