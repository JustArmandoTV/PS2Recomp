#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED050
// Address: 0x4ed050 - 0x4ed130
void sub_004ED050_0x4ed050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED050_0x4ed050");
#endif

    switch (ctx->pc) {
        case 0x4ed074u: goto label_4ed074;
        case 0x4ed0a0u: goto label_4ed0a0;
        case 0x4ed0acu: goto label_4ed0ac;
        case 0x4ed0b4u: goto label_4ed0b4;
        case 0x4ed0d4u: goto label_4ed0d4;
        case 0x4ed0f0u: goto label_4ed0f0;
        case 0x4ed100u: goto label_4ed100;
        case 0x4ed108u: goto label_4ed108;
        default: break;
    }

    ctx->pc = 0x4ed050u;

    // 0x4ed050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ed050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ed054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ed054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ed058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed05c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ed05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ed060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ed060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed064: 0xac8601c8  sw          $a2, 0x1C8($a0)
    ctx->pc = 0x4ed064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 6));
    // 0x4ed068: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x4ed068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x4ed06c: 0xc040180  jal         func_100600
    ctx->pc = 0x4ED06Cu;
    SET_GPR_U32(ctx, 31, 0x4ED074u);
    ctx->pc = 0x4ED070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED06Cu;
            // 0x4ed070: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED074u; }
        if (ctx->pc != 0x4ED074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED074u; }
        if (ctx->pc != 0x4ED074u) { return; }
    }
    ctx->pc = 0x4ED074u;
label_4ed074:
    // 0x4ed074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ed074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed078: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x4ED078u;
    {
        const bool branch_taken_0x4ed078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed078) {
            ctx->pc = 0x4ED07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED078u;
            // 0x4ed07c: 0xae3001d4  sw          $s0, 0x1D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED0DCu;
            goto label_4ed0dc;
        }
    }
    ctx->pc = 0x4ED080u;
    // 0x4ed080: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4ed080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4ed084: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ed084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4ed088: 0x244286f0  addiu       $v0, $v0, -0x7910
    ctx->pc = 0x4ed088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936304));
    // 0x4ed08c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4ed08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4ed090: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4ed090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x4ed094: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4ed094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4ed098: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4ED098u;
    SET_GPR_U32(ctx, 31, 0x4ED0A0u);
    ctx->pc = 0x4ED09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED098u;
            // 0x4ed09c: 0xa200001c  sb          $zero, 0x1C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED0A0u; }
        if (ctx->pc != 0x4ED0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED0A0u; }
        if (ctx->pc != 0x4ED0A0u) { return; }
    }
    ctx->pc = 0x4ED0A0u;
label_4ed0a0:
    // 0x4ed0a0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4ed0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x4ed0a4: 0xc04c720  jal         func_131C80
    ctx->pc = 0x4ED0A4u;
    SET_GPR_U32(ctx, 31, 0x4ED0ACu);
    ctx->pc = 0x4ED0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED0A4u;
            // 0x4ed0a8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED0ACu; }
        if (ctx->pc != 0x4ED0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED0ACu; }
        if (ctx->pc != 0x4ED0ACu) { return; }
    }
    ctx->pc = 0x4ED0ACu;
label_4ed0ac:
    // 0x4ed0ac: 0xc040180  jal         func_100600
    ctx->pc = 0x4ED0ACu;
    SET_GPR_U32(ctx, 31, 0x4ED0B4u);
    ctx->pc = 0x4ED0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED0ACu;
            // 0x4ed0b0: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED0B4u; }
        if (ctx->pc != 0x4ED0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED0B4u; }
        if (ctx->pc != 0x4ED0B4u) { return; }
    }
    ctx->pc = 0x4ED0B4u;
label_4ed0b4:
    // 0x4ed0b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4ED0B4u;
    {
        const bool branch_taken_0x4ed0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed0b4) {
            ctx->pc = 0x4ED0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED0B4u;
            // 0x4ed0b8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED0D8u;
            goto label_4ed0d8;
        }
    }
    ctx->pc = 0x4ED0BCu;
    // 0x4ed0bc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x4ed0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x4ed0c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ed0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed0c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ed0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ed0c8: 0x24c68820  addiu       $a2, $a2, -0x77E0
    ctx->pc = 0x4ed0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936608));
    // 0x4ed0cc: 0xc11f1ac  jal         func_47C6B0
    ctx->pc = 0x4ED0CCu;
    SET_GPR_U32(ctx, 31, 0x4ED0D4u);
    ctx->pc = 0x4ED0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED0CCu;
            // 0x4ed0d0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47C6B0u;
    if (runtime->hasFunction(0x47C6B0u)) {
        auto targetFn = runtime->lookupFunction(0x47C6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED0D4u; }
        if (ctx->pc != 0x4ED0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C6B0_0x47c6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED0D4u; }
        if (ctx->pc != 0x4ED0D4u) { return; }
    }
    ctx->pc = 0x4ED0D4u;
label_4ed0d4:
    // 0x4ed0d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ed0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ed0d8:
    // 0x4ed0d8: 0xae3001d4  sw          $s0, 0x1D4($s1)
    ctx->pc = 0x4ed0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
label_4ed0dc:
    // 0x4ed0dc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4ed0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4ed0e0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4ed0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed0e4: 0x24a586b0  addiu       $a1, $a1, -0x7950
    ctx->pc = 0x4ed0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936240));
    // 0x4ed0e8: 0xc0f6518  jal         func_3D9460
    ctx->pc = 0x4ED0E8u;
    SET_GPR_U32(ctx, 31, 0x4ED0F0u);
    ctx->pc = 0x4ED0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED0E8u;
            // 0x4ed0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED0F0u; }
        if (ctx->pc != 0x4ED0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED0F0u; }
        if (ctx->pc != 0x4ED0F0u) { return; }
    }
    ctx->pc = 0x4ED0F0u;
label_4ed0f0:
    // 0x4ed0f0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4ed0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4ed0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ed0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed0f8: 0xc0f6518  jal         func_3D9460
    ctx->pc = 0x4ED0F8u;
    SET_GPR_U32(ctx, 31, 0x4ED100u);
    ctx->pc = 0x4ED0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED0F8u;
            // 0x4ed0fc: 0x24a586d0  addiu       $a1, $a1, -0x7930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED100u; }
        if (ctx->pc != 0x4ED100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED100u; }
        if (ctx->pc != 0x4ED100u) { return; }
    }
    ctx->pc = 0x4ED100u;
label_4ed100:
    // 0x4ed100: 0xc0f64e8  jal         func_3D93A0
    ctx->pc = 0x4ED100u;
    SET_GPR_U32(ctx, 31, 0x4ED108u);
    ctx->pc = 0x4ED104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED100u;
            // 0x4ed104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D93A0u;
    if (runtime->hasFunction(0x3D93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3D93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED108u; }
        if (ctx->pc != 0x4ED108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D93A0_0x3d93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED108u; }
        if (ctx->pc != 0x4ED108u) { return; }
    }
    ctx->pc = 0x4ED108u;
label_4ed108:
    // 0x4ed108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ed108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ed10c: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x4ed10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
    // 0x4ed110: 0xae2001c4  sw          $zero, 0x1C4($s1)
    ctx->pc = 0x4ed110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
    // 0x4ed114: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ed114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed120: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED120u;
            // 0x4ed124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED128u;
    // 0x4ed128: 0x0  nop
    ctx->pc = 0x4ed128u;
    // NOP
    // 0x4ed12c: 0x0  nop
    ctx->pc = 0x4ed12cu;
    // NOP
}
