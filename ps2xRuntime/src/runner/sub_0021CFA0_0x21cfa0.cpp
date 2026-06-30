#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CFA0
// Address: 0x21cfa0 - 0x21d0e0
void sub_0021CFA0_0x21cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CFA0_0x21cfa0");
#endif

    switch (ctx->pc) {
        case 0x21d024u: goto label_21d024;
        default: break;
    }

    ctx->pc = 0x21cfa0u;

    // 0x21cfa0: 0x94a80010  lhu         $t0, 0x10($a1)
    ctx->pc = 0x21cfa0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x21cfa4: 0x24870030  addiu       $a3, $a0, 0x30
    ctx->pc = 0x21cfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x21cfa8: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x21cfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x21cfac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21cfacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfb0: 0xa4880010  sh          $t0, 0x10($a0)
    ctx->pc = 0x21cfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 8));
    // 0x21cfb4: 0x94a80012  lhu         $t0, 0x12($a1)
    ctx->pc = 0x21cfb4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x21cfb8: 0xa4880012  sh          $t0, 0x12($a0)
    ctx->pc = 0x21cfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 8));
    // 0x21cfbc: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x21cfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cfc0: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x21cfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cfc4: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x21cfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cfc8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x21cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cfcc: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x21cfccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x21cfd0: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x21cfd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x21cfd4: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x21cfd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x21cfd8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x21cfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x21cfdc: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x21cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cfe0: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x21cfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cfe4: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x21cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cfe8: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x21cfe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x21cfec: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x21cfecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x21cff0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x21cff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x21cff4: 0x94a80004  lhu         $t0, 0x4($a1)
    ctx->pc = 0x21cff4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21cff8: 0xa4880004  sh          $t0, 0x4($a0)
    ctx->pc = 0x21cff8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x21cffc: 0x948a0006  lhu         $t2, 0x6($a0)
    ctx->pc = 0x21cffcu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x21d000: 0x94a90006  lhu         $t1, 0x6($a1)
    ctx->pc = 0x21d000u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x21d004: 0x94a80004  lhu         $t0, 0x4($a1)
    ctx->pc = 0x21d004u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21d008: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x21d008u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x21d00c: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x21d00cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x21d010: 0x92140  sll         $a0, $t1, 5
    ctx->pc = 0x21d010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x21d014: 0x254c0030  addiu       $t4, $t2, 0x30
    ctx->pc = 0x21d014u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x21d018: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21d018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21d01c: 0x1900002e  blez        $t0, . + 4 + (0x2E << 2)
    ctx->pc = 0x21D01Cu;
    {
        const bool branch_taken_0x21d01c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x21D020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D01Cu;
            // 0x21d020: 0x248b0030  addiu       $t3, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d01c) {
            ctx->pc = 0x21D0D8u;
            goto label_21d0d8;
        }
    }
    ctx->pc = 0x21D024u;
label_21d024:
    // 0x21d024: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x21d024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d028: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x21d028u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d02c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x21d02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d030: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x21d030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d034: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x21d034u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d038: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21d03c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x21d03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x21d040: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x21d040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x21d044: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x21d044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x21d048: 0x256b0014  addiu       $t3, $t3, 0x14
    ctx->pc = 0x21d048u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x21d04c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x21d04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d050: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x21d050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x21d054: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x21d054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d058: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x21d058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x21d05c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x21d05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d060: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x21d060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x21d064: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x21d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d068: 0xe5400010  swc1        $f0, 0x10($t2)
    ctx->pc = 0x21d068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x21d06c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x21d06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d070: 0xe5400014  swc1        $f0, 0x14($t2)
    ctx->pc = 0x21d070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x21d074: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x21d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d078: 0xe5400018  swc1        $f0, 0x18($t2)
    ctx->pc = 0x21d078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x21d07c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x21d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d080: 0xe540001c  swc1        $f0, 0x1C($t2)
    ctx->pc = 0x21d080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
    // 0x21d084: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x21d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d088: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x21d088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x21d08c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x21d08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d090: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x21d090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x21d094: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x21d094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x21d098: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x21d098u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x21d09c: 0x9104000c  lbu         $a0, 0xC($t0)
    ctx->pc = 0x21d09cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x21d0a0: 0xa124000c  sb          $a0, 0xC($t1)
    ctx->pc = 0x21d0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x21d0a4: 0x9104000d  lbu         $a0, 0xD($t0)
    ctx->pc = 0x21d0a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x21d0a8: 0xa124000d  sb          $a0, 0xD($t1)
    ctx->pc = 0x21d0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x21d0ac: 0x9104000e  lbu         $a0, 0xE($t0)
    ctx->pc = 0x21d0acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x21d0b0: 0xa124000e  sb          $a0, 0xE($t1)
    ctx->pc = 0x21d0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x21d0b4: 0x9104000f  lbu         $a0, 0xF($t0)
    ctx->pc = 0x21d0b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 15)));
    // 0x21d0b8: 0xa124000f  sb          $a0, 0xF($t1)
    ctx->pc = 0x21d0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x21d0bc: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x21d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d0c0: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x21d0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x21d0c4: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x21d0c4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21d0c8: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x21d0c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21d0cc: 0x1480ffd5  bnez        $a0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x21D0CCu;
    {
        const bool branch_taken_0x21d0cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0CCu;
            // 0x21d0d0: 0x258c0014  addiu       $t4, $t4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0cc) {
            ctx->pc = 0x21D024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21d024;
        }
    }
    ctx->pc = 0x21D0D4u;
    // 0x21d0d4: 0x0  nop
    ctx->pc = 0x21d0d4u;
    // NOP
label_21d0d8:
    // 0x21d0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21D0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D0E0u;
}
