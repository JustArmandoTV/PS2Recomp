#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00422390
// Address: 0x422390 - 0x422490
void sub_00422390_0x422390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422390_0x422390");
#endif

    ctx->pc = 0x422390u;

    // 0x422390: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x422390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x422394: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x422394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422398: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x422398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x42239c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x42239cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4223a0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4223a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x4223a4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x4223a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x4223a8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4223a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x4223ac: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x4223acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x4223b0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x4223b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x4223b4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x4223b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x4223b8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x4223b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x4223bc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x4223bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x4223c0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x4223c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x4223c4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x4223c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x4223c8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x4223c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x4223cc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x4223ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x4223d0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4223d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x4223d4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x4223d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x4223d8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x4223d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x4223dc: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4223dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x4223e0: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x4223e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x4223e4: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x4223e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x4223e8: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x4223e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x4223ec: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x4223ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x4223f0: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x4223f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x4223f4: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x4223f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x4223f8: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x4223f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x4223fc: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x4223fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x422400: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x422400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x422404: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x422404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x422408: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x422408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x42240c: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x42240cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x422410: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x422410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x422414: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x422414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x422418: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x422418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x42241c: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x42241cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x422420: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x422420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x422424: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x422424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x422428: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x422428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x42242c: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x42242cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x422430: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x422430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x422434: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x422434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x422438: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x422438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x42243c: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x42243cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x422440: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x422440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x422444: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x422444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x422448: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x422448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x42244c: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x42244cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x422450: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x422450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x422454: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x422454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x422458: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x422458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x42245c: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x42245cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x422460: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x422460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x422464: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x422464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x422468: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x422468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x42246c: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x42246cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x422470: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x422470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x422474: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x422474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x422478: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x422478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x42247c: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x42247cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x422480: 0x3e00008  jr          $ra
    ctx->pc = 0x422480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422480u;
            // 0x422484: 0xac8000ec  sw          $zero, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x422488u;
    // 0x422488: 0x0  nop
    ctx->pc = 0x422488u;
    // NOP
    // 0x42248c: 0x0  nop
    ctx->pc = 0x42248cu;
    // NOP
}
