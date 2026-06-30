#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005008A0
// Address: 0x5008a0 - 0x500ad0
void sub_005008A0_0x5008a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005008A0_0x5008a0");
#endif

    switch (ctx->pc) {
        case 0x5008f4u: goto label_5008f4;
        case 0x5009a4u: goto label_5009a4;
        case 0x5009ccu: goto label_5009cc;
        case 0x5009d8u: goto label_5009d8;
        case 0x500a1cu: goto label_500a1c;
        case 0x500a44u: goto label_500a44;
        case 0x500a68u: goto label_500a68;
        default: break;
    }

    ctx->pc = 0x5008a0u;

    // 0x5008a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x5008a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x5008a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5008a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x5008a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5008a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x5008ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5008acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x5008b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x5008b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5008b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5008b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x5008b8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x5008b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x5008bc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x5008bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x5008c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5008c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x5008c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5008c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x5008c8: 0x8c860084  lw          $a2, 0x84($a0)
    ctx->pc = 0x5008c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x5008cc: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x5008CCu;
    {
        const bool branch_taken_0x5008cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x5008D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5008CCu;
            // 0x5008d0: 0x2651007c  addiu       $s1, $s2, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5008cc) {
            ctx->pc = 0x500AA0u;
            goto label_500aa0;
        }
    }
    ctx->pc = 0x5008D4u;
    // 0x5008d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x5008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x5008d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5008d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5008dc: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x5008dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x5008e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5008e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x5008e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x5008e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x5008e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5008e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5008ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x5008ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x5008f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x5008f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_5008f4:
    // 0x5008f4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x5008f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x5008f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x5008f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5008fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x5008fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x500900: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x500900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x500904: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x500904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x500908: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x500908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x50090c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x50090cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x500910: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x500910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x500914: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x500914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x500918: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x500918u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x50091c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x50091Cu;
    {
        const bool branch_taken_0x50091c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x500920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50091Cu;
            // 0x500920: 0xe53821  addu        $a3, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50091c) {
            ctx->pc = 0x5008F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5008f4;
        }
    }
    ctx->pc = 0x500924u;
    // 0x500924: 0x54e6003b  bnel        $a3, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x500924u;
    {
        const bool branch_taken_0x500924 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x500924) {
            ctx->pc = 0x500928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500924u;
            // 0x500928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500A14u;
            goto label_500a14;
        }
    }
    ctx->pc = 0x50092Cu;
    // 0x50092c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x50092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x500930: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x500930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x500934: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x500934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x500938: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x500938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x50093c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x50093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x500940: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x500940u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x500944: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x500944u;
    {
        const bool branch_taken_0x500944 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x500944) {
            ctx->pc = 0x500948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500944u;
            // 0x500948: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500958u;
            goto label_500958;
        }
    }
    ctx->pc = 0x50094Cu;
    // 0x50094c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50094cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500950: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x500950u;
    {
        const bool branch_taken_0x500950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x500954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500950u;
            // 0x500954: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x500950) {
            ctx->pc = 0x500970u;
            goto label_500970;
        }
    }
    ctx->pc = 0x500958u;
label_500958:
    // 0x500958: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x500958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x50095c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x50095cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x500960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x500960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500964: 0x0  nop
    ctx->pc = 0x500964u;
    // NOP
    // 0x500968: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x500968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x50096c: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x50096cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_500970:
    // 0x500970: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x500970u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x500974: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x500974u;
    {
        const bool branch_taken_0x500974 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x500974) {
            ctx->pc = 0x500978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500974u;
            // 0x500978: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500988u;
            goto label_500988;
        }
    }
    ctx->pc = 0x50097Cu;
    // 0x50097c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50097cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500980: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x500980u;
    {
        const bool branch_taken_0x500980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x500984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500980u;
            // 0x500984: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x500980) {
            ctx->pc = 0x5009A0u;
            goto label_5009a0;
        }
    }
    ctx->pc = 0x500988u;
label_500988:
    // 0x500988: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x500988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x50098c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x50098cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x500990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x500990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500994: 0x0  nop
    ctx->pc = 0x500994u;
    // NOP
    // 0x500998: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x500998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x50099c: 0x4616b580  add.s       $f22, $f22, $f22
    ctx->pc = 0x50099cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_5009a0:
    // 0x5009a0: 0xc4950000  lwc1        $f21, 0x0($a0)
    ctx->pc = 0x5009a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_5009a4:
    // 0x5009a4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x5009a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x5009a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x5009a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5009ac: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x5009acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5009b0: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x5009b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5009b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5009b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5009b8: 0x46150503  div.s       $f20, $f0, $f21
    ctx->pc = 0x5009b8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[21];
    // 0x5009bc: 0x0  nop
    ctx->pc = 0x5009bcu;
    // NOP
    // 0x5009c0: 0x4614bdc0  add.s       $f23, $f23, $f20
    ctx->pc = 0x5009c0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x5009c4: 0xc145e1c  jal         func_517870
    ctx->pc = 0x5009C4u;
    SET_GPR_U32(ctx, 31, 0x5009CCu);
    ctx->pc = 0x5009C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5009C4u;
            // 0x5009c8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x517870u;
    if (runtime->hasFunction(0x517870u)) {
        auto targetFn = runtime->lookupFunction(0x517870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5009CCu; }
        if (ctx->pc != 0x5009CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517870_0x517870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5009CCu; }
        if (ctx->pc != 0x5009CCu) { return; }
    }
    ctx->pc = 0x5009CCu;
label_5009cc:
    // 0x5009cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5009ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5009d0: 0xc145df4  jal         func_5177D0
    ctx->pc = 0x5009D0u;
    SET_GPR_U32(ctx, 31, 0x5009D8u);
    ctx->pc = 0x5009D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5009D0u;
            // 0x5009d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5177D0u;
    if (runtime->hasFunction(0x5177D0u)) {
        auto targetFn = runtime->lookupFunction(0x5177D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5009D8u; }
        if (ctx->pc != 0x5009D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005177D0_0x5177d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5009D8u; }
        if (ctx->pc != 0x5009D8u) { return; }
    }
    ctx->pc = 0x5009D8u;
label_5009d8:
    // 0x5009d8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x5009d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x5009dc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x5009dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x5009e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x5009e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x5009e4: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x5009e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x5009e8: 0x4614b800  add.s       $f0, $f23, $f20
    ctx->pc = 0x5009e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x5009ec: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x5009ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x5009f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x5009f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x5009f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5009f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5009f8: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x5009f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x5009fc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x5009fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x500a00: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x500a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x500a04: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x500A04u;
    {
        const bool branch_taken_0x500a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x500A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500A04u;
            // 0x500a08: 0x461605c0  add.s       $f23, $f0, $f22 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x500a04) {
            ctx->pc = 0x5009A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5009a4;
        }
    }
    ctx->pc = 0x500A0Cu;
    // 0x500a0c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x500A0Cu;
    {
        const bool branch_taken_0x500a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x500a0c) {
            ctx->pc = 0x500AA0u;
            goto label_500aa0;
        }
    }
    ctx->pc = 0x500A14u;
label_500a14:
    // 0x500a14: 0xc140338  jal         func_500CE0
    ctx->pc = 0x500A14u;
    SET_GPR_U32(ctx, 31, 0x500A1Cu);
    ctx->pc = 0x500CE0u;
    if (runtime->hasFunction(0x500CE0u)) {
        auto targetFn = runtime->lookupFunction(0x500CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500A1Cu; }
        if (ctx->pc != 0x500A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500CE0_0x500ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500A1Cu; }
        if (ctx->pc != 0x500A1Cu) { return; }
    }
    ctx->pc = 0x500A1Cu;
label_500a1c:
    // 0x500a1c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x500A1Cu;
    {
        const bool branch_taken_0x500a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x500a1c) {
            ctx->pc = 0x500AA0u;
            goto label_500aa0;
        }
    }
    ctx->pc = 0x500A24u;
    // 0x500a24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x500a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x500a28: 0x8e500098  lw          $s0, 0x98($s2)
    ctx->pc = 0x500a28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x500a2c: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x500a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x500a30: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x500a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x500a34: 0xc4940018  lwc1        $f20, 0x18($a0)
    ctx->pc = 0x500a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x500a38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x500a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x500a3c: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x500a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x500a40: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x500a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_500a44:
    // 0x500a44: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x500a44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x500a48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x500a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x500a4c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x500a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x500a50: 0x84830144  lh          $v1, 0x144($a0)
    ctx->pc = 0x500a50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x500a54: 0x90a5000a  lbu         $a1, 0xA($a1)
    ctx->pc = 0x500a54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x500a58: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x500A58u;
    {
        const bool branch_taken_0x500a58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x500a58) {
            ctx->pc = 0x500A78u;
            goto label_500a78;
        }
    }
    ctx->pc = 0x500A60u;
    // 0x500a60: 0xc145e1c  jal         func_517870
    ctx->pc = 0x500A60u;
    SET_GPR_U32(ctx, 31, 0x500A68u);
    ctx->pc = 0x500A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500A60u;
            // 0x500a64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x517870u;
    if (runtime->hasFunction(0x517870u)) {
        auto targetFn = runtime->lookupFunction(0x517870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500A68u; }
        if (ctx->pc != 0x500A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517870_0x517870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500A68u; }
        if (ctx->pc != 0x500A68u) { return; }
    }
    ctx->pc = 0x500A68u;
label_500a68:
    // 0x500a68: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x500a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x500a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x500a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500a70: 0x0  nop
    ctx->pc = 0x500a70u;
    // NOP
    // 0x500a74: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x500a74u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_500a78:
    // 0x500a78: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x500a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x500a7c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x500a7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x500a80: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x500a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x500a84: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x500a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x500a88: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x500a88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x500a8c: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x500a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x500a90: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x500a90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x500a94: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x500a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x500a98: 0x5460ffea  bnel        $v1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x500A98u;
    {
        const bool branch_taken_0x500a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x500a98) {
            ctx->pc = 0x500A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500A98u;
            // 0x500a9c: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500A44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_500a44;
        }
    }
    ctx->pc = 0x500AA0u;
label_500aa0:
    // 0x500aa0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x500aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x500aa4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x500aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x500aa8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x500aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x500aac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x500aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500ab0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x500ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x500ab4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x500ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500ab8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x500ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x500abc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x500abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x500ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x500AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500AC0u;
            // 0x500ac4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500AC8u;
    // 0x500ac8: 0x0  nop
    ctx->pc = 0x500ac8u;
    // NOP
    // 0x500acc: 0x0  nop
    ctx->pc = 0x500accu;
    // NOP
}
