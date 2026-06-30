#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005308F0
// Address: 0x5308f0 - 0x531250
void sub_005308F0_0x5308f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005308F0_0x5308f0");
#endif

    switch (ctx->pc) {
        case 0x5309d0u: goto label_5309d0;
        case 0x530b1cu: goto label_530b1c;
        case 0x530b3cu: goto label_530b3c;
        case 0x530bc0u: goto label_530bc0;
        case 0x530be4u: goto label_530be4;
        case 0x530c34u: goto label_530c34;
        case 0x530d18u: goto label_530d18;
        case 0x530e04u: goto label_530e04;
        case 0x530ed8u: goto label_530ed8;
        case 0x530fd4u: goto label_530fd4;
        case 0x53105cu: goto label_53105c;
        case 0x53107cu: goto label_53107c;
        case 0x531114u: goto label_531114;
        case 0x531134u: goto label_531134;
        case 0x5311b0u: goto label_5311b0;
        default: break;
    }

    ctx->pc = 0x5308f0u;

    // 0x5308f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5308f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5308f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5308f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5308f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5308f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5308fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5308fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x530900: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x530900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x530904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x530904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x530908: 0x8ce411d4  lw          $a0, 0x11D4($a3)
    ctx->pc = 0x530908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4564)));
    // 0x53090c: 0x108300a4  beq         $a0, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x53090Cu;
    {
        const bool branch_taken_0x53090c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x530910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53090Cu;
            // 0x530910: 0x8ce60d60  lw          $a2, 0xD60($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53090c) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530914u;
    // 0x530914: 0x8ce30e00  lw          $v1, 0xE00($a3)
    ctx->pc = 0x530914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3584)));
    // 0x530918: 0x58600047  blezl       $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x530918u;
    {
        const bool branch_taken_0x530918 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x530918) {
            ctx->pc = 0x53091Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530918u;
            // 0x53091c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530A38u;
            goto label_530a38;
        }
    }
    ctx->pc = 0x530920u;
    // 0x530920: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x530920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x530924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x530924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x530928: 0x10650042  beq         $v1, $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x530928u;
    {
        const bool branch_taken_0x530928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x530928) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x530930u;
    // 0x530930: 0x8ce40db0  lw          $a0, 0xDB0($a3)
    ctx->pc = 0x530930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3504)));
    // 0x530934: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x530934u;
    {
        const bool branch_taken_0x530934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x530934) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x53093Cu;
    // 0x53093c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x53093cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x530940: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x530940u;
    {
        const bool branch_taken_0x530940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530940) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x530948u;
    // 0x530948: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x530948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x53094c: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x53094Cu;
    {
        const bool branch_taken_0x53094c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53094c) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x530954u;
    // 0x530954: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x530954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x530958: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x530958u;
    {
        const bool branch_taken_0x530958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530958) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x530960u;
    // 0x530960: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x530960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x530964: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x530964u;
    {
        const bool branch_taken_0x530964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530964) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x53096Cu;
    // 0x53096c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x53096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x530970: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x530970u;
    {
        const bool branch_taken_0x530970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530970) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x530978u;
    // 0x530978: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x530978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x53097c: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x53097Cu;
    {
        const bool branch_taken_0x53097c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53097c) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x530984u;
    // 0x530984: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x530984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x530988: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x530988u;
    {
        const bool branch_taken_0x530988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530988) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x530990u;
    // 0x530990: 0x8ce30da0  lw          $v1, 0xDA0($a3)
    ctx->pc = 0x530990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3488)));
    // 0x530994: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x530994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x530998: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x530998u;
    {
        const bool branch_taken_0x530998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x530998) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x5309A0u;
    // 0x5309a0: 0x90c3001c  lbu         $v1, 0x1C($a2)
    ctx->pc = 0x5309a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x5309a4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x5309A4u;
    {
        const bool branch_taken_0x5309a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5309a4) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x5309ACu;
    // 0x5309ac: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x5309acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x5309b0: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x5309b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x5309b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5309b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5309b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x5309b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x5309bc: 0xac4511d4  sw          $a1, 0x11D4($v0)
    ctx->pc = 0x5309bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4564), GPR_U32(ctx, 5));
    // 0x5309c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x5309c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x5309c4: 0x8c440d70  lw          $a0, 0xD70($v0)
    ctx->pc = 0x5309c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x5309c8: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x5309C8u;
    SET_GPR_U32(ctx, 31, 0x5309D0u);
    ctx->pc = 0x5309CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5309C8u;
            // 0x5309cc: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5309D0u; }
        if (ctx->pc != 0x5309D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5309D0u; }
        if (ctx->pc != 0x5309D0u) { return; }
    }
    ctx->pc = 0x5309D0u;
label_5309d0:
    // 0x5309d0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x5309d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x5309d4: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x5309D4u;
    {
        const bool branch_taken_0x5309d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5309d4) {
            ctx->pc = 0x5309D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5309D4u;
            // 0x5309d8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530A0Cu;
            goto label_530a0c;
        }
    }
    ctx->pc = 0x5309DCu;
    // 0x5309dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5309dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5309e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5309e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5309e4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x5309e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x5309e8: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x5309e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x5309ec: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x5309ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x5309f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5309f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5309f4: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x5309f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x5309f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5309f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5309fc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x5309fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530a00: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x530a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x530a04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x530A04u;
    {
        const bool branch_taken_0x530a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x530A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530A04u;
            // 0x530a08: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530a04) {
            ctx->pc = 0x530A34u;
            goto label_530a34;
        }
    }
    ctx->pc = 0x530A0Cu;
label_530a0c:
    // 0x530a0c: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x530a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x530a10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x530a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x530a14: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x530a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530a18: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x530a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x530a1c: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x530a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x530a20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x530a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x530a24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x530a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x530a28: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x530a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530a2c: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x530a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x530a30: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x530a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_530a34:
    // 0x530a34: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x530a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_530a38:
    // 0x530a38: 0x8ca30e00  lw          $v1, 0xE00($a1)
    ctx->pc = 0x530a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3584)));
    // 0x530a3c: 0x54600059  bnel        $v1, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x530A3Cu;
    {
        const bool branch_taken_0x530a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x530a3c) {
            ctx->pc = 0x530A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530A3Cu;
            // 0x530a40: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530BA4u;
            goto label_530ba4;
        }
    }
    ctx->pc = 0x530A44u;
    // 0x530a44: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x530a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x530a48: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x530A48u;
    {
        const bool branch_taken_0x530a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x530a48) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530A50u;
    // 0x530a50: 0x8ca40db0  lw          $a0, 0xDB0($a1)
    ctx->pc = 0x530a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
    // 0x530a54: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x530A54u;
    {
        const bool branch_taken_0x530a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x530a54) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530A5Cu;
    // 0x530a5c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x530a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x530a60: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x530A60u;
    {
        const bool branch_taken_0x530a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530a60) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530A68u;
    // 0x530a68: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x530a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x530a6c: 0x1083004c  beq         $a0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x530A6Cu;
    {
        const bool branch_taken_0x530a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530a6c) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530A74u;
    // 0x530a74: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x530a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x530a78: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x530A78u;
    {
        const bool branch_taken_0x530a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530a78) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530A80u;
    // 0x530a80: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x530a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x530a84: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x530A84u;
    {
        const bool branch_taken_0x530a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530a84) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530A8Cu;
    // 0x530a8c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x530a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x530a90: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x530A90u;
    {
        const bool branch_taken_0x530a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530a90) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530A98u;
    // 0x530a98: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x530a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x530a9c: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x530A9Cu;
    {
        const bool branch_taken_0x530a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530a9c) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530AA4u;
    // 0x530aa4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x530aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x530aa8: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x530AA8u;
    {
        const bool branch_taken_0x530aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530aa8) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530AB0u;
    // 0x530ab0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x530ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x530ab4: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x530AB4u;
    {
        const bool branch_taken_0x530ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x530ab4) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530ABCu;
    // 0x530abc: 0x8ca30da0  lw          $v1, 0xDA0($a1)
    ctx->pc = 0x530abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
    // 0x530ac0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x530ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x530ac4: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x530AC4u;
    {
        const bool branch_taken_0x530ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x530ac4) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530ACCu;
    // 0x530acc: 0xc4a10de4  lwc1        $f1, 0xDE4($a1)
    ctx->pc = 0x530accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x530ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x530ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x530ad4: 0x0  nop
    ctx->pc = 0x530ad4u;
    // NOP
    // 0x530ad8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x530ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x530adc: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x530ADCu;
    {
        const bool branch_taken_0x530adc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x530adc) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530AE4u;
    // 0x530ae4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x530ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x530ae8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x530ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x530aec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x530aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x530af0: 0xac6011d4  sw          $zero, 0x11D4($v1)
    ctx->pc = 0x530af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 0));
    // 0x530af4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x530af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x530af8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x530AF8u;
    {
        const bool branch_taken_0x530af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x530af8) {
            ctx->pc = 0x530AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530AF8u;
            // 0x530afc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530B24u;
            goto label_530b24;
        }
    }
    ctx->pc = 0x530B00u;
    // 0x530b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x530b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x530b04: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x530b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x530b08: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x530b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x530b0c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x530b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x530b10: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x530b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x530b14: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x530B14u;
    SET_GPR_U32(ctx, 31, 0x530B1Cu);
    ctx->pc = 0x530B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530B14u;
            // 0x530b18: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530B1Cu; }
        if (ctx->pc != 0x530B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530B1Cu; }
        if (ctx->pc != 0x530B1Cu) { return; }
    }
    ctx->pc = 0x530B1Cu;
label_530b1c:
    // 0x530b1c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x530b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x530b20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x530b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_530b24:
    // 0x530b24: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x530b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x530b28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x530b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x530b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x530b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x530b30: 0x8c640d70  lw          $a0, 0xD70($v1)
    ctx->pc = 0x530b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
    // 0x530b34: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x530B34u;
    SET_GPR_U32(ctx, 31, 0x530B3Cu);
    ctx->pc = 0x530B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530B34u;
            // 0x530b38: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530B3Cu; }
        if (ctx->pc != 0x530B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530B3Cu; }
        if (ctx->pc != 0x530B3Cu) { return; }
    }
    ctx->pc = 0x530B3Cu;
label_530b3c:
    // 0x530b3c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x530b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x530b40: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x530B40u;
    {
        const bool branch_taken_0x530b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x530b40) {
            ctx->pc = 0x530B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530B40u;
            // 0x530b44: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530B78u;
            goto label_530b78;
        }
    }
    ctx->pc = 0x530B48u;
    // 0x530b48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x530b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x530b4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x530b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x530b50: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x530b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530b54: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x530b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x530b58: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x530b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x530b5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x530b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x530b60: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x530b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x530b64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x530b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x530b68: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x530b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530b6c: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x530b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x530b70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x530B70u;
    {
        const bool branch_taken_0x530b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x530B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530B70u;
            // 0x530b74: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530b70) {
            ctx->pc = 0x530BA0u;
            goto label_530ba0;
        }
    }
    ctx->pc = 0x530B78u;
label_530b78:
    // 0x530b78: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x530b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x530b7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x530b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x530b80: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x530b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530b84: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x530b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x530b88: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x530b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x530b8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x530b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x530b90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x530b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x530b94: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x530b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530b98: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x530b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x530b9c: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x530b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_530ba0:
    // 0x530ba0: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x530ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_530ba4:
    // 0x530ba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x530ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x530ba8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x530BA8u;
    {
        const bool branch_taken_0x530ba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x530BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530BA8u;
            // 0x530bac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530ba8) {
            ctx->pc = 0x530BC8u;
            goto label_530bc8;
        }
    }
    ctx->pc = 0x530BB0u;
    // 0x530bb0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x530bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x530bb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x530bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x530bb8: 0xc14c494  jal         func_531250
    ctx->pc = 0x530BB8u;
    SET_GPR_U32(ctx, 31, 0x530BC0u);
    ctx->pc = 0x530BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530BB8u;
            // 0x530bbc: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x531250u;
    if (runtime->hasFunction(0x531250u)) {
        auto targetFn = runtime->lookupFunction(0x531250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530BC0u; }
        if (ctx->pc != 0x530BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00531250_0x531250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530BC0u; }
        if (ctx->pc != 0x530BC0u) { return; }
    }
    ctx->pc = 0x530BC0u;
label_530bc0:
    // 0x530bc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x530BC0u;
    {
        const bool branch_taken_0x530bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x530BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530BC0u;
            // 0x530bc4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530bc0) {
            ctx->pc = 0x530BE8u;
            goto label_530be8;
        }
    }
    ctx->pc = 0x530BC8u;
label_530bc8:
    // 0x530bc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x530bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x530bcc: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x530BCCu;
    {
        const bool branch_taken_0x530bcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x530bcc) {
            ctx->pc = 0x530BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530BCCu;
            // 0x530bd0: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530BECu;
            goto label_530bec;
        }
    }
    ctx->pc = 0x530BD4u;
    // 0x530bd4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x530bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x530bd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x530bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x530bdc: 0xc14c494  jal         func_531250
    ctx->pc = 0x530BDCu;
    SET_GPR_U32(ctx, 31, 0x530BE4u);
    ctx->pc = 0x530BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530BDCu;
            // 0x530be0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x531250u;
    if (runtime->hasFunction(0x531250u)) {
        auto targetFn = runtime->lookupFunction(0x531250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530BE4u; }
        if (ctx->pc != 0x530BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00531250_0x531250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530BE4u; }
        if (ctx->pc != 0x530BE4u) { return; }
    }
    ctx->pc = 0x530BE4u;
label_530be4:
    // 0x530be4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x530be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_530be8:
    // 0x530be8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x530be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_530bec:
    // 0x530bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x530becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x530bf0: 0x5065002c  beql        $v1, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x530BF0u;
    {
        const bool branch_taken_0x530bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x530bf0) {
            ctx->pc = 0x530BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530BF0u;
            // 0x530bf4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530CA4u;
            goto label_530ca4;
        }
    }
    ctx->pc = 0x530BF8u;
    // 0x530bf8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x530BF8u;
    {
        const bool branch_taken_0x530bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x530bf8) {
            ctx->pc = 0x530BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530BF8u;
            // 0x530bfc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530C08u;
            goto label_530c08;
        }
    }
    ctx->pc = 0x530C00u;
    // 0x530c00: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x530C00u;
    {
        const bool branch_taken_0x530c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x530C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530C00u;
            // 0x530c04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530c00) {
            ctx->pc = 0x531244u;
            goto label_531244;
        }
    }
    ctx->pc = 0x530C08u;
label_530c08:
    // 0x530c08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x530c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x530c0c: 0x8c8411d4  lw          $a0, 0x11D4($a0)
    ctx->pc = 0x530c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4564)));
    // 0x530c10: 0x1483018b  bne         $a0, $v1, . + 4 + (0x18B << 2)
    ctx->pc = 0x530C10u;
    {
        const bool branch_taken_0x530c10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x530c10) {
            ctx->pc = 0x531240u;
            goto label_531240;
        }
    }
    ctx->pc = 0x530C18u;
    // 0x530c18: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x530c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x530c1c: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x530c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x530c20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x530c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x530c24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x530c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x530c28: 0x8c440d70  lw          $a0, 0xD70($v0)
    ctx->pc = 0x530c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x530c2c: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x530C2Cu;
    SET_GPR_U32(ctx, 31, 0x530C34u);
    ctx->pc = 0x530C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530C2Cu;
            // 0x530c30: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530C34u; }
        if (ctx->pc != 0x530C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530C34u; }
        if (ctx->pc != 0x530C34u) { return; }
    }
    ctx->pc = 0x530C34u;
label_530c34:
    // 0x530c34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x530c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x530c38: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x530c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x530c3c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x530c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x530c40: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x530C40u;
    {
        const bool branch_taken_0x530c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x530c40) {
            ctx->pc = 0x530C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530C40u;
            // 0x530c44: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530C78u;
            goto label_530c78;
        }
    }
    ctx->pc = 0x530C48u;
    // 0x530c48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x530c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x530c4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x530c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x530c50: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x530c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530c54: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x530c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x530c58: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x530c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x530c5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x530c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x530c60: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x530c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x530c64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x530c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x530c68: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x530c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530c6c: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x530c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x530c70: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x530C70u;
    {
        const bool branch_taken_0x530c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x530C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530C70u;
            // 0x530c74: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530c70) {
            ctx->pc = 0x531240u;
            goto label_531240;
        }
    }
    ctx->pc = 0x530C78u;
label_530c78:
    // 0x530c78: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x530c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x530c7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x530c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x530c80: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x530c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530c84: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x530c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x530c88: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x530c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x530c8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x530c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x530c90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x530c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x530c94: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x530c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x530c98: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x530c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x530c9c: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x530C9Cu;
    {
        const bool branch_taken_0x530c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x530CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530C9Cu;
            // 0x530ca0: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530c9c) {
            ctx->pc = 0x531240u;
            goto label_531240;
        }
    }
    ctx->pc = 0x530CA4u;
label_530ca4:
    // 0x530ca4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x530ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x530ca8: 0x8c8611d4  lw          $a2, 0x11D4($a0)
    ctx->pc = 0x530ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4564)));
    // 0x530cac: 0x50c3005a  beql        $a2, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x530CACu;
    {
        const bool branch_taken_0x530cac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530cac) {
            ctx->pc = 0x530CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530CACu;
            // 0x530cb0: 0xc48011e0  lwc1        $f0, 0x11E0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x530E18u;
            goto label_530e18;
        }
    }
    ctx->pc = 0x530CB4u;
    // 0x530cb4: 0x50e00019  beql        $a3, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x530CB4u;
    {
        const bool branch_taken_0x530cb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x530cb4) {
            ctx->pc = 0x530CB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530CB4u;
            // 0x530cb8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530D1Cu;
            goto label_530d1c;
        }
    }
    ctx->pc = 0x530CBCu;
    // 0x530cbc: 0x8c860db0  lw          $a2, 0xDB0($a0)
    ctx->pc = 0x530cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
    // 0x530cc0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x530cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x530cc4: 0x10c50014  beq         $a2, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x530CC4u;
    {
        const bool branch_taken_0x530cc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x530cc4) {
            ctx->pc = 0x530D18u;
            goto label_530d18;
        }
    }
    ctx->pc = 0x530CCCu;
    // 0x530ccc: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x530CCCu;
    {
        const bool branch_taken_0x530ccc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x530ccc) {
            ctx->pc = 0x530D18u;
            goto label_530d18;
        }
    }
    ctx->pc = 0x530CD4u;
    // 0x530cd4: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x530cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x530cd8: 0x10c3000f  beq         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x530CD8u;
    {
        const bool branch_taken_0x530cd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530cd8) {
            ctx->pc = 0x530D18u;
            goto label_530d18;
        }
    }
    ctx->pc = 0x530CE0u;
    // 0x530ce0: 0x10c5000d  beq         $a2, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x530CE0u;
    {
        const bool branch_taken_0x530ce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x530ce0) {
            ctx->pc = 0x530D18u;
            goto label_530d18;
        }
    }
    ctx->pc = 0x530CE8u;
    // 0x530ce8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x530ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x530cec: 0x10c3000a  beq         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x530CECu;
    {
        const bool branch_taken_0x530cec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530cec) {
            ctx->pc = 0x530D18u;
            goto label_530d18;
        }
    }
    ctx->pc = 0x530CF4u;
    // 0x530cf4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x530cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x530cf8: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x530CF8u;
    {
        const bool branch_taken_0x530cf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530cf8) {
            ctx->pc = 0x530D18u;
            goto label_530d18;
        }
    }
    ctx->pc = 0x530D00u;
    // 0x530d00: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x530d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x530d04: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x530D04u;
    {
        const bool branch_taken_0x530d04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530d04) {
            ctx->pc = 0x530D18u;
            goto label_530d18;
        }
    }
    ctx->pc = 0x530D0Cu;
    // 0x530d0c: 0x8c820e00  lw          $v0, 0xE00($a0)
    ctx->pc = 0x530d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3584)));
    // 0x530d10: 0xc075ecc  jal         func_1D7B30
    ctx->pc = 0x530D10u;
    SET_GPR_U32(ctx, 31, 0x530D18u);
    ctx->pc = 0x530D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530D10u;
            // 0x530d14: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530D18u; }
        if (ctx->pc != 0x530D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530D18u; }
        if (ctx->pc != 0x530D18u) { return; }
    }
    ctx->pc = 0x530D18u;
label_530d18:
    // 0x530d18: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x530d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_530d1c:
    // 0x530d1c: 0x8c640e00  lw          $a0, 0xE00($v1)
    ctx->pc = 0x530d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3584)));
    // 0x530d20: 0x2884003c  slti        $a0, $a0, 0x3C
    ctx->pc = 0x530d20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x530d24: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x530D24u;
    {
        const bool branch_taken_0x530d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x530d24) {
            ctx->pc = 0x530D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530D24u;
            // 0x530d28: 0x8c650db0  lw          $a1, 0xDB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530D40u;
            goto label_530d40;
        }
    }
    ctx->pc = 0x530D2Cu;
    // 0x530d2c: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x530d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x530d30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x530d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x530d34: 0x50a4000a  beql        $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x530D34u;
    {
        const bool branch_taken_0x530d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x530d34) {
            ctx->pc = 0x530D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530D34u;
            // 0x530d38: 0x8c660db0  lw          $a2, 0xDB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530D60u;
            goto label_530d60;
        }
    }
    ctx->pc = 0x530D3Cu;
    // 0x530d3c: 0x8c650db0  lw          $a1, 0xDB0($v1)
    ctx->pc = 0x530d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
label_530d40:
    // 0x530d40: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x530d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x530d44: 0x50a4011b  beql        $a1, $a0, . + 4 + (0x11B << 2)
    ctx->pc = 0x530D44u;
    {
        const bool branch_taken_0x530d44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x530d44) {
            ctx->pc = 0x530D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530D44u;
            // 0x530d48: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5311B4u;
            goto label_5311b4;
        }
    }
    ctx->pc = 0x530D4Cu;
    // 0x530d4c: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x530d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x530d50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x530d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x530d54: 0x14a40116  bne         $a1, $a0, . + 4 + (0x116 << 2)
    ctx->pc = 0x530D54u;
    {
        const bool branch_taken_0x530d54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x530d54) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530D5Cu;
    // 0x530d5c: 0x8c660db0  lw          $a2, 0xDB0($v1)
    ctx->pc = 0x530d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
label_530d60:
    // 0x530d60: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x530d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x530d64: 0x10c40112  beq         $a2, $a0, . + 4 + (0x112 << 2)
    ctx->pc = 0x530D64u;
    {
        const bool branch_taken_0x530d64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x530d64) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530D6Cu;
    // 0x530d6c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x530d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x530d70: 0x10c4010f  beq         $a2, $a0, . + 4 + (0x10F << 2)
    ctx->pc = 0x530D70u;
    {
        const bool branch_taken_0x530d70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x530d70) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530D78u;
    // 0x530d78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x530d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x530d7c: 0x10c5010c  beq         $a2, $a1, . + 4 + (0x10C << 2)
    ctx->pc = 0x530D7Cu;
    {
        const bool branch_taken_0x530d7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x530d7c) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530D84u;
    // 0x530d84: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x530d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x530d88: 0x10c40109  beq         $a2, $a0, . + 4 + (0x109 << 2)
    ctx->pc = 0x530D88u;
    {
        const bool branch_taken_0x530d88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x530d88) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530D90u;
    // 0x530d90: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x530d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x530d94: 0x10c40106  beq         $a2, $a0, . + 4 + (0x106 << 2)
    ctx->pc = 0x530D94u;
    {
        const bool branch_taken_0x530d94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x530d94) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530D9Cu;
    // 0x530d9c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x530d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x530da0: 0x10c40103  beq         $a2, $a0, . + 4 + (0x103 << 2)
    ctx->pc = 0x530DA0u;
    {
        const bool branch_taken_0x530da0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x530da0) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530DA8u;
    // 0x530da8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x530da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x530dac: 0x10c40100  beq         $a2, $a0, . + 4 + (0x100 << 2)
    ctx->pc = 0x530DACu;
    {
        const bool branch_taken_0x530dac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x530dac) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530DB4u;
    // 0x530db4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x530db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x530db8: 0x10c400fd  beq         $a2, $a0, . + 4 + (0xFD << 2)
    ctx->pc = 0x530DB8u;
    {
        const bool branch_taken_0x530db8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x530db8) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530DC0u;
    // 0x530dc0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x530dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x530dc4: 0x10c400fa  beq         $a2, $a0, . + 4 + (0xFA << 2)
    ctx->pc = 0x530DC4u;
    {
        const bool branch_taken_0x530dc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x530dc4) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530DCCu;
    // 0x530dcc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x530dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x530dd0: 0x10c400f7  beq         $a2, $a0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x530DD0u;
    {
        const bool branch_taken_0x530dd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x530dd0) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530DD8u;
    // 0x530dd8: 0x8c640da0  lw          $a0, 0xDA0($v1)
    ctx->pc = 0x530dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
    // 0x530ddc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x530ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x530de0: 0x108000f3  beqz        $a0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x530DE0u;
    {
        const bool branch_taken_0x530de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x530de0) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530DE8u;
    // 0x530de8: 0x10c000f1  beqz        $a2, . + 4 + (0xF1 << 2)
    ctx->pc = 0x530DE8u;
    {
        const bool branch_taken_0x530de8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x530de8) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530DF0u;
    // 0x530df0: 0x8c640d70  lw          $a0, 0xD70($v1)
    ctx->pc = 0x530df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
    // 0x530df4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x530df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x530df8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x530df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x530dfc: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x530DFCu;
    SET_GPR_U32(ctx, 31, 0x530E04u);
    ctx->pc = 0x530E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530DFCu;
            // 0x530e00: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530E04u; }
        if (ctx->pc != 0x530E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530E04u; }
        if (ctx->pc != 0x530E04u) { return; }
    }
    ctx->pc = 0x530E04u;
label_530e04:
    // 0x530e04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x530e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x530e08: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x530e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x530e0c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x530e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x530e10: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x530E10u;
    {
        const bool branch_taken_0x530e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x530E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530E10u;
            // 0x530e14: 0xac6411d4  sw          $a0, 0x11D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530e10) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530E18u;
label_530e18:
    // 0x530e18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x530e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x530e1c: 0x0  nop
    ctx->pc = 0x530e1cu;
    // NOP
    // 0x530e20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x530e20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x530e24: 0x4503003c  bc1tl       . + 4 + (0x3C << 2)
    ctx->pc = 0x530E24u;
    {
        const bool branch_taken_0x530e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x530e24) {
            ctx->pc = 0x530E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530E24u;
            // 0x530e28: 0x8c860db0  lw          $a2, 0xDB0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530F18u;
            goto label_530f18;
        }
    }
    ctx->pc = 0x530E2Cu;
    // 0x530e2c: 0x8c870db0  lw          $a3, 0xDB0($a0)
    ctx->pc = 0x530e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
    // 0x530e30: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x530e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x530e34: 0x50e6002e  beql        $a3, $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x530E34u;
    {
        const bool branch_taken_0x530e34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x530e34) {
            ctx->pc = 0x530E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530E34u;
            // 0x530e38: 0x8203006c  lb          $v1, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x530EF0u;
            goto label_530ef0;
        }
    }
    ctx->pc = 0x530E3Cu;
    // 0x530e3c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x530e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x530e40: 0x10e3002a  beq         $a3, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x530E40u;
    {
        const bool branch_taken_0x530e40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x530e40) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530E48u;
    // 0x530e48: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x530e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x530e4c: 0x10e30027  beq         $a3, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x530E4Cu;
    {
        const bool branch_taken_0x530e4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x530e4c) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530E54u;
    // 0x530e54: 0x10e50025  beq         $a3, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x530E54u;
    {
        const bool branch_taken_0x530e54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x530e54) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530E5Cu;
    // 0x530e5c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x530e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x530e60: 0x10e30022  beq         $a3, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x530E60u;
    {
        const bool branch_taken_0x530e60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x530e60) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530E68u;
    // 0x530e68: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x530e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x530e6c: 0x10e3001f  beq         $a3, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x530E6Cu;
    {
        const bool branch_taken_0x530e6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x530e6c) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530E74u;
    // 0x530e74: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x530e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x530e78: 0x10e3001c  beq         $a3, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x530E78u;
    {
        const bool branch_taken_0x530e78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x530e78) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530E80u;
    // 0x530e80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x530e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x530e84: 0x10e30019  beq         $a3, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x530E84u;
    {
        const bool branch_taken_0x530e84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x530e84) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530E8Cu;
    // 0x530e8c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x530e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x530e90: 0x10e30016  beq         $a3, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x530E90u;
    {
        const bool branch_taken_0x530e90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x530e90) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530E98u;
    // 0x530e98: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x530e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x530e9c: 0x10e30013  beq         $a3, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x530E9Cu;
    {
        const bool branch_taken_0x530e9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x530e9c) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530EA4u;
    // 0x530ea4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x530ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x530ea8: 0x10e30010  beq         $a3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x530EA8u;
    {
        const bool branch_taken_0x530ea8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x530ea8) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530EB0u;
    // 0x530eb0: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x530eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x530eb4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x530eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x530eb8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x530EB8u;
    {
        const bool branch_taken_0x530eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x530eb8) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530EC0u;
    // 0x530ec0: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x530EC0u;
    {
        const bool branch_taken_0x530ec0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x530ec0) {
            ctx->pc = 0x530EECu;
            goto label_530eec;
        }
    }
    ctx->pc = 0x530EC8u;
    // 0x530ec8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x530ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x530ecc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x530eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x530ed0: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x530ED0u;
    SET_GPR_U32(ctx, 31, 0x530ED8u);
    ctx->pc = 0x530ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530ED0u;
            // 0x530ed4: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530ED8u; }
        if (ctx->pc != 0x530ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530ED8u; }
        if (ctx->pc != 0x530ED8u) { return; }
    }
    ctx->pc = 0x530ED8u;
label_530ed8:
    // 0x530ed8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x530ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x530edc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x530edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x530ee0: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x530ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x530ee4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x530ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x530ee8: 0xac6411d4  sw          $a0, 0x11D4($v1)
    ctx->pc = 0x530ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 4));
label_530eec:
    // 0x530eec: 0x8203006c  lb          $v1, 0x6C($s0)
    ctx->pc = 0x530eecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
label_530ef0:
    // 0x530ef0: 0x146000af  bnez        $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x530EF0u;
    {
        const bool branch_taken_0x530ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x530ef0) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530EF8u;
    // 0x530ef8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x530ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x530efc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x530efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x530f00: 0x8c8411d8  lw          $a0, 0x11D8($a0)
    ctx->pc = 0x530f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4568)));
    // 0x530f04: 0x148300aa  bne         $a0, $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x530F04u;
    {
        const bool branch_taken_0x530f04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x530f04) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F0Cu;
    // 0x530f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x530f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x530f10: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x530F10u;
    {
        const bool branch_taken_0x530f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x530F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x530F10u;
            // 0x530f14: 0xa203006c  sb          $v1, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x530f10) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F18u;
label_530f18:
    // 0x530f18: 0x10c000a5  beqz        $a2, . + 4 + (0xA5 << 2)
    ctx->pc = 0x530F18u;
    {
        const bool branch_taken_0x530f18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x530f18) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F20u;
    // 0x530f20: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x530f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x530f24: 0x10c300a2  beq         $a2, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x530F24u;
    {
        const bool branch_taken_0x530f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530f24) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F2Cu;
    // 0x530f2c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x530f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x530f30: 0x10c3009f  beq         $a2, $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x530F30u;
    {
        const bool branch_taken_0x530f30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530f30) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F38u;
    // 0x530f38: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x530f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x530f3c: 0x10c3009c  beq         $a2, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x530F3Cu;
    {
        const bool branch_taken_0x530f3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530f3c) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F44u;
    // 0x530f44: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x530f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x530f48: 0x10c30099  beq         $a2, $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x530F48u;
    {
        const bool branch_taken_0x530f48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530f48) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F50u;
    // 0x530f50: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x530f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x530f54: 0x10c30096  beq         $a2, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x530F54u;
    {
        const bool branch_taken_0x530f54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530f54) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F5Cu;
    // 0x530f5c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x530f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x530f60: 0x10c30093  beq         $a2, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x530F60u;
    {
        const bool branch_taken_0x530f60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530f60) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F68u;
    // 0x530f68: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x530f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x530f6c: 0x10c30090  beq         $a2, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x530F6Cu;
    {
        const bool branch_taken_0x530f6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530f6c) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F74u;
    // 0x530f74: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x530f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x530f78: 0x10c3008d  beq         $a2, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x530F78u;
    {
        const bool branch_taken_0x530f78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x530f78) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F80u;
    // 0x530f80: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x530f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x530f84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x530f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x530f88: 0x10600089  beqz        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x530F88u;
    {
        const bool branch_taken_0x530f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x530f88) {
            ctx->pc = 0x5311B0u;
            goto label_5311b0;
        }
    }
    ctx->pc = 0x530F90u;
    // 0x530f90: 0x8c820e00  lw          $v0, 0xE00($a0)
    ctx->pc = 0x530f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3584)));
    // 0x530f94: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x530F94u;
    {
        const bool branch_taken_0x530f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x530f94) {
            ctx->pc = 0x530F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530F94u;
            // 0x530f98: 0xc4800de4  lwc1        $f0, 0xDE4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5310E4u;
            goto label_5310e4;
        }
    }
    ctx->pc = 0x530F9Cu;
    // 0x530f9c: 0x8202006c  lb          $v0, 0x6C($s0)
    ctx->pc = 0x530f9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x530fa0: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x530FA0u;
    {
        const bool branch_taken_0x530fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x530fa0) {
            ctx->pc = 0x530FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530FA0u;
            // 0x530fa4: 0xae050060  sw          $a1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53103Cu;
            goto label_53103c;
        }
    }
    ctx->pc = 0x530FA8u;
    // 0x530fa8: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x530fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x530fac: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x530facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x530fb0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x530fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x530fb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x530fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x530fb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x530fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x530fbc: 0xac6411d4  sw          $a0, 0x11D4($v1)
    ctx->pc = 0x530fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 4));
    // 0x530fc0: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x530fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x530fc4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x530fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x530fc8: 0x8c440d70  lw          $a0, 0xD70($v0)
    ctx->pc = 0x530fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x530fcc: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x530FCCu;
    SET_GPR_U32(ctx, 31, 0x530FD4u);
    ctx->pc = 0x530FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530FCCu;
            // 0x530fd0: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530FD4u; }
        if (ctx->pc != 0x530FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530FD4u; }
        if (ctx->pc != 0x530FD4u) { return; }
    }
    ctx->pc = 0x530FD4u;
label_530fd4:
    // 0x530fd4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x530fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x530fd8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x530FD8u;
    {
        const bool branch_taken_0x530fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x530fd8) {
            ctx->pc = 0x530FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530FD8u;
            // 0x530fdc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531010u;
            goto label_531010;
        }
    }
    ctx->pc = 0x530FE0u;
    // 0x530fe0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x530fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x530fe4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x530fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x530fe8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x530fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x530fec: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x530fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x530ff0: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x530ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x530ff4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x530ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x530ff8: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x530ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x530ffc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x530ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x531000: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x531000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x531004: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x531004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x531008: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x531008u;
    {
        const bool branch_taken_0x531008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53100Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531008u;
            // 0x53100c: 0xac430060  sw          $v1, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531008) {
            ctx->pc = 0x531198u;
            goto label_531198;
        }
    }
    ctx->pc = 0x531010u;
label_531010:
    // 0x531010: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x531010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x531014: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x531014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x531018: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x531018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x53101c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x53101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x531020: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x531020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x531024: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x531024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x531028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x531028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x53102c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x53102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x531030: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x531030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x531034: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x531034u;
    {
        const bool branch_taken_0x531034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531034u;
            // 0x531038: 0xac400060  sw          $zero, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531034) {
            ctx->pc = 0x531198u;
            goto label_531198;
        }
    }
    ctx->pc = 0x53103Cu;
label_53103c:
    // 0x53103c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x53103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x531040: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x531040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x531044: 0xac6511d4  sw          $a1, 0x11D4($v1)
    ctx->pc = 0x531044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 5));
    // 0x531048: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x531048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
    // 0x53104c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x53104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x531050: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x531050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x531054: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x531054u;
    SET_GPR_U32(ctx, 31, 0x53105Cu);
    ctx->pc = 0x531058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531054u;
            // 0x531058: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53105Cu; }
        if (ctx->pc != 0x53105Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53105Cu; }
        if (ctx->pc != 0x53105Cu) { return; }
    }
    ctx->pc = 0x53105Cu;
label_53105c:
    // 0x53105c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x53105cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x531060: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x531060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x531064: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x531064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x531068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x531068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x53106c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x53106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x531070: 0x8c440d70  lw          $a0, 0xD70($v0)
    ctx->pc = 0x531070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x531074: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x531074u;
    SET_GPR_U32(ctx, 31, 0x53107Cu);
    ctx->pc = 0x531078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531074u;
            // 0x531078: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53107Cu; }
        if (ctx->pc != 0x53107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53107Cu; }
        if (ctx->pc != 0x53107Cu) { return; }
    }
    ctx->pc = 0x53107Cu;
label_53107c:
    // 0x53107c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x53107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x531080: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x531080u;
    {
        const bool branch_taken_0x531080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x531080) {
            ctx->pc = 0x531084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531080u;
            // 0x531084: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5310B8u;
            goto label_5310b8;
        }
    }
    ctx->pc = 0x531088u;
    // 0x531088: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x531088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x53108c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x53108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x531090: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x531090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x531094: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x531094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x531098: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x531098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x53109c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x53109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5310a0: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x5310a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x5310a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5310a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5310a8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x5310a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x5310ac: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x5310acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x5310b0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x5310B0u;
    {
        const bool branch_taken_0x5310b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5310B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5310B0u;
            // 0x5310b4: 0xac430060  sw          $v1, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5310b0) {
            ctx->pc = 0x531198u;
            goto label_531198;
        }
    }
    ctx->pc = 0x5310B8u;
label_5310b8:
    // 0x5310b8: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x5310b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x5310bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5310bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5310c0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x5310c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x5310c4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x5310c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x5310c8: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x5310c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x5310cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5310ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5310d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5310d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5310d4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x5310d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x5310d8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x5310d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x5310dc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x5310DCu;
    {
        const bool branch_taken_0x5310dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5310E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5310DCu;
            // 0x5310e0: 0xac400060  sw          $zero, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5310dc) {
            ctx->pc = 0x531198u;
            goto label_531198;
        }
    }
    ctx->pc = 0x5310E4u;
label_5310e4:
    // 0x5310e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5310e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5310e8: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x5310E8u;
    {
        const bool branch_taken_0x5310e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5310e8) {
            ctx->pc = 0x5310ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5310E8u;
            // 0x5310ec: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53119Cu;
            goto label_53119c;
        }
    }
    ctx->pc = 0x5310F0u;
    // 0x5310f0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x5310f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x5310f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5310f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x5310f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x5310f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x5310fc: 0xac6011d4  sw          $zero, 0x11D4($v1)
    ctx->pc = 0x5310fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 0));
    // 0x531100: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x531100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
    // 0x531104: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x531104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x531108: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x531108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x53110c: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x53110Cu;
    SET_GPR_U32(ctx, 31, 0x531114u);
    ctx->pc = 0x531110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53110Cu;
            // 0x531110: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531114u; }
        if (ctx->pc != 0x531114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531114u; }
        if (ctx->pc != 0x531114u) { return; }
    }
    ctx->pc = 0x531114u;
label_531114:
    // 0x531114: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x531114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x531118: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x531118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x53111c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x53111cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x531120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x531120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x531124: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x531124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x531128: 0x8c440d70  lw          $a0, 0xD70($v0)
    ctx->pc = 0x531128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x53112c: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x53112Cu;
    SET_GPR_U32(ctx, 31, 0x531134u);
    ctx->pc = 0x531130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53112Cu;
            // 0x531130: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531134u; }
        if (ctx->pc != 0x531134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531134u; }
        if (ctx->pc != 0x531134u) { return; }
    }
    ctx->pc = 0x531134u;
label_531134:
    // 0x531134: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x531134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x531138: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x531138u;
    {
        const bool branch_taken_0x531138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x531138) {
            ctx->pc = 0x53113Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531138u;
            // 0x53113c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531170u;
            goto label_531170;
        }
    }
    ctx->pc = 0x531140u;
    // 0x531140: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x531140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x531144: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x531144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x531148: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x531148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x53114c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x53114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x531150: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x531150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x531154: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x531154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x531158: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x531158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x53115c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x53115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x531160: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x531160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x531164: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x531164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x531168: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x531168u;
    {
        const bool branch_taken_0x531168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531168u;
            // 0x53116c: 0xac430060  sw          $v1, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531168) {
            ctx->pc = 0x531198u;
            goto label_531198;
        }
    }
    ctx->pc = 0x531170u;
label_531170:
    // 0x531170: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x531170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x531174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x531174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x531178: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x531178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x53117c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x53117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x531180: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x531180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x531184: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x531184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x531188: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x531188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x53118c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x53118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x531190: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x531190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x531194: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x531194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_531198:
    // 0x531198: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x531198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_53119c:
    // 0x53119c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x53119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x5311a0: 0xac4011d8  sw          $zero, 0x11D8($v0)
    ctx->pc = 0x5311a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4568), GPR_U32(ctx, 0));
    // 0x5311a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x5311a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x5311a8: 0xc0b6764  jal         func_2D9D90
    ctx->pc = 0x5311A8u;
    SET_GPR_U32(ctx, 31, 0x5311B0u);
    ctx->pc = 0x5311ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5311A8u;
            // 0x5311ac: 0x8c440d74  lw          $a0, 0xD74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5311B0u; }
        if (ctx->pc != 0x5311B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5311B0u; }
        if (ctx->pc != 0x5311B0u) { return; }
    }
    ctx->pc = 0x5311B0u;
label_5311b0:
    // 0x5311b0: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x5311b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_5311b4:
    // 0x5311b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5311b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x5311b8: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x5311B8u;
    {
        const bool branch_taken_0x5311b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5311b8) {
            ctx->pc = 0x5311BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5311B8u;
            // 0x5311bc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5311D4u;
            goto label_5311d4;
        }
    }
    ctx->pc = 0x5311C0u;
    // 0x5311c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5311c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5311c4: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x5311C4u;
    {
        const bool branch_taken_0x5311c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5311c4) {
            ctx->pc = 0x531240u;
            goto label_531240;
        }
    }
    ctx->pc = 0x5311CCu;
    // 0x5311cc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x5311CCu;
    {
        const bool branch_taken_0x5311cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5311cc) {
            ctx->pc = 0x531240u;
            goto label_531240;
        }
    }
    ctx->pc = 0x5311D4u;
label_5311d4:
    // 0x5311d4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x5311d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x5311d8: 0x8ca40db0  lw          $a0, 0xDB0($a1)
    ctx->pc = 0x5311d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
    // 0x5311dc: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x5311DCu;
    {
        const bool branch_taken_0x5311dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x5311dc) {
            ctx->pc = 0x531240u;
            goto label_531240;
        }
    }
    ctx->pc = 0x5311E4u;
    // 0x5311e4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x5311e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x5311e8: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x5311E8u;
    {
        const bool branch_taken_0x5311e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5311e8) {
            ctx->pc = 0x531240u;
            goto label_531240;
        }
    }
    ctx->pc = 0x5311F0u;
    // 0x5311f0: 0x3c033f55  lui         $v1, 0x3F55
    ctx->pc = 0x5311f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16213 << 16));
    // 0x5311f4: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x5311f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
    // 0x5311f8: 0xc4a20de4  lwc1        $f2, 0xDE4($a1)
    ctx->pc = 0x5311f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x5311fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5311fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531200: 0x0  nop
    ctx->pc = 0x531200u;
    // NOP
    // 0x531204: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x531204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x531208: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x531208u;
    {
        const bool branch_taken_0x531208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x531208) {
            ctx->pc = 0x531240u;
            goto label_531240;
        }
    }
    ctx->pc = 0x531210u;
    // 0x531210: 0xc4a10df4  lwc1        $f1, 0xDF4($a1)
    ctx->pc = 0x531210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x531214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x531214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531218: 0x0  nop
    ctx->pc = 0x531218u;
    // NOP
    // 0x53121c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x53121cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x531220: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x531220u;
    {
        const bool branch_taken_0x531220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x531220) {
            ctx->pc = 0x531240u;
            goto label_531240;
        }
    }
    ctx->pc = 0x531228u;
    // 0x531228: 0x3c033b97  lui         $v1, 0x3B97
    ctx->pc = 0x531228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15255 << 16));
    // 0x53122c: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x53122cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
    // 0x531230: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x531230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531234: 0x0  nop
    ctx->pc = 0x531234u;
    // NOP
    // 0x531238: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x531238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x53123c: 0xe4a00de4  swc1        $f0, 0xDE4($a1)
    ctx->pc = 0x53123cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 3556), bits); }
label_531240:
    // 0x531240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x531240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_531244:
    // 0x531244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x531244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x531248: 0x3e00008  jr          $ra
    ctx->pc = 0x531248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53124Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531248u;
            // 0x53124c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x531250u;
}
