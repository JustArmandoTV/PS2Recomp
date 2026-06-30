#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018ACC0
// Address: 0x18acc0 - 0x18ae30
void sub_0018ACC0_0x18acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018ACC0_0x18acc0");
#endif

    ctx->pc = 0x18acc0u;

    // 0x18acc0: 0x24830180  addiu       $v1, $a0, 0x180
    ctx->pc = 0x18acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x18acc4: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x18acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x18acc8: 0x8c6502c4  lw          $a1, 0x2C4($v1)
    ctx->pc = 0x18acc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
    // 0x18accc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18acccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18acd0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x18acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x18acd4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x18acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x18acd8: 0x8c6202c8  lw          $v0, 0x2C8($v1)
    ctx->pc = 0x18acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 712)));
    // 0x18acdc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x18acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x18ace0: 0x8c6502cc  lw          $a1, 0x2CC($v1)
    ctx->pc = 0x18ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
    // 0x18ace4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x18ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x18ace8: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x18ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x18acec: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x18acecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x18acf0: 0x8c6500dc  lw          $a1, 0xDC($v1)
    ctx->pc = 0x18acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x18acf4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18acf8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x18acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x18acfc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x18acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x18ad00: 0x8c6500bc  lw          $a1, 0xBC($v1)
    ctx->pc = 0x18ad00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x18ad04: 0x8c6600e0  lw          $a2, 0xE0($v1)
    ctx->pc = 0x18ad04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x18ad08: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x18ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x18ad0c: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x18ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x18ad10: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x18ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x18ad14: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x18ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x18ad18: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x18ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x18ad1c: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x18ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x18ad20: 0x8c6200c8  lw          $v0, 0xC8($v1)
    ctx->pc = 0x18ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x18ad24: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x18ad24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x18ad28: 0x8c6500cc  lw          $a1, 0xCC($v1)
    ctx->pc = 0x18ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x18ad2c: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x18ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x18ad30: 0x8c62043c  lw          $v0, 0x43C($v1)
    ctx->pc = 0x18ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1084)));
    // 0x18ad34: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x18ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x18ad38: 0x8c65042c  lw          $a1, 0x42C($v1)
    ctx->pc = 0x18ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1068)));
    // 0x18ad3c: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x18ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x18ad40: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x18ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x18ad44: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x18ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x18ad48: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x18ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x18ad4c: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x18ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x18ad50: 0xac870044  sw          $a3, 0x44($a0)
    ctx->pc = 0x18ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 7));
    // 0x18ad54: 0x8c6202d4  lw          $v0, 0x2D4($v1)
    ctx->pc = 0x18ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 724)));
    // 0x18ad58: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x18ad58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x18ad5c: 0x8c6502d8  lw          $a1, 0x2D8($v1)
    ctx->pc = 0x18ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 728)));
    // 0x18ad60: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x18ad60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
    // 0x18ad64: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x18ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x18ad68: 0x8c650134  lw          $a1, 0x134($v1)
    ctx->pc = 0x18ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x18ad6c: 0x94670080  lhu         $a3, 0x80($v1)
    ctx->pc = 0x18ad6cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x18ad70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18ad74: 0x94680084  lhu         $t0, 0x84($v1)
    ctx->pc = 0x18ad74u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x18ad78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18ad7c: 0x8c66011c  lw          $a2, 0x11C($v1)
    ctx->pc = 0x18ad7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x18ad80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18ad84: 0xa4870050  sh          $a3, 0x50($a0)
    ctx->pc = 0x18ad84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 7));
    // 0x18ad88: 0xa4880052  sh          $t0, 0x52($a0)
    ctx->pc = 0x18ad88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 8));
    // 0x18ad8c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x18ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18ad90: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x18ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x18ad94: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x18ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18ad98: 0x90a581f0  lbu         $a1, -0x7E10($a1)
    ctx->pc = 0x18ad98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294935024)));
    // 0x18ad9c: 0xa0850054  sb          $a1, 0x54($a0)
    ctx->pc = 0x18ad9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
    // 0x18ada0: 0x9062013c  lbu         $v0, 0x13C($v1)
    ctx->pc = 0x18ada0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x18ada4: 0xa0820055  sb          $v0, 0x55($a0)
    ctx->pc = 0x18ada4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ada8: 0x9065011c  lbu         $a1, 0x11C($v1)
    ctx->pc = 0x18ada8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x18adac: 0xa0850056  sb          $a1, 0x56($a0)
    ctx->pc = 0x18adacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 5));
    // 0x18adb0: 0x90620134  lbu         $v0, 0x134($v1)
    ctx->pc = 0x18adb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x18adb4: 0xa0820057  sb          $v0, 0x57($a0)
    ctx->pc = 0x18adb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x18adb8: 0x906503c4  lbu         $a1, 0x3C4($v1)
    ctx->pc = 0x18adb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 964)));
    // 0x18adbc: 0xa0850058  sb          $a1, 0x58($a0)
    ctx->pc = 0x18adbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x18adc0: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x18adc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18adc4: 0xa0820059  sb          $v0, 0x59($a0)
    ctx->pc = 0x18adc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x18adc8: 0x90650020  lbu         $a1, 0x20($v1)
    ctx->pc = 0x18adc8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18adcc: 0xa085005a  sb          $a1, 0x5A($a0)
    ctx->pc = 0x18adccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 5));
    // 0x18add0: 0x90620064  lbu         $v0, 0x64($v1)
    ctx->pc = 0x18add0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x18add4: 0xa082005b  sb          $v0, 0x5B($a0)
    ctx->pc = 0x18add4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 2));
    // 0x18add8: 0x90650068  lbu         $a1, 0x68($v1)
    ctx->pc = 0x18add8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x18addc: 0xa085005c  sb          $a1, 0x5C($a0)
    ctx->pc = 0x18addcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 5));
    // 0x18ade0: 0x90620044  lbu         $v0, 0x44($v1)
    ctx->pc = 0x18ade0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x18ade4: 0xa082005d  sb          $v0, 0x5D($a0)
    ctx->pc = 0x18ade4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ade8: 0x90650048  lbu         $a1, 0x48($v1)
    ctx->pc = 0x18ade8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x18adec: 0xa085005e  sb          $a1, 0x5E($a0)
    ctx->pc = 0x18adecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 5));
    // 0x18adf0: 0x90620060  lbu         $v0, 0x60($v1)
    ctx->pc = 0x18adf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x18adf4: 0xa082005f  sb          $v0, 0x5F($a0)
    ctx->pc = 0x18adf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 2));
    // 0x18adf8: 0x9065006c  lbu         $a1, 0x6C($v1)
    ctx->pc = 0x18adf8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x18adfc: 0xa0850060  sb          $a1, 0x60($a0)
    ctx->pc = 0x18adfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x18ae00: 0x90620070  lbu         $v0, 0x70($v1)
    ctx->pc = 0x18ae00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x18ae04: 0xa0820061  sb          $v0, 0x61($a0)
    ctx->pc = 0x18ae04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ae08: 0x90650074  lbu         $a1, 0x74($v1)
    ctx->pc = 0x18ae08u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x18ae0c: 0xa0850062  sb          $a1, 0x62($a0)
    ctx->pc = 0x18ae0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 5));
    // 0x18ae10: 0x90620078  lbu         $v0, 0x78($v1)
    ctx->pc = 0x18ae10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x18ae14: 0xa0820063  sb          $v0, 0x63($a0)
    ctx->pc = 0x18ae14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ae18: 0x9065007c  lbu         $a1, 0x7C($v1)
    ctx->pc = 0x18ae18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x18ae1c: 0xa0850064  sb          $a1, 0x64($a0)
    ctx->pc = 0x18ae1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 5));
    // 0x18ae20: 0x8c6204ac  lw          $v0, 0x4AC($v1)
    ctx->pc = 0x18ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1196)));
    // 0x18ae24: 0x3e00008  jr          $ra
    ctx->pc = 0x18AE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE24u;
            // 0x18ae28: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AE2Cu;
    // 0x18ae2c: 0x0  nop
    ctx->pc = 0x18ae2cu;
    // NOP
}
