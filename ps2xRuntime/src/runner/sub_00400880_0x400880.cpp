#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00400880
// Address: 0x400880 - 0x400a00
void sub_00400880_0x400880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400880_0x400880");
#endif

    switch (ctx->pc) {
        case 0x4008d8u: goto label_4008d8;
        case 0x4008e0u: goto label_4008e0;
        case 0x4008fcu: goto label_4008fc;
        case 0x400920u: goto label_400920;
        case 0x400928u: goto label_400928;
        case 0x400954u: goto label_400954;
        case 0x400968u: goto label_400968;
        case 0x4009d0u: goto label_4009d0;
        case 0x4009e4u: goto label_4009e4;
        default: break;
    }

    ctx->pc = 0x400880u;

    // 0x400880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x400880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x400884: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x400884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x400888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x400888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x40088c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x400890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x400890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x400894: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x400894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x400898: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x400898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40089c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40089cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4008a0: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x4008a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4008a4: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x4008A4u;
    {
        const bool branch_taken_0x4008a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4008A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4008A4u;
            // 0x4008a8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4008a4) {
            ctx->pc = 0x4009E4u;
            goto label_4009e4;
        }
    }
    ctx->pc = 0x4008ACu;
    // 0x4008ac: 0x3c011555  lui         $at, 0x1555
    ctx->pc = 0x4008acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5461 << 16));
    // 0x4008b0: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x4008b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
    // 0x4008b4: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x4008b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4008b8: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4008B8u;
    {
        const bool branch_taken_0x4008b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4008b8) {
            ctx->pc = 0x4008BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4008B8u;
            // 0x4008bc: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4008E4u;
            goto label_4008e4;
        }
    }
    ctx->pc = 0x4008C0u;
    // 0x4008c0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4008c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4008c4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4008c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4008c8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4008c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4008cc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4008ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4008d0: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4008D0u;
    SET_GPR_U32(ctx, 31, 0x4008D8u);
    ctx->pc = 0x4008D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4008D0u;
            // 0x4008d4: 0x24a5b8a0  addiu       $a1, $a1, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4008D8u; }
        if (ctx->pc != 0x4008D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4008D8u; }
        if (ctx->pc != 0x4008D8u) { return; }
    }
    ctx->pc = 0x4008D8u;
label_4008d8:
    // 0x4008d8: 0xc04981a  jal         func_126068
    ctx->pc = 0x4008D8u;
    SET_GPR_U32(ctx, 31, 0x4008E0u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4008E0u; }
        if (ctx->pc != 0x4008E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4008E0u; }
        if (ctx->pc != 0x4008E0u) { return; }
    }
    ctx->pc = 0x4008E0u;
label_4008e0:
    // 0x4008e0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4008e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4008e4:
    // 0x4008e4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4008e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x4008e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4008e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4008ec: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4008ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x4008f0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4008f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4008f4: 0xc040180  jal         func_100600
    ctx->pc = 0x4008F4u;
    SET_GPR_U32(ctx, 31, 0x4008FCu);
    ctx->pc = 0x4008F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4008F4u;
            // 0x4008f8: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4008FCu; }
        if (ctx->pc != 0x4008FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4008FCu; }
        if (ctx->pc != 0x4008FCu) { return; }
    }
    ctx->pc = 0x4008FCu;
label_4008fc:
    // 0x4008fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4008fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400900: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x400900u;
    {
        const bool branch_taken_0x400900 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x400900) {
            ctx->pc = 0x400904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400900u;
            // 0x400904: 0xafb00050  sw          $s0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40092Cu;
            goto label_40092c;
        }
    }
    ctx->pc = 0x400908u;
    // 0x400908: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x400908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x40090c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x40090cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x400910: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x400910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x400914: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x400914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x400918: 0xc049e92  jal         func_127A48
    ctx->pc = 0x400918u;
    SET_GPR_U32(ctx, 31, 0x400920u);
    ctx->pc = 0x40091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400918u;
            // 0x40091c: 0x24a5b940  addiu       $a1, $a1, -0x46C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400920u; }
        if (ctx->pc != 0x400920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400920u; }
        if (ctx->pc != 0x400920u) { return; }
    }
    ctx->pc = 0x400920u;
label_400920:
    // 0x400920: 0xc04981a  jal         func_126068
    ctx->pc = 0x400920u;
    SET_GPR_U32(ctx, 31, 0x400928u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400928u; }
        if (ctx->pc != 0x400928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400928u; }
        if (ctx->pc != 0x400928u) { return; }
    }
    ctx->pc = 0x400928u;
label_400928:
    // 0x400928: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x400928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_40092c:
    // 0x40092c: 0xafb10058  sw          $s1, 0x58($sp)
    ctx->pc = 0x40092cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
    // 0x400930: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x400930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x400934: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x400934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x400938: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x400938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x40093c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x400940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x400940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x400944: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x400944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x400948: 0x213082b  sltu        $at, $s0, $s3
    ctx->pc = 0x400948u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x40094c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x40094Cu;
    {
        const bool branch_taken_0x40094c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40094c) {
            ctx->pc = 0x400988u;
            goto label_400988;
        }
    }
    ctx->pc = 0x400954u;
label_400954:
    // 0x400954: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x400954u;
    {
        const bool branch_taken_0x400954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x400954) {
            ctx->pc = 0x400968u;
            goto label_400968;
        }
    }
    ctx->pc = 0x40095Cu;
    // 0x40095c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40095cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400960: 0xc100608  jal         func_401820
    ctx->pc = 0x400960u;
    SET_GPR_U32(ctx, 31, 0x400968u);
    ctx->pc = 0x400964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400960u;
            // 0x400964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401820u;
    if (runtime->hasFunction(0x401820u)) {
        auto targetFn = runtime->lookupFunction(0x401820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400968u; }
        if (ctx->pc != 0x400968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401820_0x401820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400968u; }
        if (ctx->pc != 0x400968u) { return; }
    }
    ctx->pc = 0x400968u;
label_400968:
    // 0x400968: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x400968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x40096c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x40096cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x400970: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x400970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x400974: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x400974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x400978: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x400978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40097c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x40097Cu;
    {
        const bool branch_taken_0x40097c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x400980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40097Cu;
            // 0x400980: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40097c) {
            ctx->pc = 0x400954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400954;
        }
    }
    ctx->pc = 0x400984u;
    // 0x400984: 0x0  nop
    ctx->pc = 0x400984u;
    // NOP
label_400988:
    // 0x400988: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x400988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x40098c: 0x5052000e  beql        $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x40098Cu;
    {
        const bool branch_taken_0x40098c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x40098c) {
            ctx->pc = 0x400990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40098Cu;
            // 0x400990: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4009C8u;
            goto label_4009c8;
        }
    }
    ctx->pc = 0x400994u;
    // 0x400994: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x400994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x400998: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x400998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x40099c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x40099cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x4009a0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4009a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4009a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x4009a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4009a8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4009ac: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x4009acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x4009b0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4009b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x4009b4: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x4009b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4009b8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4009b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4009bc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x4009bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x4009c0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x4009c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x4009c4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4009c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4009c8:
    // 0x4009c8: 0xc0b6464  jal         func_2D9190
    ctx->pc = 0x4009C8u;
    SET_GPR_U32(ctx, 31, 0x4009D0u);
    ctx->pc = 0x2D9190u;
    if (runtime->hasFunction(0x2D9190u)) {
        auto targetFn = runtime->lookupFunction(0x2D9190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4009D0u; }
        if (ctx->pc != 0x4009D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9190_0x2d9190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4009D0u; }
        if (ctx->pc != 0x4009D0u) { return; }
    }
    ctx->pc = 0x4009D0u;
label_4009d0:
    // 0x4009d0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x4009d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4009d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4009D4u;
    {
        const bool branch_taken_0x4009d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4009d4) {
            ctx->pc = 0x4009D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4009D4u;
            // 0x4009d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4009E8u;
            goto label_4009e8;
        }
    }
    ctx->pc = 0x4009DCu;
    // 0x4009dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4009DCu;
    SET_GPR_U32(ctx, 31, 0x4009E4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4009E4u; }
        if (ctx->pc != 0x4009E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4009E4u; }
        if (ctx->pc != 0x4009E4u) { return; }
    }
    ctx->pc = 0x4009E4u;
label_4009e4:
    // 0x4009e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4009e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4009e8:
    // 0x4009e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4009e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4009ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4009ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4009f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4009f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4009f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4009f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4009f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4009F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4009FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4009F8u;
            // 0x4009fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x400A00u;
}
