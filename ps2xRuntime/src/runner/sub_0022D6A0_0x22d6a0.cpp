#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D6A0
// Address: 0x22d6a0 - 0x22d9b0
void sub_0022D6A0_0x22d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D6A0_0x22d6a0");
#endif

    switch (ctx->pc) {
        case 0x22d8acu: goto label_22d8ac;
        case 0x22d8f8u: goto label_22d8f8;
        case 0x22d93cu: goto label_22d93c;
        case 0x22d998u: goto label_22d998;
        default: break;
    }

    ctx->pc = 0x22d6a0u;

    // 0x22d6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22d6a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22d6a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22d6ac: 0x3c188000  lui         $t8, 0x8000
    ctx->pc = 0x22d6acu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)32768 << 16));
    // 0x22d6b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22d6b4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x22d6b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d6bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x22d6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22d6c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22d6c4: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x22d6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x22d6c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22d6cc: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x22d6ccu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x22d6d0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x22d6d4: 0x64100004  daddiu      $s0, $zero, 0x4
    ctx->pc = 0x22d6d4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x22d6d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22d6dc: 0x2419ffd1  addiu       $t9, $zero, -0x2F
    ctx->pc = 0x22d6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x22d6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d6e4: 0x3c0fc120  lui         $t7, 0xC120
    ctx->pc = 0x22d6e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)49440 << 16));
    // 0x22d6e8: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22d6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d6ec: 0x370d0001  ori         $t5, $t8, 0x1
    ctx->pc = 0x22d6ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1);
    // 0x22d6f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22d6f4: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x22d6f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x22d6f8: 0x2442eeb0  addiu       $v0, $v0, -0x1150
    ctx->pc = 0x22d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962864));
    // 0x22d6fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22d700: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22d704: 0x2442f060  addiu       $v0, $v0, -0xFA0
    ctx->pc = 0x22d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963296));
    // 0x22d708: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22d708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22d70c: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x22d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x22d710: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x22d710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x22d714: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x22d714u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x22d718: 0x2405ffcf  addiu       $a1, $zero, -0x31
    ctx->pc = 0x22d718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x22d71c: 0xa0800025  sb          $zero, 0x25($a0)
    ctx->pc = 0x22d71cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d720: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x22d720u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22d724: 0xa0800026  sb          $zero, 0x26($a0)
    ctx->pc = 0x22d724u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d728: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x22d728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x22d72c: 0x90880027  lbu         $t0, 0x27($a0)
    ctx->pc = 0x22d72cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x22d730: 0x25180  sll         $t2, $v0, 6
    ctx->pc = 0x22d730u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x22d734: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x22d734u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x22d738: 0x1024825  or          $t1, $t0, $v0
    ctx->pc = 0x22d738u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x22d73c: 0xa0890027  sb          $t1, 0x27($a0)
    ctx->pc = 0x22d73cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 9));
    // 0x22d740: 0x2488004c  addiu       $t0, $a0, 0x4C
    ctx->pc = 0x22d740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x22d744: 0x90890027  lbu         $t1, 0x27($a0)
    ctx->pc = 0x22d744u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x22d748: 0x250e000c  addiu       $t6, $t0, 0xC
    ctx->pc = 0x22d748u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x22d74c: 0x2488005c  addiu       $t0, $a0, 0x5C
    ctx->pc = 0x22d74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x22d750: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x22d750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x22d754: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x22d754u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x22d758: 0x250c000c  addiu       $t4, $t0, 0xC
    ctx->pc = 0x22d758u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x22d75c: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x22d75cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x22d760: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x22d760u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22d764: 0xa0890027  sb          $t1, 0x27($a0)
    ctx->pc = 0x22d764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 9));
    // 0x22d768: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22d768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d76c: 0x90920028  lbu         $s2, 0x28($a0)
    ctx->pc = 0x22d76cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x22d770: 0x2409ff3f  addiu       $t1, $zero, -0xC1
    ctx->pc = 0x22d770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x22d774: 0x2473824  and         $a3, $s2, $a3
    ctx->pc = 0x22d774u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & GPR_U64(ctx, 7));
    // 0x22d778: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x22d778u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x22d77c: 0xa0870028  sb          $a3, 0x28($a0)
    ctx->pc = 0x22d77cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 7));
    // 0x22d780: 0x90870028  lbu         $a3, 0x28($a0)
    ctx->pc = 0x22d780u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x22d784: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x22d784u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x22d788: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x22d788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x22d78c: 0xa0870028  sb          $a3, 0x28($a0)
    ctx->pc = 0x22d78cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 7));
    // 0x22d790: 0x90870028  lbu         $a3, 0x28($a0)
    ctx->pc = 0x22d790u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x22d794: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x22d794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x22d798: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x22d798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x22d79c: 0xa0850028  sb          $a1, 0x28($a0)
    ctx->pc = 0x22d79cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x22d7a0: 0xac99002c  sw          $t9, 0x2C($a0)
    ctx->pc = 0x22d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 25));
    // 0x22d7a4: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x22d7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x22d7a8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x22d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x22d7ac: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x22d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x22d7b0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x22d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x22d7b4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x22d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x22d7b8: 0xac980044  sw          $t8, 0x44($a0)
    ctx->pc = 0x22d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 24));
    // 0x22d7bc: 0xac8f0048  sw          $t7, 0x48($a0)
    ctx->pc = 0x22d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 15));
    // 0x22d7c0: 0xac8e004c  sw          $t6, 0x4C($a0)
    ctx->pc = 0x22d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 14));
    // 0x22d7c4: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x22d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x22d7c8: 0xac8d0054  sw          $t5, 0x54($a0)
    ctx->pc = 0x22d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 13));
    // 0x22d7cc: 0xac8c0060  sw          $t4, 0x60($a0)
    ctx->pc = 0x22d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 12));
    // 0x22d7d0: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x22d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x22d7d4: 0xac8d0068  sw          $t5, 0x68($a0)
    ctx->pc = 0x22d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 13));
    // 0x22d7d8: 0xac8b005c  sw          $t3, 0x5C($a0)
    ctx->pc = 0x22d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 11));
    // 0x22d7dc: 0x90850027  lbu         $a1, 0x27($a0)
    ctx->pc = 0x22d7dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x22d7e0: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x22d7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x22d7e4: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x22d7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x22d7e8: 0xa0850027  sb          $a1, 0x27($a0)
    ctx->pc = 0x22d7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 5));
    // 0x22d7ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x22d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x22d7f0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x22d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x22d7f4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x22d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x22d7f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x22d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x22d7fc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x22d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x22d800: 0x90850027  lbu         $a1, 0x27($a0)
    ctx->pc = 0x22d800u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x22d804: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x22d804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x22d808: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x22d808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x22d80c: 0xa0830027  sb          $v1, 0x27($a0)
    ctx->pc = 0x22d80cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d81c: 0x3e00008  jr          $ra
    ctx->pc = 0x22D81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D81Cu;
            // 0x22d820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D824u;
    // 0x22d824: 0x0  nop
    ctx->pc = 0x22d824u;
    // NOP
    // 0x22d828: 0x0  nop
    ctx->pc = 0x22d828u;
    // NOP
    // 0x22d82c: 0x0  nop
    ctx->pc = 0x22d82cu;
    // NOP
    // 0x22d830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22d834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22d838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22d83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22d840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d844: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
    ctx->pc = 0x22D844u;
    {
        const bool branch_taken_0x22d844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D844u;
            // 0x22d848: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d844) {
            ctx->pc = 0x22D998u;
            goto label_22d998;
        }
    }
    ctx->pc = 0x22D84Cu;
    // 0x22d84c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x22d850: 0x2622005c  addiu       $v0, $s1, 0x5C
    ctx->pc = 0x22d850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x22d854: 0x2463f060  addiu       $v1, $v1, -0xFA0
    ctx->pc = 0x22d854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963296));
    // 0x22d858: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22D858u;
    {
        const bool branch_taken_0x22d858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D858u;
            // 0x22d85c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d858) {
            ctx->pc = 0x22D8ACu;
            goto label_22d8ac;
        }
    }
    ctx->pc = 0x22D860u;
    // 0x22d860: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x22d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x22d864: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x22D864u;
    {
        const bool branch_taken_0x22d864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d864) {
            ctx->pc = 0x22D868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D864u;
            // 0x22d868: 0x2622004c  addiu       $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D8B0u;
            goto label_22d8b0;
        }
    }
    ctx->pc = 0x22D86Cu;
    // 0x22d86c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22D86Cu;
    {
        const bool branch_taken_0x22d86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d86c) {
            ctx->pc = 0x22D8ACu;
            goto label_22d8ac;
        }
    }
    ctx->pc = 0x22D874u;
    // 0x22d874: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x22d874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x22d878: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22d878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22d87c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22d87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22d880: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22D880u;
    {
        const bool branch_taken_0x22d880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d880) {
            ctx->pc = 0x22D8ACu;
            goto label_22d8ac;
        }
    }
    ctx->pc = 0x22D888u;
    // 0x22d888: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22d888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22d88c: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x22d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x22d890: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22d890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22d894: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22d894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x22d898: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x22d898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x22d89c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22d89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22d8a0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22d8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x22d8a4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x22D8A4u;
    SET_GPR_U32(ctx, 31, 0x22D8ACu);
    ctx->pc = 0x22D8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D8A4u;
            // 0x22d8a8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8ACu; }
        if (ctx->pc != 0x22D8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8ACu; }
        if (ctx->pc != 0x22D8ACu) { return; }
    }
    ctx->pc = 0x22D8ACu;
label_22d8ac:
    // 0x22d8ac: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x22d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_22d8b0:
    // 0x22d8b0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x22D8B0u;
    {
        const bool branch_taken_0x22d8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d8b0) {
            ctx->pc = 0x22D8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D8B0u;
            // 0x22d8b4: 0x2622003c  addiu       $v0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D8FCu;
            goto label_22d8fc;
        }
    }
    ctx->pc = 0x22D8B8u;
    // 0x22d8b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22D8B8u;
    {
        const bool branch_taken_0x22d8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d8b8) {
            ctx->pc = 0x22D8F8u;
            goto label_22d8f8;
        }
    }
    ctx->pc = 0x22D8C0u;
    // 0x22d8c0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x22d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x22d8c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22d8c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22d8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22d8cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22D8CCu;
    {
        const bool branch_taken_0x22d8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d8cc) {
            ctx->pc = 0x22D8F8u;
            goto label_22d8f8;
        }
    }
    ctx->pc = 0x22D8D4u;
    // 0x22d8d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22d8d8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x22d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x22d8dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22d8e0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22d8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x22d8e4: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x22d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x22d8e8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22d8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22d8ec: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22d8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x22d8f0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x22D8F0u;
    SET_GPR_U32(ctx, 31, 0x22D8F8u);
    ctx->pc = 0x22D8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D8F0u;
            // 0x22d8f4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8F8u; }
        if (ctx->pc != 0x22D8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8F8u; }
        if (ctx->pc != 0x22D8F8u) { return; }
    }
    ctx->pc = 0x22D8F8u;
label_22d8f8:
    // 0x22d8f8: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x22d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_22d8fc:
    // 0x22d8fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22D8FCu;
    {
        const bool branch_taken_0x22d8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d8fc) {
            ctx->pc = 0x22D93Cu;
            goto label_22d93c;
        }
    }
    ctx->pc = 0x22D904u;
    // 0x22d904: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x22d904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x22d908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22d908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22d90c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22d910: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22D910u;
    {
        const bool branch_taken_0x22d910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d910) {
            ctx->pc = 0x22D93Cu;
            goto label_22d93c;
        }
    }
    ctx->pc = 0x22D918u;
    // 0x22d918: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22d918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22d91c: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x22d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x22d920: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22d920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22d924: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22d924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x22d928: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x22d928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x22d92c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22d92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22d930: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22d930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x22d934: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x22D934u;
    SET_GPR_U32(ctx, 31, 0x22D93Cu);
    ctx->pc = 0x22D938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D934u;
            // 0x22d938: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D93Cu; }
        if (ctx->pc != 0x22D93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D93Cu; }
        if (ctx->pc != 0x22D93Cu) { return; }
    }
    ctx->pc = 0x22D93Cu;
label_22d93c:
    // 0x22d93c: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x22D93Cu;
    {
        const bool branch_taken_0x22d93c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d93c) {
            ctx->pc = 0x22D940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D93Cu;
            // 0x22d940: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D974u;
            goto label_22d974;
        }
    }
    ctx->pc = 0x22D944u;
    // 0x22d944: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22d948: 0x2442eeb0  addiu       $v0, $v0, -0x1150
    ctx->pc = 0x22d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962864));
    // 0x22d94c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22D94Cu;
    {
        const bool branch_taken_0x22d94c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D94Cu;
            // 0x22d950: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d94c) {
            ctx->pc = 0x22D970u;
            goto label_22d970;
        }
    }
    ctx->pc = 0x22D954u;
    // 0x22d954: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22d958: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x22d95c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D95Cu;
    {
        const bool branch_taken_0x22d95c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D95Cu;
            // 0x22d960: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d95c) {
            ctx->pc = 0x22D970u;
            goto label_22d970;
        }
    }
    ctx->pc = 0x22D964u;
    // 0x22d964: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22d964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22d968: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x22d96c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22d970:
    // 0x22d970: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x22d970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_22d974:
    // 0x22d974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22d974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22d978: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22D978u;
    {
        const bool branch_taken_0x22d978 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22d978) {
            ctx->pc = 0x22D97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D978u;
            // 0x22d97c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D99Cu;
            goto label_22d99c;
        }
    }
    ctx->pc = 0x22D980u;
    // 0x22d980: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22d980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22d984: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x22d984u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x22d988: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22d988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22d98c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d990: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x22D990u;
    SET_GPR_U32(ctx, 31, 0x22D998u);
    ctx->pc = 0x22D994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D990u;
            // 0x22d994: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D998u; }
        if (ctx->pc != 0x22D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D998u; }
        if (ctx->pc != 0x22D998u) { return; }
    }
    ctx->pc = 0x22D998u;
label_22d998:
    // 0x22d998: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22d998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d99c:
    // 0x22d99c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22d99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d9a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d9a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D9A8u;
            // 0x22d9ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D9B0u;
}
