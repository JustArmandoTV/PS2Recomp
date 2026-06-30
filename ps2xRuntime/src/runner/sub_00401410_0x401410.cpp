#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00401410
// Address: 0x401410 - 0x4015b0
void sub_00401410_0x401410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401410_0x401410");
#endif

    switch (ctx->pc) {
        case 0x401460u: goto label_401460;
        case 0x401468u: goto label_401468;
        case 0x40147cu: goto label_40147c;
        case 0x4014a0u: goto label_4014a0;
        case 0x4014a8u: goto label_4014a8;
        case 0x4014ccu: goto label_4014cc;
        case 0x401580u: goto label_401580;
        case 0x401594u: goto label_401594;
        default: break;
    }

    ctx->pc = 0x401410u;

    // 0x401410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x401410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x401414: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x401414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x401418: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x401418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x40141c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40141cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x401420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x401420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x401424: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x401424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401428: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x401428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40142c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x40142cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x401430: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x401430u;
    {
        const bool branch_taken_0x401430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x401434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401430u;
            // 0x401434: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401430) {
            ctx->pc = 0x401594u;
            goto label_401594;
        }
    }
    ctx->pc = 0x401438u;
    // 0x401438: 0x3c010800  lui         $at, 0x800
    ctx->pc = 0x401438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2048 << 16));
    // 0x40143c: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x40143cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x401440: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x401440u;
    {
        const bool branch_taken_0x401440 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x401440) {
            ctx->pc = 0x401444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401440u;
            // 0x401444: 0x112140  sll         $a0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40146Cu;
            goto label_40146c;
        }
    }
    ctx->pc = 0x401448u;
    // 0x401448: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x401448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x40144c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x40144cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x401450: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x401450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x401454: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x401454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x401458: 0xc049e92  jal         func_127A48
    ctx->pc = 0x401458u;
    SET_GPR_U32(ctx, 31, 0x401460u);
    ctx->pc = 0x40145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401458u;
            // 0x40145c: 0x24a5b8a0  addiu       $a1, $a1, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401460u; }
        if (ctx->pc != 0x401460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401460u; }
        if (ctx->pc != 0x401460u) { return; }
    }
    ctx->pc = 0x401460u;
label_401460:
    // 0x401460: 0xc04981a  jal         func_126068
    ctx->pc = 0x401460u;
    SET_GPR_U32(ctx, 31, 0x401468u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401468u; }
        if (ctx->pc != 0x401468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401468u; }
        if (ctx->pc != 0x401468u) { return; }
    }
    ctx->pc = 0x401468u;
label_401468:
    // 0x401468: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x401468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_40146c:
    // 0x40146c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x40146cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x401470: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x401470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x401474: 0xc040180  jal         func_100600
    ctx->pc = 0x401474u;
    SET_GPR_U32(ctx, 31, 0x40147Cu);
    ctx->pc = 0x401478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401474u;
            // 0x401478: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40147Cu; }
        if (ctx->pc != 0x40147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40147Cu; }
        if (ctx->pc != 0x40147Cu) { return; }
    }
    ctx->pc = 0x40147Cu;
label_40147c:
    // 0x40147c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40147cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401480: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x401480u;
    {
        const bool branch_taken_0x401480 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x401480) {
            ctx->pc = 0x401484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401480u;
            // 0x401484: 0xafb10040  sw          $s1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4014ACu;
            goto label_4014ac;
        }
    }
    ctx->pc = 0x401488u;
    // 0x401488: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x401488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x40148c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x40148cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x401490: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x401490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x401494: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x401494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x401498: 0xc049e92  jal         func_127A48
    ctx->pc = 0x401498u;
    SET_GPR_U32(ctx, 31, 0x4014A0u);
    ctx->pc = 0x40149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401498u;
            // 0x40149c: 0x24a5b920  addiu       $a1, $a1, -0x46E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4014A0u; }
        if (ctx->pc != 0x4014A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4014A0u; }
        if (ctx->pc != 0x4014A0u) { return; }
    }
    ctx->pc = 0x4014A0u;
label_4014a0:
    // 0x4014a0: 0xc04981a  jal         func_126068
    ctx->pc = 0x4014A0u;
    SET_GPR_U32(ctx, 31, 0x4014A8u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4014A8u; }
        if (ctx->pc != 0x4014A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4014A8u; }
        if (ctx->pc != 0x4014A8u) { return; }
    }
    ctx->pc = 0x4014A8u;
label_4014a8:
    // 0x4014a8: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x4014a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
label_4014ac:
    // 0x4014ac: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x4014acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    // 0x4014b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4014b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4014b4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x4014b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4014b8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4014b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4014bc: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x4014bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4014c0: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x4014c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4014c4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x4014C4u;
    {
        const bool branch_taken_0x4014c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4014c4) {
            ctx->pc = 0x401538u;
            goto label_401538;
        }
    }
    ctx->pc = 0x4014CCu;
label_4014cc:
    // 0x4014cc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4014CCu;
    {
        const bool branch_taken_0x4014cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4014cc) {
            ctx->pc = 0x401518u;
            goto label_401518;
        }
    }
    ctx->pc = 0x4014D4u;
    // 0x4014d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4014d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4014d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4014d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4014dc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4014dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4014e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4014e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4014e4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4014e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4014e8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4014e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x4014ec: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4014ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4014f0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x4014f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x4014f4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4014f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4014f8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4014f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x4014fc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x4014fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x401500: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x401500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x401504: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x401504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x401508: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x401508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x40150c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x40150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401510: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x401510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x401514: 0x0  nop
    ctx->pc = 0x401514u;
    // NOP
label_401518:
    // 0x401518: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x401518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x40151c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x40151cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x401520: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x401520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x401524: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x401524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x401528: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x401528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40152c: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x40152Cu;
    {
        const bool branch_taken_0x40152c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x401530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40152Cu;
            // 0x401530: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40152c) {
            ctx->pc = 0x4014CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4014cc;
        }
    }
    ctx->pc = 0x401534u;
    // 0x401534: 0x0  nop
    ctx->pc = 0x401534u;
    // NOP
label_401538:
    // 0x401538: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x401538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x40153c: 0x5052000e  beql        $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x40153Cu;
    {
        const bool branch_taken_0x40153c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x40153c) {
            ctx->pc = 0x401540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40153Cu;
            // 0x401540: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401578u;
            goto label_401578;
        }
    }
    ctx->pc = 0x401544u;
    // 0x401544: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x401544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x401548: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x401548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x40154c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x40154cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x401550: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x401550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x401554: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x401554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x401558: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x401558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x40155c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x40155cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x401560: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x401560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x401564: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x401564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x401568: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x401568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x40156c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x40156cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x401570: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x401570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x401574: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x401574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_401578:
    // 0x401578: 0xc0b648c  jal         func_2D9230
    ctx->pc = 0x401578u;
    SET_GPR_U32(ctx, 31, 0x401580u);
    ctx->pc = 0x2D9230u;
    if (runtime->hasFunction(0x2D9230u)) {
        auto targetFn = runtime->lookupFunction(0x2D9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401580u; }
        if (ctx->pc != 0x401580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9230_0x2d9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401580u; }
        if (ctx->pc != 0x401580u) { return; }
    }
    ctx->pc = 0x401580u;
label_401580:
    // 0x401580: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x401580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x401584: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x401584u;
    {
        const bool branch_taken_0x401584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x401584) {
            ctx->pc = 0x401588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401584u;
            // 0x401588: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401598u;
            goto label_401598;
        }
    }
    ctx->pc = 0x40158Cu;
    // 0x40158c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x40158Cu;
    SET_GPR_U32(ctx, 31, 0x401594u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401594u; }
        if (ctx->pc != 0x401594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401594u; }
        if (ctx->pc != 0x401594u) { return; }
    }
    ctx->pc = 0x401594u;
label_401594:
    // 0x401594: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x401594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_401598:
    // 0x401598: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x401598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40159c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40159cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4015a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4015a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4015a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4015A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4015A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4015A4u;
            // 0x4015a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4015ACu;
    // 0x4015ac: 0x0  nop
    ctx->pc = 0x4015acu;
    // NOP
}
