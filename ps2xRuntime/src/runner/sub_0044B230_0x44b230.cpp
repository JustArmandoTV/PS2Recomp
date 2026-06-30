#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044B230
// Address: 0x44b230 - 0x44b3c0
void sub_0044B230_0x44b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044B230_0x44b230");
#endif

    switch (ctx->pc) {
        case 0x44b2a8u: goto label_44b2a8;
        case 0x44b2acu: goto label_44b2ac;
        case 0x44b330u: goto label_44b330;
        case 0x44b388u: goto label_44b388;
        case 0x44b3a0u: goto label_44b3a0;
        default: break;
    }

    ctx->pc = 0x44b230u;

    // 0x44b230: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x44b230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x44b234: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x44b234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x44b238: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44b238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x44b23c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x44b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x44b240: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44b240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x44b244: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x44b244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x44b248: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x44b248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x44b24c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x44b24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x44b250: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x44B250u;
    {
        const bool branch_taken_0x44b250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x44B254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B250u;
            // 0x44b254: 0x24640058  addiu       $a0, $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b250) {
            ctx->pc = 0x44B25Cu;
            goto label_44b25c;
        }
    }
    ctx->pc = 0x44B258u;
    // 0x44b258: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x44b258u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_44b25c:
    // 0x44b25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44b260: 0x3e00008  jr          $ra
    ctx->pc = 0x44B260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B260u;
            // 0x44b264: 0xa4830030  sh          $v1, 0x30($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44B268u;
    // 0x44b268: 0x0  nop
    ctx->pc = 0x44b268u;
    // NOP
    // 0x44b26c: 0x0  nop
    ctx->pc = 0x44b26cu;
    // NOP
    // 0x44b270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x44b270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x44b274: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44b274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44b278: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x44b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x44b27c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44b27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44b280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x44b284: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x44b284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x44b288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44b288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44b28c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44b28cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44b290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44b294: 0x24910058  addiu       $s1, $a0, 0x58
    ctx->pc = 0x44b294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x44b298: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44b298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x44b29c: 0x8c500780  lw          $s0, 0x780($v0)
    ctx->pc = 0x44b29cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
    // 0x44b2a0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x44B2A0u;
    SET_GPR_U32(ctx, 31, 0x44B2A8u);
    ctx->pc = 0x44B2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B2A0u;
            // 0x44b2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B2A8u; }
        if (ctx->pc != 0x44B2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B2A8u; }
        if (ctx->pc != 0x44B2A8u) { return; }
    }
    ctx->pc = 0x44B2A8u;
label_44b2a8:
    // 0x44b2a8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44b2ac:
    // 0x44b2ac: 0x8c650ea4  lw          $a1, 0xEA4($v1)
    ctx->pc = 0x44b2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
    // 0x44b2b0: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x44b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x44b2b4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x44b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x44b2b8: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x44b2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x44b2bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x44b2bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x44b2c0: 0x8ca50140  lw          $a1, 0x140($a1)
    ctx->pc = 0x44b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x44b2c4: 0x250202b  sltu        $a0, $s2, $s0
    ctx->pc = 0x44b2c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x44b2c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x44b2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x44b2cc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x44b2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x44b2d0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x44b2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x44b2d4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x44b2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x44b2d8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x44b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x44b2dc: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x44b2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x44b2e0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x44b2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x44b2e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x44b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x44b2e8: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x44b2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x44b2ec: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x44b2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x44b2f0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x44b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x44b2f4: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x44b2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x44b2f8: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x44b2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x44b2fc: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x44b2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x44b300: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x44b300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x44b304: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x44b304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x44b308: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x44B308u;
    {
        const bool branch_taken_0x44b308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B308u;
            // 0x44b30c: 0x26310034  addiu       $s1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b308) {
            ctx->pc = 0x44B2ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44b2ac;
        }
    }
    ctx->pc = 0x44B310u;
    // 0x44b310: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x44b310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44b314: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44b314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44b318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44b318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44b31c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44b31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44b320: 0x3e00008  jr          $ra
    ctx->pc = 0x44B320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B320u;
            // 0x44b324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44B328u;
    // 0x44b328: 0x0  nop
    ctx->pc = 0x44b328u;
    // NOP
    // 0x44b32c: 0x0  nop
    ctx->pc = 0x44b32cu;
    // NOP
label_44b330:
    // 0x44b330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44b334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44b334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44b338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44b33c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44b33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44b340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44b340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b344: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x44B344u;
    {
        const bool branch_taken_0x44b344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B344u;
            // 0x44b348: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b344) {
            ctx->pc = 0x44B3A0u;
            goto label_44b3a0;
        }
    }
    ctx->pc = 0x44B34Cu;
    // 0x44b34c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44b350: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44b350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44b354: 0x2463d870  addiu       $v1, $v1, -0x2790
    ctx->pc = 0x44b354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957168));
    // 0x44b358: 0x2442d8a8  addiu       $v0, $v0, -0x2758
    ctx->pc = 0x44b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957224));
    // 0x44b35c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44b360: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44B360u;
    {
        const bool branch_taken_0x44b360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B360u;
            // 0x44b364: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b360) {
            ctx->pc = 0x44B388u;
            goto label_44b388;
        }
    }
    ctx->pc = 0x44B368u;
    // 0x44b368: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44b368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44b36c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44b370: 0x2463d9c0  addiu       $v1, $v1, -0x2640
    ctx->pc = 0x44b370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957504));
    // 0x44b374: 0x2442d9f8  addiu       $v0, $v0, -0x2608
    ctx->pc = 0x44b374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957560));
    // 0x44b378: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44b378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44b37c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44b37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b380: 0xc112cf0  jal         func_44B3C0
    ctx->pc = 0x44B380u;
    SET_GPR_U32(ctx, 31, 0x44B388u);
    ctx->pc = 0x44B384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B380u;
            // 0x44b384: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44B3C0u;
    if (runtime->hasFunction(0x44B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x44B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B388u; }
        if (ctx->pc != 0x44B388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044B3C0_0x44b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B388u; }
        if (ctx->pc != 0x44B388u) { return; }
    }
    ctx->pc = 0x44B388u;
label_44b388:
    // 0x44b388: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x44b388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x44b38c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44b38cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44b390: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44B390u;
    {
        const bool branch_taken_0x44b390 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44b390) {
            ctx->pc = 0x44B394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B390u;
            // 0x44b394: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B3A4u;
            goto label_44b3a4;
        }
    }
    ctx->pc = 0x44B398u;
    // 0x44b398: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44B398u;
    SET_GPR_U32(ctx, 31, 0x44B3A0u);
    ctx->pc = 0x44B39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B398u;
            // 0x44b39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B3A0u; }
        if (ctx->pc != 0x44B3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B3A0u; }
        if (ctx->pc != 0x44B3A0u) { return; }
    }
    ctx->pc = 0x44B3A0u;
label_44b3a0:
    // 0x44b3a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44b3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44b3a4:
    // 0x44b3a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44b3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44b3a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44b3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44b3ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44b3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44b3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x44B3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B3B0u;
            // 0x44b3b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44B3B8u;
    // 0x44b3b8: 0x0  nop
    ctx->pc = 0x44b3b8u;
    // NOP
    // 0x44b3bc: 0x0  nop
    ctx->pc = 0x44b3bcu;
    // NOP
}
