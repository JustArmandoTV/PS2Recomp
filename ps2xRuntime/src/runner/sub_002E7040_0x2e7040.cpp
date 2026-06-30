#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E7040
// Address: 0x2e7040 - 0x2e7190
void sub_002E7040_0x2e7040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7040_0x2e7040");
#endif

    switch (ctx->pc) {
        case 0x2e70c4u: goto label_2e70c4;
        case 0x2e70d4u: goto label_2e70d4;
        case 0x2e70e8u: goto label_2e70e8;
        case 0x2e70f8u: goto label_2e70f8;
        case 0x2e7104u: goto label_2e7104;
        default: break;
    }

    ctx->pc = 0x2e7040u;

    // 0x2e7040: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e7040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e7044: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2e7044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2e7048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e7048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e704c: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x2e704cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e7050: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e7050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e7054: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e7054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e7058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e7058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e705c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e705cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e7060: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x2e7060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x2e7064: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x2e7064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2e7068: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x2e7068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e706c: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x2e706cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
    // 0x2e7070: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x2e7070u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e7074: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x2e7074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
    // 0x2e7078: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2e7078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e707c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2e707cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2e7080: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2e7080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e7084: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2e7084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e7088: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x2e7088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x2e708c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E708Cu;
    {
        const bool branch_taken_0x2e708c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E708Cu;
            // 0x2e7090: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e708c) {
            ctx->pc = 0x2E7098u;
            goto label_2e7098;
        }
    }
    ctx->pc = 0x2E7094u;
    // 0x2e7094: 0xc4b4002c  lwc1        $f20, 0x2C($a1)
    ctx->pc = 0x2e7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e7098:
    // 0x2e7098: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2e7098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2e709c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E709Cu;
    {
        const bool branch_taken_0x2e709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e709c) {
            ctx->pc = 0x2E70A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E709Cu;
            // 0x2e70a0: 0xc4cc01a4  lwc1        $f12, 0x1A4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E70B4u;
            goto label_2e70b4;
        }
    }
    ctx->pc = 0x2E70A4u;
    // 0x2e70a4: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x2e70a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x2e70a8: 0x38420100  xori        $v0, $v0, 0x100
    ctx->pc = 0x2e70a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)256);
    // 0x2e70ac: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x2e70acu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e70b0: 0xc4cc01a4  lwc1        $f12, 0x1A4($a2)
    ctx->pc = 0x2e70b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e70b4:
    // 0x2e70b4: 0xc4cd01a8  lwc1        $f13, 0x1A8($a2)
    ctx->pc = 0x2e70b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e70b8: 0xc4ce01ac  lwc1        $f14, 0x1AC($a2)
    ctx->pc = 0x2e70b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e70bc: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E70BCu;
    SET_GPR_U32(ctx, 31, 0x2E70C4u);
    ctx->pc = 0x2E70C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70BCu;
            // 0x2e70c0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70C4u; }
        if (ctx->pc != 0x2E70C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70C4u; }
        if (ctx->pc != 0x2E70C4u) { return; }
    }
    ctx->pc = 0x2E70C4u;
label_2e70c4:
    // 0x2e70c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e70c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e70c8: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x2e70c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2e70cc: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2E70CCu;
    SET_GPR_U32(ctx, 31, 0x2E70D4u);
    ctx->pc = 0x2E70D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70CCu;
            // 0x2e70d0: 0x26260070  addiu       $a2, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70D4u; }
        if (ctx->pc != 0x2E70D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70D4u; }
        if (ctx->pc != 0x2E70D4u) { return; }
    }
    ctx->pc = 0x2E70D4u;
label_2e70d4:
    // 0x2e70d4: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E70D4u;
    {
        const bool branch_taken_0x2e70d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e70d4) {
            ctx->pc = 0x2E70D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70D4u;
            // 0x2e70d8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E70FCu;
            goto label_2e70fc;
        }
    }
    ctx->pc = 0x2E70DCu;
    // 0x2e70dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e70dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e70e0: 0xc04cce4  jal         func_133390
    ctx->pc = 0x2E70E0u;
    SET_GPR_U32(ctx, 31, 0x2E70E8u);
    ctx->pc = 0x2E70E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70E0u;
            // 0x2e70e4: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70E8u; }
        if (ctx->pc != 0x2E70E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70E8u; }
        if (ctx->pc != 0x2E70E8u) { return; }
    }
    ctx->pc = 0x2E70E8u;
label_2e70e8:
    // 0x2e70e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e70e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e70ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2e70ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e70f0: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2E70F0u;
    SET_GPR_U32(ctx, 31, 0x2E70F8u);
    ctx->pc = 0x2E70F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70F0u;
            // 0x2e70f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70F8u; }
        if (ctx->pc != 0x2E70F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70F8u; }
        if (ctx->pc != 0x2E70F8u) { return; }
    }
    ctx->pc = 0x2E70F8u;
label_2e70f8:
    // 0x2e70f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e70f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e70fc:
    // 0x2e70fc: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2E70FCu;
    SET_GPR_U32(ctx, 31, 0x2E7104u);
    ctx->pc = 0x2E7100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70FCu;
            // 0x2e7100: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7104u; }
        if (ctx->pc != 0x2E7104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7104u; }
        if (ctx->pc != 0x2E7104u) { return; }
    }
    ctx->pc = 0x2E7104u;
label_2e7104:
    // 0x2e7104: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x2e7104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x2e7108: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2e7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2e710c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2e710cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7110: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2e7110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2e7114: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E7114u;
    {
        const bool branch_taken_0x2e7114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7114) {
            ctx->pc = 0x2E7164u;
            goto label_2e7164;
        }
    }
    ctx->pc = 0x2E711Cu;
    // 0x2e711c: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x2e711cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7120: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e7120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7124: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7124u;
    {
        const bool branch_taken_0x2e7124 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7124u;
            // 0x2e7128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7124) {
            ctx->pc = 0x2E7130u;
            goto label_2e7130;
        }
    }
    ctx->pc = 0x2E712Cu;
    // 0x2e712c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e712cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7130:
    // 0x2e7130: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2e7130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7134: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x2e7134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
    // 0x2e7138: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x2e7138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
    // 0x2e713c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e713cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7140: 0x0  nop
    ctx->pc = 0x2e7140u;
    // NOP
    // 0x2e7144: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e7144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7148: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7148u;
    {
        const bool branch_taken_0x2e7148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7148u;
            // 0x2e714c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7148) {
            ctx->pc = 0x2E7154u;
            goto label_2e7154;
        }
    }
    ctx->pc = 0x2E7150u;
    // 0x2e7150: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e7150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7154:
    // 0x2e7154: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2e7154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e7158: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e7158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e715c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E715Cu;
    {
        const bool branch_taken_0x2e715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E715Cu;
            // 0x2e7160: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e715c) {
            ctx->pc = 0x2E7174u;
            goto label_2e7174;
        }
    }
    ctx->pc = 0x2E7164u;
label_2e7164:
    // 0x2e7164: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2e7164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7168: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7168u;
    {
        const bool branch_taken_0x2e7168 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7168u;
            // 0x2e716c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7168) {
            ctx->pc = 0x2E7174u;
            goto label_2e7174;
        }
    }
    ctx->pc = 0x2E7170u;
    // 0x2e7170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e7170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7174:
    // 0x2e7174: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e7174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7178: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e7178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e717c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e717cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7180: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e7180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7184: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7184u;
            // 0x2e7188: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E718Cu;
    // 0x2e718c: 0x0  nop
    ctx->pc = 0x2e718cu;
    // NOP
}
