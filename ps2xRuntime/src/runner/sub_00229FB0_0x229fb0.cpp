#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229FB0
// Address: 0x229fb0 - 0x22a6d0
void sub_00229FB0_0x229fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229FB0_0x229fb0");
#endif

    switch (ctx->pc) {
        case 0x229fdcu: goto label_229fdc;
        case 0x22a0f8u: goto label_22a0f8;
        case 0x22a104u: goto label_22a104;
        case 0x22a12cu: goto label_22a12c;
        case 0x22a190u: goto label_22a190;
        case 0x22a1b0u: goto label_22a1b0;
        case 0x22a1f8u: goto label_22a1f8;
        case 0x22a210u: goto label_22a210;
        case 0x22a280u: goto label_22a280;
        case 0x22a2f0u: goto label_22a2f0;
        case 0x22a358u: goto label_22a358;
        case 0x22a370u: goto label_22a370;
        case 0x22a3e0u: goto label_22a3e0;
        case 0x22a450u: goto label_22a450;
        case 0x22a4b8u: goto label_22a4b8;
        case 0x22a4d0u: goto label_22a4d0;
        case 0x22a540u: goto label_22a540;
        case 0x22a630u: goto label_22a630;
        default: break;
    }

    ctx->pc = 0x229fb0u;

label_229fb0:
    // 0x229fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x229fb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x229fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x229fb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x229fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x229fbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x229fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x229fc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x229fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229fc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x229fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fcc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x229fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fd4: 0xc08d340  jal         func_234D00
    ctx->pc = 0x229FD4u;
    SET_GPR_U32(ctx, 31, 0x229FDCu);
    ctx->pc = 0x229FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229FD4u;
            // 0x229fd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234D00u;
    if (runtime->hasFunction(0x234D00u)) {
        auto targetFn = runtime->lookupFunction(0x234D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229FDCu; }
        if (ctx->pc != 0x229FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234D00_0x234d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229FDCu; }
        if (ctx->pc != 0x229FDCu) { return; }
    }
    ctx->pc = 0x229FDCu;
label_229fdc:
    // 0x229fdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x229fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x229fe0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x229fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x229fe4: 0x2442eed0  addiu       $v0, $v0, -0x1130
    ctx->pc = 0x229fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962896));
    // 0x229fe8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x229fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x229fec: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x229fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x229ff0: 0x2463ee70  addiu       $v1, $v1, -0x1190
    ctx->pc = 0x229ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962800));
    // 0x229ff4: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x229ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x229ff8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x229ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x229ffc: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x229ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x22a000: 0x2422023  subu        $a0, $s2, $v0
    ctx->pc = 0x22a000u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22a004: 0xae450060  sw          $a1, 0x60($s2)
    ctx->pc = 0x22a004u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
    // 0x22a008: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22a008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a00c: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x22a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x22a010: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x22a010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x22a014: 0xae45006c  sw          $a1, 0x6C($s2)
    ctx->pc = 0x22a014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 5));
    // 0x22a018: 0xa2440020  sb          $a0, 0x20($s2)
    ctx->pc = 0x22a018u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x22a01c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x22a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x22a020: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x22a020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x22a024: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x22a024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x22a028: 0xae450098  sw          $a1, 0x98($s2)
    ctx->pc = 0x22a028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 5));
    // 0x22a02c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x22a02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a030: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x22a030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x22a034: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x22a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a038: 0xe6400074  swc1        $f0, 0x74($s2)
    ctx->pc = 0x22a038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x22a03c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x22a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a040: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x22a040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x22a044: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x22a044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a048: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x22a048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x22a04c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x22a04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a050: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x22a050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x22a054: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x22a054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a058: 0xe6400084  swc1        $f0, 0x84($s2)
    ctx->pc = 0x22a058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x22a05c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x22a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a060: 0xe6400088  swc1        $f0, 0x88($s2)
    ctx->pc = 0x22a060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x22a064: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x22a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a068: 0xe640008c  swc1        $f0, 0x8C($s2)
    ctx->pc = 0x22a068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
    // 0x22a06c: 0xae50002c  sw          $s0, 0x2C($s2)
    ctx->pc = 0x22a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 16));
    // 0x22a070: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22a070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a080: 0x3e00008  jr          $ra
    ctx->pc = 0x22A080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A080u;
            // 0x22a084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A088u;
    // 0x22a088: 0x0  nop
    ctx->pc = 0x22a088u;
    // NOP
    // 0x22a08c: 0x0  nop
    ctx->pc = 0x22a08cu;
    // NOP
    // 0x22a090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22a094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22a098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22a0a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a0a4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x22A0A4u;
    {
        const bool branch_taken_0x22a0a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0A4u;
            // 0x22a0a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0a4) {
            ctx->pc = 0x22A12Cu;
            goto label_22a12c;
        }
    }
    ctx->pc = 0x22A0ACu;
    // 0x22a0ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x22a0b0: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x22a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x22a0b4: 0x2463ee70  addiu       $v1, $v1, -0x1190
    ctx->pc = 0x22a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962800));
    // 0x22a0b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22A0B8u;
    {
        const bool branch_taken_0x22a0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0B8u;
            // 0x22a0bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0b8) {
            ctx->pc = 0x22A0F8u;
            goto label_22a0f8;
        }
    }
    ctx->pc = 0x22A0C0u;
    // 0x22a0c0: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x22a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x22a0c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22a0c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22a0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22a0cc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22A0CCu;
    {
        const bool branch_taken_0x22a0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a0cc) {
            ctx->pc = 0x22A0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0CCu;
            // 0x22a0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A0FCu;
            goto label_22a0fc;
        }
    }
    ctx->pc = 0x22A0D4u;
    // 0x22a0d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22a0d8: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x22a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x22a0dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22a0e0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22a0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x22a0e4: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x22a0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x22a0e8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22a0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22a0ec: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x22a0f0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x22A0F0u;
    SET_GPR_U32(ctx, 31, 0x22A0F8u);
    ctx->pc = 0x22A0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0F0u;
            // 0x22a0f4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0F8u; }
        if (ctx->pc != 0x22A0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0F8u; }
        if (ctx->pc != 0x22A0F8u) { return; }
    }
    ctx->pc = 0x22A0F8u;
label_22a0f8:
    // 0x22a0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a0fc:
    // 0x22a0fc: 0xc08ad54  jal         func_22B550
    ctx->pc = 0x22A0FCu;
    SET_GPR_U32(ctx, 31, 0x22A104u);
    ctx->pc = 0x22A100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0FCu;
            // 0x22a100: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B550u;
    if (runtime->hasFunction(0x22B550u)) {
        auto targetFn = runtime->lookupFunction(0x22B550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A104u; }
        if (ctx->pc != 0x22A104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B550_0x22b550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A104u; }
        if (ctx->pc != 0x22A104u) { return; }
    }
    ctx->pc = 0x22A104u;
label_22a104:
    // 0x22a104: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x22a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x22a108: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22a108u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22a10c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A10Cu;
    {
        const bool branch_taken_0x22a10c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22a10c) {
            ctx->pc = 0x22A110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A10Cu;
            // 0x22a110: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A130u;
            goto label_22a130;
        }
    }
    ctx->pc = 0x22A114u;
    // 0x22a114: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22a118: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x22a118u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x22a11c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22a120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22a120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a124: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x22A124u;
    SET_GPR_U32(ctx, 31, 0x22A12Cu);
    ctx->pc = 0x22A128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A124u;
            // 0x22a128: 0x2407002f  addiu       $a3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A12Cu; }
        if (ctx->pc != 0x22A12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A12Cu; }
        if (ctx->pc != 0x22A12Cu) { return; }
    }
    ctx->pc = 0x22A12Cu;
label_22a12c:
    // 0x22a12c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22a12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a130:
    // 0x22a130: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22a130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a13c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A13Cu;
            // 0x22a140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A144u;
    // 0x22a144: 0x0  nop
    ctx->pc = 0x22a144u;
    // NOP
    // 0x22a148: 0x0  nop
    ctx->pc = 0x22a148u;
    // NOP
    // 0x22a14c: 0x0  nop
    ctx->pc = 0x22a14cu;
    // NOP
    // 0x22a150: 0x3e00008  jr          $ra
    ctx->pc = 0x22A150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A150u;
            // 0x22a154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A158u;
    // 0x22a158: 0x0  nop
    ctx->pc = 0x22a158u;
    // NOP
    // 0x22a15c: 0x0  nop
    ctx->pc = 0x22a15cu;
    // NOP
    // 0x22a160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a164: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22a164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22a168: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22a16c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x22a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x22a170: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a174: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x22a174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22a178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a17c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22a17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22a184: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22a184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22a188: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x22A188u;
    SET_GPR_U32(ctx, 31, 0x22A190u);
    ctx->pc = 0x22A18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A188u;
            // 0x22a18c: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A190u; }
        if (ctx->pc != 0x22A190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A190u; }
        if (ctx->pc != 0x22A190u) { return; }
    }
    ctx->pc = 0x22A190u;
label_22a190:
    // 0x22a190: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x22a190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x22a194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a198: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A198u;
    {
        const bool branch_taken_0x22a198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A198u;
            // 0x22a19c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a198) {
            ctx->pc = 0x22A1B0u;
            goto label_22a1b0;
        }
    }
    ctx->pc = 0x22A1A0u;
    // 0x22a1a0: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x22a1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x22a1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1a8: 0xc08a7ec  jal         func_229FB0
    ctx->pc = 0x22A1A8u;
    SET_GPR_U32(ctx, 31, 0x22A1B0u);
    ctx->pc = 0x22A1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A1A8u;
            // 0x22a1ac: 0x26450070  addiu       $a1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229FB0u;
    goto label_229fb0;
    ctx->pc = 0x22A1B0u;
label_22a1b0:
    // 0x22a1b0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x22a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x22a1b4: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x22a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x22a1b8: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x22a1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22a1bc: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x22a1bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
    // 0x22a1c0: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x22a1c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22a1c4: 0x5020001a  beql        $at, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x22A1C4u;
    {
        const bool branch_taken_0x22a1c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a1c4) {
            ctx->pc = 0x22A1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A1C4u;
            // 0x22a1c8: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A230u;
            goto label_22a230;
        }
    }
    ctx->pc = 0x22A1CCu;
    // 0x22a1cc: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x22a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x22a1d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22a1d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22a1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22a1d8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A1D8u;
    {
        const bool branch_taken_0x22a1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a1d8) {
            ctx->pc = 0x22A1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A1D8u;
            // 0x22a1dc: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A1FCu;
            goto label_22a1fc;
        }
    }
    ctx->pc = 0x22A1E0u;
    // 0x22a1e0: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x22a1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22a1e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22a1e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22a1ec: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x22a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x22a1f0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x22A1F0u;
    SET_GPR_U32(ctx, 31, 0x22A1F8u);
    ctx->pc = 0x22A1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A1F0u;
            // 0x22a1f4: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1F8u; }
        if (ctx->pc != 0x22A1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1F8u; }
        if (ctx->pc != 0x22A1F8u) { return; }
    }
    ctx->pc = 0x22A1F8u;
label_22a1f8:
    // 0x22a1f8: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x22a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_22a1fc:
    // 0x22a1fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22a200: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22a204: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x22a204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x22a208: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x22A208u;
    SET_GPR_U32(ctx, 31, 0x22A210u);
    ctx->pc = 0x22A20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A208u;
            // 0x22a20c: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A210u; }
        if (ctx->pc != 0x22A210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A210u; }
        if (ctx->pc != 0x22A210u) { return; }
    }
    ctx->pc = 0x22A210u;
label_22a210:
    // 0x22a210: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x22a210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x22a214: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22a214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x22a218: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x22a218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x22a21c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x22a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x22a220: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22a220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22a224: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22a228: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x22a228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x22a22c: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x22a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_22a230:
    // 0x22a230: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x22a230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x22a234: 0x8e490058  lw          $t1, 0x58($s2)
    ctx->pc = 0x22a234u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x22a238: 0x8e0a0058  lw          $t2, 0x58($s0)
    ctx->pc = 0x22a238u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x22a23c: 0x18a00034  blez        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x22A23Cu;
    {
        const bool branch_taken_0x22a23c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22A240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A23Cu;
            // 0x22a240: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a23c) {
            ctx->pc = 0x22A310u;
            goto label_22a310;
        }
    }
    ctx->pc = 0x22A244u;
    // 0x22a244: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x22a244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22a248: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x22A248u;
    {
        const bool branch_taken_0x22a248 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A248u;
            // 0x22a24c: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a248) {
            ctx->pc = 0x22A2D8u;
            goto label_22a2d8;
        }
    }
    ctx->pc = 0x22A250u;
    // 0x22a250: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A250u;
    {
        const bool branch_taken_0x22a250 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x22A254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A250u;
            // 0x22a254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a250) {
            ctx->pc = 0x22A270u;
            goto label_22a270;
        }
    }
    ctx->pc = 0x22A258u;
    // 0x22a258: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x22a258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x22a25c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x22a25cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x22a260: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x22a260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x22a264: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A264u;
    {
        const bool branch_taken_0x22a264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a264) {
            ctx->pc = 0x22A270u;
            goto label_22a270;
        }
    }
    ctx->pc = 0x22A26Cu;
    // 0x22a26c: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x22a26cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_22a270:
    // 0x22a270: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22A270u;
    {
        const bool branch_taken_0x22a270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a270) {
            ctx->pc = 0x22A2D8u;
            goto label_22a2d8;
        }
    }
    ctx->pc = 0x22A278u;
    // 0x22a278: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x22a278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a27c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x22a27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22a280:
    // 0x22a280: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x22a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22a284: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x22a284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x22a288: 0x104102a  slt         $v0, $t0, $a0
    ctx->pc = 0x22a288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22a28c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x22a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x22a290: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x22a290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x22a294: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x22a294u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x22a298: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x22a298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x22a29c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x22a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x22a2a0: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x22a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x22a2a4: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x22a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x22a2a8: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x22a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x22a2ac: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x22a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x22a2b0: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x22a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x22a2b4: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x22a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x22a2b8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x22a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x22a2bc: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x22a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x22a2c0: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x22a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x22a2c4: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x22a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x22a2c8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x22a2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x22a2cc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x22A2CCu;
    {
        const bool branch_taken_0x22a2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2CCu;
            // 0x22a2d0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2cc) {
            ctx->pc = 0x22A280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a280;
        }
    }
    ctx->pc = 0x22A2D4u;
    // 0x22a2d4: 0x0  nop
    ctx->pc = 0x22a2d4u;
    // NOP
label_22a2d8:
    // 0x22a2d8: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x22a2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22a2dc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x22A2DCu;
    {
        const bool branch_taken_0x22a2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a2dc) {
            ctx->pc = 0x22A310u;
            goto label_22a310;
        }
    }
    ctx->pc = 0x22A2E4u;
    // 0x22a2e4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x22a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x22a2e8: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x22a2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x22a2ec: 0x1422021  addu        $a0, $t2, $v0
    ctx->pc = 0x22a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_22a2f0:
    // 0x22a2f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22a2f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22a2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22a2f8: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x22a2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22a2fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x22a300: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22a300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x22a304: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22A304u;
    {
        const bool branch_taken_0x22a304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A304u;
            // 0x22a308: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a304) {
            ctx->pc = 0x22A2F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a2f0;
        }
    }
    ctx->pc = 0x22A30Cu;
    // 0x22a30c: 0x0  nop
    ctx->pc = 0x22a30cu;
    // NOP
label_22a310:
    // 0x22a310: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x22a310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x22a314: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x22a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x22a318: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x22a318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22a31c: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x22a31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
    // 0x22a320: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x22a320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22a324: 0x5020001a  beql        $at, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x22A324u;
    {
        const bool branch_taken_0x22a324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a324) {
            ctx->pc = 0x22A328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A324u;
            // 0x22a328: 0x8e450068  lw          $a1, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A390u;
            goto label_22a390;
        }
    }
    ctx->pc = 0x22A32Cu;
    // 0x22a32c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x22a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x22a330: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22a330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22a334: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22a338: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A338u;
    {
        const bool branch_taken_0x22a338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a338) {
            ctx->pc = 0x22A33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A338u;
            // 0x22a33c: 0x8e430068  lw          $v1, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A35Cu;
            goto label_22a35c;
        }
    }
    ctx->pc = 0x22A340u;
    // 0x22a340: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x22a340u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22a344: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22a344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22a348: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22a34c: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x22a34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x22a350: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x22A350u;
    SET_GPR_U32(ctx, 31, 0x22A358u);
    ctx->pc = 0x22A354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A350u;
            // 0x22a354: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A358u; }
        if (ctx->pc != 0x22A358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A358u; }
        if (ctx->pc != 0x22A358u) { return; }
    }
    ctx->pc = 0x22A358u;
label_22a358:
    // 0x22a358: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x22a358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_22a35c:
    // 0x22a35c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22a360: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22a360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22a364: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x22a364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x22a368: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x22A368u;
    SET_GPR_U32(ctx, 31, 0x22A370u);
    ctx->pc = 0x22A36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A368u;
            // 0x22a36c: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A370u; }
        if (ctx->pc != 0x22A370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A370u; }
        if (ctx->pc != 0x22A370u) { return; }
    }
    ctx->pc = 0x22A370u;
label_22a370:
    // 0x22a370: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x22a370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x22a374: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22a374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x22a378: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x22a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x22a37c: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x22a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x22a380: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22a380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22a384: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22a388: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x22a388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x22a38c: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x22a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_22a390:
    // 0x22a390: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x22a390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
    // 0x22a394: 0x8e490064  lw          $t1, 0x64($s2)
    ctx->pc = 0x22a394u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x22a398: 0x8e0a0064  lw          $t2, 0x64($s0)
    ctx->pc = 0x22a398u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x22a39c: 0x18a00034  blez        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x22A39Cu;
    {
        const bool branch_taken_0x22a39c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22A3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A39Cu;
            // 0x22a3a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a39c) {
            ctx->pc = 0x22A470u;
            goto label_22a470;
        }
    }
    ctx->pc = 0x22A3A4u;
    // 0x22a3a4: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x22a3a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22a3a8: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x22A3A8u;
    {
        const bool branch_taken_0x22a3a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A3A8u;
            // 0x22a3ac: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3a8) {
            ctx->pc = 0x22A438u;
            goto label_22a438;
        }
    }
    ctx->pc = 0x22A3B0u;
    // 0x22a3b0: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A3B0u;
    {
        const bool branch_taken_0x22a3b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x22A3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A3B0u;
            // 0x22a3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3b0) {
            ctx->pc = 0x22A3D0u;
            goto label_22a3d0;
        }
    }
    ctx->pc = 0x22A3B8u;
    // 0x22a3b8: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x22a3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x22a3bc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x22a3bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x22a3c0: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x22a3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x22a3c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A3C4u;
    {
        const bool branch_taken_0x22a3c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a3c4) {
            ctx->pc = 0x22A3D0u;
            goto label_22a3d0;
        }
    }
    ctx->pc = 0x22A3CCu;
    // 0x22a3cc: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x22a3ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_22a3d0:
    // 0x22a3d0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22A3D0u;
    {
        const bool branch_taken_0x22a3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a3d0) {
            ctx->pc = 0x22A438u;
            goto label_22a438;
        }
    }
    ctx->pc = 0x22A3D8u;
    // 0x22a3d8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x22a3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3dc: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x22a3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22a3e0:
    // 0x22a3e0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x22a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22a3e4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x22a3e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x22a3e8: 0x104102a  slt         $v0, $t0, $a0
    ctx->pc = 0x22a3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22a3ec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x22a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x22a3f0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x22a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x22a3f4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x22a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x22a3f8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x22a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x22a3fc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x22a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x22a400: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x22a400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x22a404: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x22a404u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x22a408: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x22a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x22a40c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x22a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x22a410: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x22a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x22a414: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x22a414u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x22a418: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x22a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x22a41c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x22a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x22a420: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x22a420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x22a424: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x22a424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x22a428: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x22a428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x22a42c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x22A42Cu;
    {
        const bool branch_taken_0x22a42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A42Cu;
            // 0x22a430: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a42c) {
            ctx->pc = 0x22A3E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a3e0;
        }
    }
    ctx->pc = 0x22A434u;
    // 0x22a434: 0x0  nop
    ctx->pc = 0x22a434u;
    // NOP
label_22a438:
    // 0x22a438: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x22a438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22a43c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x22A43Cu;
    {
        const bool branch_taken_0x22a43c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a43c) {
            ctx->pc = 0x22A470u;
            goto label_22a470;
        }
    }
    ctx->pc = 0x22A444u;
    // 0x22a444: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x22a444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x22a448: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x22a448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x22a44c: 0x1422021  addu        $a0, $t2, $v0
    ctx->pc = 0x22a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_22a450:
    // 0x22a450: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22a450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22a454: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22a454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22a458: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x22a458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22a45c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x22a460: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22a460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x22a464: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22A464u;
    {
        const bool branch_taken_0x22a464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A464u;
            // 0x22a468: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a464) {
            ctx->pc = 0x22A450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a450;
        }
    }
    ctx->pc = 0x22A46Cu;
    // 0x22a46c: 0x0  nop
    ctx->pc = 0x22a46cu;
    // NOP
label_22a470:
    // 0x22a470: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x22a470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x22a474: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x22a474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x22a478: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x22a478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22a47c: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x22a47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
    // 0x22a480: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x22a480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22a484: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x22A484u;
    {
        const bool branch_taken_0x22a484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A484u;
            // 0x22a488: 0x26510050  addiu       $s1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a484) {
            ctx->pc = 0x22A4ECu;
            goto label_22a4ec;
        }
    }
    ctx->pc = 0x22A48Cu;
    // 0x22a48c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x22a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x22a490: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22a490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22a494: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22a494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22a498: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A498u;
    {
        const bool branch_taken_0x22a498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a498) {
            ctx->pc = 0x22A49Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A498u;
            // 0x22a49c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A4BCu;
            goto label_22a4bc;
        }
    }
    ctx->pc = 0x22A4A0u;
    // 0x22a4a0: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x22a4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22a4a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22a4a8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22a4ac: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x22a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x22a4b0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x22A4B0u;
    SET_GPR_U32(ctx, 31, 0x22A4B8u);
    ctx->pc = 0x22A4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4B0u;
            // 0x22a4b4: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A4B8u; }
        if (ctx->pc != 0x22A4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A4B8u; }
        if (ctx->pc != 0x22A4B8u) { return; }
    }
    ctx->pc = 0x22A4B8u;
label_22a4b8:
    // 0x22a4b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a4bc:
    // 0x22a4bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22a4c0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22a4c4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x22a4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x22a4c8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x22A4C8u;
    SET_GPR_U32(ctx, 31, 0x22A4D0u);
    ctx->pc = 0x22A4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4C8u;
            // 0x22a4cc: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A4D0u; }
        if (ctx->pc != 0x22A4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A4D0u; }
        if (ctx->pc != 0x22A4D0u) { return; }
    }
    ctx->pc = 0x22A4D0u;
label_22a4d0:
    // 0x22a4d0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x22a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x22a4d4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x22a4d8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x22a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x22a4dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22a4e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22a4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22a4e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22a4e8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x22a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_22a4ec:
    // 0x22a4ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22a4f0: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x22a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x22a4f4: 0x8e47004c  lw          $a3, 0x4C($s2)
    ctx->pc = 0x22a4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x22a4f8: 0x8e08004c  lw          $t0, 0x4C($s0)
    ctx->pc = 0x22a4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x22a4fc: 0x18600058  blez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x22A4FCu;
    {
        const bool branch_taken_0x22a4fc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22A500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4FCu;
            // 0x22a500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4fc) {
            ctx->pc = 0x22A660u;
            goto label_22a660;
        }
    }
    ctx->pc = 0x22A504u;
    // 0x22a504: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x22a504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22a508: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x22A508u;
    {
        const bool branch_taken_0x22a508 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A508u;
            // 0x22a50c: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a508) {
            ctx->pc = 0x22A618u;
            goto label_22a618;
        }
    }
    ctx->pc = 0x22A510u;
    // 0x22a510: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A510u;
    {
        const bool branch_taken_0x22a510 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x22A514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A510u;
            // 0x22a514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a510) {
            ctx->pc = 0x22A530u;
            goto label_22a530;
        }
    }
    ctx->pc = 0x22A518u;
    // 0x22a518: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x22a518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x22a51c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x22a51cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x22a520: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x22a520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x22a524: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A524u;
    {
        const bool branch_taken_0x22a524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a524) {
            ctx->pc = 0x22A530u;
            goto label_22a530;
        }
    }
    ctx->pc = 0x22A52Cu;
    // 0x22a52c: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x22a52cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_22a530:
    // 0x22a530: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x22A530u;
    {
        const bool branch_taken_0x22a530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a530) {
            ctx->pc = 0x22A618u;
            goto label_22a618;
        }
    }
    ctx->pc = 0x22A538u;
    // 0x22a538: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x22a538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a53c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x22a53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22a540:
    // 0x22a540: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x22a540u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22a544: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x22a544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x22a548: 0xc2482a  slt         $t1, $a2, $v0
    ctx->pc = 0x22a548u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22a54c: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x22a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x22a550: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x22a550u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22a554: 0xac8a0004  sw          $t2, 0x4($a0)
    ctx->pc = 0x22a554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 10));
    // 0x22a558: 0xdcaa0008  ld          $t2, 0x8($a1)
    ctx->pc = 0x22a558u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22a55c: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x22a55cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x22a560: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x22a560u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22a564: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x22a564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x22a568: 0x8caa0014  lw          $t2, 0x14($a1)
    ctx->pc = 0x22a568u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x22a56c: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x22a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x22a570: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x22a570u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x22a574: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x22a574u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x22a578: 0x8caa0020  lw          $t2, 0x20($a1)
    ctx->pc = 0x22a578u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x22a57c: 0xac8a0020  sw          $t2, 0x20($a0)
    ctx->pc = 0x22a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 10));
    // 0x22a580: 0x8caa0024  lw          $t2, 0x24($a1)
    ctx->pc = 0x22a580u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x22a584: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x22a584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x22a588: 0xdcaa0028  ld          $t2, 0x28($a1)
    ctx->pc = 0x22a588u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x22a58c: 0xfc8a0028  sd          $t2, 0x28($a0)
    ctx->pc = 0x22a58cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 10));
    // 0x22a590: 0x8caa0030  lw          $t2, 0x30($a1)
    ctx->pc = 0x22a590u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22a594: 0xac8a0030  sw          $t2, 0x30($a0)
    ctx->pc = 0x22a594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 10));
    // 0x22a598: 0x8caa0034  lw          $t2, 0x34($a1)
    ctx->pc = 0x22a598u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x22a59c: 0xac8a0034  sw          $t2, 0x34($a0)
    ctx->pc = 0x22a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 10));
    // 0x22a5a0: 0xdcaa0038  ld          $t2, 0x38($a1)
    ctx->pc = 0x22a5a0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x22a5a4: 0xfc8a0038  sd          $t2, 0x38($a0)
    ctx->pc = 0x22a5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 10));
    // 0x22a5a8: 0x8caa0040  lw          $t2, 0x40($a1)
    ctx->pc = 0x22a5a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x22a5ac: 0xac8a0040  sw          $t2, 0x40($a0)
    ctx->pc = 0x22a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 10));
    // 0x22a5b0: 0x8caa0044  lw          $t2, 0x44($a1)
    ctx->pc = 0x22a5b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x22a5b4: 0xac8a0044  sw          $t2, 0x44($a0)
    ctx->pc = 0x22a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 10));
    // 0x22a5b8: 0xdcaa0048  ld          $t2, 0x48($a1)
    ctx->pc = 0x22a5b8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x22a5bc: 0xfc8a0048  sd          $t2, 0x48($a0)
    ctx->pc = 0x22a5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 10));
    // 0x22a5c0: 0x8caa0050  lw          $t2, 0x50($a1)
    ctx->pc = 0x22a5c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x22a5c4: 0xac8a0050  sw          $t2, 0x50($a0)
    ctx->pc = 0x22a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 10));
    // 0x22a5c8: 0x8caa0054  lw          $t2, 0x54($a1)
    ctx->pc = 0x22a5c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x22a5cc: 0xac8a0054  sw          $t2, 0x54($a0)
    ctx->pc = 0x22a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 10));
    // 0x22a5d0: 0xdcaa0058  ld          $t2, 0x58($a1)
    ctx->pc = 0x22a5d0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x22a5d4: 0xfc8a0058  sd          $t2, 0x58($a0)
    ctx->pc = 0x22a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 10));
    // 0x22a5d8: 0x8caa0060  lw          $t2, 0x60($a1)
    ctx->pc = 0x22a5d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x22a5dc: 0xac8a0060  sw          $t2, 0x60($a0)
    ctx->pc = 0x22a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 10));
    // 0x22a5e0: 0x8caa0064  lw          $t2, 0x64($a1)
    ctx->pc = 0x22a5e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x22a5e4: 0xac8a0064  sw          $t2, 0x64($a0)
    ctx->pc = 0x22a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 10));
    // 0x22a5e8: 0xdcaa0068  ld          $t2, 0x68($a1)
    ctx->pc = 0x22a5e8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x22a5ec: 0xfc8a0068  sd          $t2, 0x68($a0)
    ctx->pc = 0x22a5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 10));
    // 0x22a5f0: 0x8caa0070  lw          $t2, 0x70($a1)
    ctx->pc = 0x22a5f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x22a5f4: 0xac8a0070  sw          $t2, 0x70($a0)
    ctx->pc = 0x22a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 10));
    // 0x22a5f8: 0x8caa0074  lw          $t2, 0x74($a1)
    ctx->pc = 0x22a5f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x22a5fc: 0xac8a0074  sw          $t2, 0x74($a0)
    ctx->pc = 0x22a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 10));
    // 0x22a600: 0xdcaa0078  ld          $t2, 0x78($a1)
    ctx->pc = 0x22a600u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x22a604: 0xfc8a0078  sd          $t2, 0x78($a0)
    ctx->pc = 0x22a604u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 10));
    // 0x22a608: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x22a608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x22a60c: 0x1520ffcc  bnez        $t1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x22A60Cu;
    {
        const bool branch_taken_0x22a60c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A60Cu;
            // 0x22a610: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a60c) {
            ctx->pc = 0x22A540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a540;
        }
    }
    ctx->pc = 0x22A614u;
    // 0x22a614: 0x0  nop
    ctx->pc = 0x22a614u;
    // NOP
label_22a618:
    // 0x22a618: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x22a618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22a61c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x22A61Cu;
    {
        const bool branch_taken_0x22a61c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a61c) {
            ctx->pc = 0x22A660u;
            goto label_22a660;
        }
    }
    ctx->pc = 0x22A624u;
    // 0x22a624: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x22a624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x22a628: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x22a628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22a62c: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x22a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_22a630:
    // 0x22a630: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x22a630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22a634: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22a634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22a638: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x22a638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22a63c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x22a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x22a640: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x22a640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x22a644: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x22a644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x22a648: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x22a648u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x22a64c: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x22a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x22a650: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x22a650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x22a654: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22A654u;
    {
        const bool branch_taken_0x22a654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A654u;
            // 0x22a658: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a654) {
            ctx->pc = 0x22A630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a630;
        }
    }
    ctx->pc = 0x22A65Cu;
    // 0x22a65c: 0x0  nop
    ctx->pc = 0x22a65cu;
    // NOP
label_22a660:
    // 0x22a660: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22a660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a664: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22a664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a674: 0x3e00008  jr          $ra
    ctx->pc = 0x22A674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A674u;
            // 0x22a678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A67Cu;
    // 0x22a67c: 0x0  nop
    ctx->pc = 0x22a67cu;
    // NOP
    // 0x22a680: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x22a680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a684: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x22a684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x22a688: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x22a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a68c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x22a68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x22a690: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x22a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a694: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x22a694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x22a698: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x22a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a69c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x22a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x22a6a0: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x22a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a6a4: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x22a6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x22a6a8: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x22a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a6ac: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x22a6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x22a6b0: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x22a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a6b4: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x22a6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x22a6b8: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x22a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x22A6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A6BCu;
            // 0x22a6c0: 0xe4a0001c  swc1        $f0, 0x1C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A6C4u;
    // 0x22a6c4: 0x0  nop
    ctx->pc = 0x22a6c4u;
    // NOP
    // 0x22a6c8: 0x0  nop
    ctx->pc = 0x22a6c8u;
    // NOP
    // 0x22a6cc: 0x0  nop
    ctx->pc = 0x22a6ccu;
    // NOP
}
